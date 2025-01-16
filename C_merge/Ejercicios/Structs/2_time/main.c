#include <stdio.h>

#include "time.h"


int main(){
    time_t t1={1, 30, 100};
    time_t t2={0, 31, 35};
    
    time_t time=add_time(t1, t2);

    printf("%ih, %im: %is\n", time.hours, time.minutes, 
        time.seconds);
    
    return 0;
}
