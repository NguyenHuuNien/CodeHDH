#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/wait.h>
int main(){
	pid_t pid = fork();

	if(pid == -1){
		fprintf(stderr,"Khong the tao tien trinh!");
		return 1;
	}
	else if(pid > 0){
		printf("Tien trinh cha (PID = %d)\n",getpid());
	}
	else{
		printf("Tien trinh con (PID = %d)\n",getpid());
		sleep(2);
	}
	//==========================================================
	if(pid>0){
		printf("Day la tien trinh cha\n");
		wait(NULL);
		execlp("ls","-l",(char*)NULL);
		perror("execl Loi Roi");
		exit(EXIT_FAILURE);
	}
	else{
		printf("Day la tien trinh con \n");
	}
	return 0;
}
