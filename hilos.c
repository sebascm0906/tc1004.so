#include <pthread.h>
#include <stdio.h>

int saldo;

void *holaHilo(){
    printf("Hola desde un hilo\n");
    pthread_exit(NULL);
}

void *incrementa(){
    saldo = saldo + 100;
    printf("el saldo actual es de %d\n", saldo);
    pthread_exit(NULL);
}

int main(){
    saldo = 0;
    for (int i = 0; i<100; i++){
        pthread_t t;
        pthread_create(&t,NULL,incrementa,NULL);
        // pthread_create(&t,NULL,holaHilo,NULL);
    }
    // pthread_t t;
    // pthread_create(&t,NULL,holaHilo,NULL);
    pthread_exit(NULL);
}