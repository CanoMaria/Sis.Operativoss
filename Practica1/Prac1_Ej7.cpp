#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <signal.h>
#include<sys/types.h>
#include<sys/wait.h> 

using namespace std;

void controlador1(int);
void controlador2(int);
int id_hijo;

int main() {
int pid;
	pid=fork();
	int estado;

	if(pid==0)
	{
	printf("Hola soy un hijo: \n");
	id_hijo=getpid();
	printf("mi Id es: %d\n",id_hijo);
	fflush(stdout);
	signal(SIGINT,controlador2);
	signal(SIGTSTP,controlador2);
	while(1);

	}else{
	printf("\nHola soy un padre: \n");
	printf("mi Id es: %d \n", getppid());
	fflush(stdout);
	wait(&estado);
	signal(SIGINT,controlador1);
	
	
	}
	
	printf("\n");
	return 0;
	}


void controlador1(int sig_num) {

	signal(sig_num,controlador1);
	kill(id_hijo,sig_num);
}


void controlador2(int sig_num) {

	signal(sig_num,controlador2);
	fflush(stdout);
	
	if(sig_num==SIGINT){    //en caso que la señar recibida sea Crl+C
	exit(0);
	}
	if(sig_num==SIGTSTP){	//en caso que la señal recibida sea Crl+Z
	printf("Estado interrumpido\n");	
	}
}












	
