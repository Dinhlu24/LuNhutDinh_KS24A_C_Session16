#include <stdio.h>

void changeIndex(int a[],int *newValue,int *changeIndex);
void inMang(int a[],int *n);

int main(){
	int n=5;
	int a[n] = {1,2,3,4,5};
	printf("Day la mang truoc khi cap nhat: ");
	inMang(a,&n);
	int newValue=1000,Index=3;
	changeIndex(a,&newValue,&Index);
	printf("\nDay la mang sau khi cap nhat: ");
	inMang(a,&n);
}

void changeIndex(int a[],int *newValue,int *Index){
	a[*Index-1] = *newValue;
}

void inMang(int a[],int *n){
	for(int i=0;i<*n;i++){
		printf("%d ",*(a+i));
	}
}
