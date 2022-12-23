#include<stdio.h>

void abc(int *x, int *y, int i, int n){
	if(i >= n){
		for(int j=1; j+1 < n; j++){
			if(x[j] < x[j-1] && x[j] > x[j+1]){
				return;
			}
			if(x[j] > x[j-1] && x[j] < x[j+1]){
				return;
			}
		for(int j=0; j < n; j++){
		}
			printf("%d", x[j]);
		}
		printf("\n");
		return;
	}
	for(int j=1; j<=n; j++){
		if(y[j] != 1){
			x[i] = j;
			y[j] = 1;
			abc(x, y, i+1, n);
			y[j] = 0;
		}
	}
}

int main(){
	int n;
	scanf("%d", &n);
	int a[10], b[10];
	for(int i=0; i<=n; i++){
		b[i]=0;
	}
	abc(a, b, 0, n);
	return 0;
}
