#Average time function from 
#https://stackoverflow.com/questions/54920113/calculate-average-execution-time-of-a-program-using-bash
avg_time() {
    n=$1; shift
    (($# > 0)) || return                   # bail if no command given
    for ((i = 0; i < n; i++)); do
        { time -p nice -n -15 "$@" &>/dev/null; } 2>&1 # ignore the output of the command
    done | awk '
    /real/ { real = real + $2; nr++ }
    /user/ { user = user + $2; nu++ }
    /sys/  { sys  = sys  + $2; ns++}
        END    {
                if (nr>0) printf("real %f\n", real/nr);
                if (nu>0) printf("user %f\n", user/nu);
                if (ns>0) printf("sys %f\n",  sys/ns)
               }' 
}

avg_time_alt() { 
    local -i n=$1
    local foo real sys user
    shift
    (($# > 0)) || return;
    { read foo real; read foo user; read foo sys ;} < <(
        { time -p for((;n--;)){ nice -n -15 "$@" &>/dev/null ;} ;} 2>&1
    )
    printf "real: %.5f\nuser: %.5f\nsys : %.5f\n" $(
        bc -l <<<"$real/$n;$user/$n;$sys/$n;" )
}

#What q's to run
START_Q=3;
END_Q=5;
PERSON="Oliver";

#make files needed
for i in $(seq $START_Q $END_Q);
    do { make -C ./$PERSON/p$i &>/dev/null; } 2>&1
done

#STATS
echo $PERSON
echo "------------------------"
for i in $(seq $START_Q $END_Q);
    do echo "Problem "$i ; avg_time_alt 100 ./$PERSON/p$i/a.out ;
done

#add auto write?


#clean files not needed any more
for i in $(seq $START_Q $END_Q); 
    do { make clean -C ./$PERSON/p$i &>/dev/null; } 2>&1 
done


