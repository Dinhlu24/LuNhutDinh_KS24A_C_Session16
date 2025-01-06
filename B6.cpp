#include <stdio.h>
int n=6;

int findNum(int a[],int *findValue){
	for(int i=0;i<n;i++){
		if(*findValue == *(a+i))	return i;
	}
	return -1;
}

int main(){
	int a[n]={1,2,4,5,6,7};
	int findValue;	printf("Moi nhap vao gia tri can tim trong mang: ");	scanf("%d",&findValue);
	if(findNum(a,&findValue)>=0)	printf("Phan tu nam vi tri thu %d",findNum(a,&findValue));
	
	else	printf("Phan tu khong ton tai trong mang");
}
