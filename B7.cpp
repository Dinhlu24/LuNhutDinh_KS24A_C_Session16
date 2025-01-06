#include <stdio.h>
#define n 10

void insertionSort(int a[]);
void inMang(int a[]);

int main(){
	int a[n] = {5,2,1,6,4,3,9,7,10,8};
	printf("Day la mang truoc khi duoc sap xep: ");
	inMang(a);
	insertionSort(a);
	printf("\n\nDay la mang sau khi duoc sap xep: ");
	inMang(a);
}

void insertionSort(int a[]){
	for(int i=1;i<n;i++){
		int Index=i-1,Value=a[i];
		while(Index >= 0 && a[Index] > Value){
			a[Index+1] = a[Index];
			Index--;
		}
		a[Index+1] = Value;
	}
}

void inMang(int a[]){
	for(int i=0;i<n;i++){
		printf("%d ",*(a+i));
	}
}
