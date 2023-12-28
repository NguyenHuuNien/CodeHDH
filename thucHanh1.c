#include<stdio.h>
#include<unistd.h>
int main(){
	int pid = fork();
	if(pid == -1){
		fprintf(stderr,"Khong the tao tien trinh!");
		return 1;
	}
	else if(pid > 0){
		printf("Tien trinh cha (PID = %d)\n",getpid());
	}
	else{
		printf("Tien trinh con (PID = %d)\n",getpid());
	}
	if(pid>0){
		printf("Day la tien trinh cha\n");
	}
	else{
		printf("Day la tien trinh con \n");
	}
	return 0;
}
