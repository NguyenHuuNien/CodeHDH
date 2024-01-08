#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>


int main(){
	pid_t pid = fork();
	system("ls");
	
	return 0;
}
