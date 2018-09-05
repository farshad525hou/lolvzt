/*###################################################
## Farshad Chowdhury	                           ##
## EECE- 4810 Operating Systems and Kernel Design  ##
## Sept 28, 2017                                   ##
## Assignment 1 Part 2                             ##
##						   ##
##						   ##
###################################################*/


#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char **argv) {
	int res;
for(int i=0;i<10;i++){

	res = fork();
	if (res < 0) {
		perror("fork");
		exit(0);
		}
	else if (res == 0) {
		chdir("/home/farshad"); //calls chdir/cd
		system("pwd"); // calls pwd
		system("ls -sal"); // calls ls
		exit(0);

	}else{
		int child_pid=res;
		waitpid(child_pid, NULL, 0);
		}
 	}
}
		
		


