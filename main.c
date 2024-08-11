#include<stdio.h>
#include<pthread.h>


pthread_t thread1;
pthread_t thread2;
pthread_t thread3;

pthread_mutex_t mutex;

void* thread1_handler(void* arg)
{
    ret = pthread_mutex_lock(&mutex);
    printf(" thread1 \n");

    ret = pthread_mutex_unlock(&mutex);

    pthread_join(&thread1, NULL);
}

void* thread2_handler(void* arg)
{
    printf(" thread2 \n");

    pthread_join(&thread2, NULL);
}

void* thread3_handler(void* arg)
{
    printf(" thread3 \n");

    pthread_join(&thread3, NULL);
}

int main()
{
    int ret=0;

    printf(" multithreading application \n ");

    void* arg = "arguement";

    pthread_mutex_init(&mutex, NULL);

    ret = pthread_create (&thread1,
                         NULL,
                         &thread1_handler,
                         &arg);

    ret = pthread_create (&thread2,
                         NULL,
                         &thread2_handler,
                         &arg);

    ret = pthread_create (&thread3,
                         NULL,
                         &thread3_handler,
                         &arg);

    
    
    return 0;
}