#include <pthread.h>
#include <stdio.h>

pthread_t pid;

void start0(void* args) {
  while(1) {
    usleep(100);
    printf("I am new thread.\n");
  }
}


int main() {
  //startup a thread
  pthread_create(&pid,NULL,start0,NULL);
  
  while(1) {
    usleep(100);
    printf(I am main\n);
  }
}


