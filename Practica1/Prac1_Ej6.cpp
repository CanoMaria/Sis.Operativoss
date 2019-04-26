#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <signal.h>

using namespace std;

void controlador(int);

int main() {

	signal(SIGINT,controlador);
	signal(SIGTSTP,controlador);
	while(1);
		
	printf("\n");
return 0;
	}


void controlador(int sig_num) {

	signal(sig_num,controlador);
	fflush(stdout);
	
	if(sig_num==SIGINT){    //en caso que la señar recibida sea Crl+C
	exit(0);
	}
	if(sig_num==SIGTSTP){	//en caso que la señal recibida sea Crl+Z
	printf("Estamos esperando");
	}

}
	


