#include <stdio.h>
#include <unistd.h>
#include <signal.h>

void handle(int numsignal){
    printf("Jajajajaj %d", numsignal);
}

int main(){
    signal(2, handle);
    while(1){
        printf("Trabajando\n");
        sleep(1);
    }
    return 0;
}