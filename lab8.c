#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<sys/wait.h>

int main(){
    printf("Nhap so luong tien trinh: ");
    int n;
    scanf("%d",&n);
    int pid = fork();
    for(int i=0;i<n-1;i++){
        if(pid > 0) pid = fork();
    }
    
    if(pid < 0) { 
        printf("Can't create file!");
        exit(1);
    }else if(pid > 0){
        printf("(Nien) ID current pid = %d\n", getppid());
        
    }else{
        printf("(HyuNie) ID current pid = %d\n", getpid());
    }

    return 0;
}