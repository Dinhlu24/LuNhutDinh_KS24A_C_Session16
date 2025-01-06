#include <stdio.h>

void tong(int *a,int *b,int *sum){
	*sum = *a + *b;
}

void inTong(int *sum){
	printf("Tong cua A + B = %d",*sum);
}

int main (){
	int a=100,b=200;
	int sum;
	tong (&a,&b,&sum);
	inTong(&sum);
}
