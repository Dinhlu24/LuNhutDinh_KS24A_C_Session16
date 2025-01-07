#include <stdio.h>
#include <string.h>

void revStr(char *inputStr, char *reverseStr) {
    int length = strlen(inputStr);
    int j = 0;
    while(j <= length){
    	*(reverseStr+j) = *(inputStr+(length-j-1));
    	j++;
	}
}

int main() {
    char inputStr[100], reverseStr[100];
    printf("Moi nhap vao mot chuoi bat ki: ");
    fgets(inputStr, 100, stdin);
    
    inputStr[strcspn(inputStr, "\n")] = '\0';
    
    printf("Truoc khi lat nguoc chuoi: %s\n",inputStr);
    revStr(inputStr, reverseStr);
    printf("Sau khi lat nguoc chuoi: %s",reverseStr);
}
