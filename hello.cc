#include <iostream>
#include <stdio.h>
#include <pthread.h>
#include <stdlib.h>

//CONSTANTS
#define NUM_THREADS 5

using namespace std;
int  counter = 0;

void Thread_routine(void *threadid)
{
   long tid;
   tid = (long)threadid;
   cout << "Hello World! Thread ID, " << tid << endl;
   pthread_exit(NULL);
}

pthread_mutex_t mutex1 = PTHREAD_MUTEX_INITIALIZER;


 int main() {
    
   cout << "hello world from C++\n";
   pthread_t threads[NUM_THREADS];
   int rc;
   
   
   for(int i = 0; i < NUM_THREADS; i++ ) {
      cout << "main() : creating thread, " << i << endl;
      rc = pthread_create(&threads[i], NULL, &Thread_routine, &i);
      
      if (rc) {
         cout << "Error:unable to create thread," << rc << endl;
         exit(-1);
      }
   }
   pthread_exit(NULL);
}


   


