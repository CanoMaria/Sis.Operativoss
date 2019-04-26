#include<stdio.h>
#include<sys/types.h>
#include<sys/wait.h> 
#include <unistd.h>
using namespace std;

int main() {

	int pid;
	pid = fork();
	if (pid == 0) {
		printf("Hola soy un hijo\n");
		printf("mi Id es: %d", getpid()); // obtiene el id del hijo

		printf("\n");
		
	} else {
		printf("Hola soy un padre\n");
		printf("mi Id es: %d", getppid());//obtiene el id del padre

		
		printf("\n");
		}
	return 0;
}


