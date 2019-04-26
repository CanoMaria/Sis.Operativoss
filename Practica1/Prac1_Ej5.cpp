#include<stdio.h>
#include<sys/types.h>
#include<sys/wait.h> 
#include <unistd.h>
using namespace std;

int main() {

	int pid;
	int estado;
	double i=1;
	pid = fork();
	if (pid == 0) {
		printf("Hola soy un hijo\n");
		printf("mi Id es: %d", getpid());
		fflush(stdout);//muestra un mensaje para que se envie directamente
		while(i=1)
		{
		 
		}

	printf("\n");
		
	} else {
		printf("Hola soy un padre\n");
		printf("Estoy esperando a que mi hijo termine\n");
 		wait(&estado); // detiene el proceso 
		if(WIFEXITED(estado)==true){
		printf("\nmi hijo termino bien\n");
		printf("mi Id es: %d", getppid());

		}else{
		printf("\nmi hijo NO termino bien u_u\n");
		}
		}

		
		
		 
		
		
	printf("\n");
	}
