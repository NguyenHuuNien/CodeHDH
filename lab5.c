#include<stdio.h>
#include<unistd.h>
#include<sys/wait.h>
int main(){
	pid_t child_pid = fork();
	if(child_pid < 0){
		printf("Ford Error!");
		return 1;
	}
	else if(child_pid == 0){
		printf("Cha: Dang chay tren tien trinh cha\n");
		wait(NULL);
		printf("Cha: Tien trinh con da ket thuc\n");
	}
	else if(child_pid > 0){
		int i = 0;
		printf("ID cua tien trinh con: %d",child_pid);
		for(;;){
			printf("%d\n",i);
			i++;
			sleep(2);
		}
	}
	return 0;
}
