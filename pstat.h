#ifndef _PSTAT_H_
#define _PSTAT_H_

#include "param.h"

struct proc_stat
{
    int pid;           // PID of each process
    float runtime;     // Total runtime
    int num_run;       // number of time the process is executed
    int current_queue; // current assigned queue
    int ticks[5];      // number of ticks each process has received at each of the 5 priority queues
};

#endif // _PSTAT_H_