#include<stdio.h>

int main(){
	int *num = (int*)malloc(sizeof(int) * 5);
	num[1] = 5;
	printf("%d", num[1]);
	free();
	return 0;
}
