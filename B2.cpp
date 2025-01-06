#include <stdio.h>

void swap(int *a,int *b){
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

int main(){
	int a=100,b=200;
	printf("Truoc khi dao A = %d , B = %d\n\n",a,b);
	swap(&a,&b);
	printf("Sau khi dao A = %d , B = %d",a,b);
}
