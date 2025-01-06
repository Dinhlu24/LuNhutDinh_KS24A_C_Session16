#include <stdio.h>

int n=10;

void inMang(int a[]);
void addArray(int a[],int newValue,int addIndex);

int main(){
	int a[n] = {1,2,3,4,5,6,7,8,9,10};
	printf("Mang truoc khi them:\n");
	inMang(a);
	int newValue=-3,addIndex=5;
	addArray(a,newValue,addIndex);
	printf("\nMang sau khi them gia tri %d tai vi tri %d:\n",newValue,addIndex);
	inMang(a);
}

void inMang(int a[]){
	for(int i=0;i<n;i++){
		printf("%d ",*(a+i));
	}
}

void addArray(int a[],int newValue,int addIndex){
	if(addIndex < 0)	addIndex=0;
	else if(addIndex >= n)	addIndex=n;
	
	n++;
	for(int i=n-2;i>=addIndex-1;i--){
		a[i+1] = a[i];
	}
	a[addIndex-1] = newValue;
}
