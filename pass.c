#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int pass(int length){
	srand(time(NULL));
	if(length!=0){
		for(int i=0;i<=length;i++){
			printf("%c",'~'-rand()%105);
		}
	}
	else{
		printf("NULL");
		exit(1);
	}
	printf("\n");
}
void main(int agrc, char *argv[]){
	pass(atoi(argv[1]));
}
