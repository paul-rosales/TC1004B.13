#include <stdio.h>
#include <unistd.h>
#include <ctype.h>

#define NUM_THREADS 20

void * printHola(void *arg){
    printf("Hola deasde hilo\n");
}
int main(){
    pthread_t threads[NUM_THREADS];
    for(int i=0; i<NUM_THREADS; i++){
        pthread_create(threads[i], NULL);
    }
}