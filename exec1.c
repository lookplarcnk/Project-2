#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <math.h>

int main(){
	
	char *who;
	int status;
	
	if( fork() ){
		who = "parent";
		printf("pi = %f\n", 4*atan(1));
		wait(&status);
		exit(0);
	}else{
		who = "child";
		execlp ("/usr/bin/date", "date", (char *)0);
	}
}
