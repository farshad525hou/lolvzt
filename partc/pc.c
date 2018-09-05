/*###################################################
## Farshad Chowdhury                               ##
## EECE- 4810 Operating Systems and Kernel Design  ##
## Sept 28, 2017                                   ##
## Assignment 1 Part 3                             ##
##                      			      ##
##                         			      ##
###################################################*/

#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {
	if (argc!=2){
		printf("No or Invalid Argument");
		exit(0);
	}else{
	int n= atoi(argv[1]);	//converts ascii to int
	int res;
	for (int i=0; i<2*n;i++){
		res=fork();
		if (res < 0) {
			perror("fork");
			exit(0);
		}else if(res==0){
			printf("I am process number %d\n",getpid());
			exit(0);
		}else{
			int child_pid=res;
			waitpid(child_pid, NULL, 0);
			
		}

		}
	return 0;
	}


}
