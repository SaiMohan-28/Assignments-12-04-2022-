#include<stdio.h>
#include<unistd.h>
#include<pthread.h>

#define n 8

void *myfun()//Thread Handling Function
{
	unsigned int i;
	for(i=0;i<=n;i++)
	{
		sleep(1);
		printf("Thread1 is printing\n");
	}
}

int main()
{
	pthread_t newthread;
	pthread_create(&newthread,NULL,&myfun,NULL);//creating thread (thread Id,NULL,fun name ,parametrs)
	pthread_join(newthread,NULL);//joining thread (threda id ,NULL)
	return 0;
}
