#include <stdio.h>

int main(){
	int n=100;
	int *ptr;	ptr = &n;
	printf("Day la gia tri cua bien duoc khai bao: %d\n",*ptr);
	printf("Day la dia chi cua bien duoc khai bao: %d",ptr);
}
