#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int pass(int length){
	srand(time(NULL));
	for(int i=0;i<=length;i++){
		printf("%c",'~'-rand()%104);
	}
	printf("\n");
}
void main(int agrc, char *argv[]){
	FILE *file;
	if(argv[1]!=NULL){
		pass(atoi(argv[1]));
	}
	else{
		exit(1);
	}
}
