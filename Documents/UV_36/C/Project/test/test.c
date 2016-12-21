#include <signal.h>
#include <stdio.h>
#include<unistd.h>
#include<string.h>
#include <stdlib.h>

void cback(int, siginfo_t* , void *);


void main(){

	struct sigaction act; 
	memset(&act,'\0',sizeof(act));
	act.sa_sigaction = &cback;
	act.sa_flags = SA_SIGINFO; 

	if (sigaction(SIGINT,&act,NULL) <0){
		perror("sigaction");
	} 
	while (1) {sleep(10);}
 

}


void cback(int sig, siginfo_t *siginfo, void *context){
printf("fin fils\n");

}



