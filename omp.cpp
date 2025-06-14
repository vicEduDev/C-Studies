#include <iostream>
#include "omp.h"

int  main(){
    #pragma omp parallel
    {
        printf("My name is THREADS MAN! I'm using thread %d\n", omp_get_thread_num());
    }
    return 0;
}
