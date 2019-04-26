#include<stdio.h>
#include<sys/types.h>
#include<sys/wait.h> 
#include <unistd.h>
using namespace std;

int main() {

	int pid;
	int estado;
	pid = fork();//ej 2
	if (pid == 0) {
		printf("Hola soy un hijo\n");//ej 1
		printf("mi Id es: %d", getpid());// ej3

	printf("\n");
		
	} else {
		printf("Hola soy un padre\n");
		printf("Estoy esperando a que mi hijo termine\n");
 		wait(&estado); // detiene el proceso //ej4
		if(wifexited()==true)
		{
		printf("\nmi hijo termino\n");
		printf("mi Id es: %d", getppid());
		}else{
		printf("\nmi hijo NO termino bien u_u\n");
		}

		
		
		 
		
		
	printf("\n");
	}
	return 0;
}




