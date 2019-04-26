#include<stdio.h>
#include<sys/types.h>
#include<sys/wait.h> 
#include <unistd.h>
using namespace std;

int main() {

	int pid;
	pid = fork(); // muestra 0 si es hijo y 1 si es padre
	if (pid == 0) {
		printf("Hola soy un hijo\n");
		
	} else {
		printf("Hola soy un padre\n");
		
	printf("\n");
	}
	return 0;
}


