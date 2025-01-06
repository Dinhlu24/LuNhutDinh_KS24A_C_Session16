#include <stdio.h>

int n=10;

void inMang(int a[]){
	for(int i=0;i<n;i++){
		printf("%d ",*(a+i));
	}
}

void deleteArray(int a[],int deleteIndex){
	n--;
	for(int i=deleteIndex-1;i<n;i++){
		a[i] = a[i+1];
	}
}

int main(){
	int a[n] = {1,2,3,4,5,6,7,8,9,10};
	printf("Mang truoc khi xoa:\n");
	inMang(a);
	int deleteIndex=6;
	deleteArray(a,deleteIndex);
	printf("\nMang sau khi xoa phan tu vi tri %d\n",deleteIndex);
	inMang(a);
}
