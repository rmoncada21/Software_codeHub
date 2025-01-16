#ifndef TIME_H
#define TIME_H

typedef struct time{
    int hours;
    int minutes;
    int seconds;
}time_t;

typedef struct flag{
    int flag_minutes;
    int flag_hours;

}flag_t;

// Prototipos de funciones
time_t add_time(time_t t1, time_t t2);

#endif