#include <stdio.h>
#include "time.h"

time_t add_time(time_t t1, time_t t2){
    time_t suma;
    flag_t carry;
    
    suma.seconds=t1.seconds+t2.seconds;
    printf("\nPrimer suma.seconds:%i\n", suma.seconds);

    if(suma.seconds>60){
        carry.flag_minutes=suma.seconds/60;
        printf("carry.flag_minutes:%d\n", carry.flag_minutes);
        suma.seconds=(int)suma.seconds%60;
        printf("Dentro de if - suma.seconds:%i\n", suma.seconds);
    }else{
        carry.flag_minutes=0;
    }

    suma.minutes=t1.minutes+t2.minutes+carry.flag_minutes;
    printf("\nPrimer suma.minutes:%i\n", suma.minutes);

    if(suma.minutes>60){
        carry.flag_hours=suma.minutes/60;
        printf("carry.flag_hours:%i\n", carry.flag_hours);
        suma.minutes=(int)suma.minutes%60;
        printf("Dentro de if - suma.minutes:%i\n", suma.minutes);
    }else{
        carry.flag_hours=0;
    }

    suma.hours=t1.hours+t2.hours+carry.flag_hours;
    printf("\nPrimer suma.hours:%i\n", suma.hours);


    return suma;
}