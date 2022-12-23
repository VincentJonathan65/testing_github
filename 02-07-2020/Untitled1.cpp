#include<stdio.h>
#include<string.h>

typedef struct x{
	int age[2];
	char name[100];
};

void abc(struct x *mhs){
	strcpy((*mhs).name, "abc");
}

int main(){
	struct x mhs = {24, 34};
	scanf("%s", mhs.name);
	abc(&mhs);
	printf("%s", mhs.name);
	
	return 0;
}
