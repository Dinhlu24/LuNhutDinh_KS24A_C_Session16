#include <stdio.h>

void inMang(int a[],int *n){
	printf("Tat ca phan tu trong mang nay la: ");
	for(int i=0;i<*n;i++){
		printf("%d ",*(a+i));
	}
}

int main(){
	int n=5;
	int a[n]={1,2,3,4,5};
	inMang(a,&n);
} 
