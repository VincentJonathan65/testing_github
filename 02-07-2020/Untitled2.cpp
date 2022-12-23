#include<stdio.h>
#include<stdlib.h>

int main(){
	int *num = (int*)malloc(sizeof(int) * 5);
	num[1] = 5;
	printf("%d", num[1]);
	free(num);
	puts(":D");
	return 0;
}
