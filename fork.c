#include <unistd.h>
#include <stdio.h>

int main(){
    printf("Soy el proceso padre\n");
    int pid = fork();
    if (pid == 0){
        printf("soy el proceso hijo");
    } else {
        printf("soy otro el proceso padre y mi hijo es: %d\n", pid);
    }
    return 0;
}