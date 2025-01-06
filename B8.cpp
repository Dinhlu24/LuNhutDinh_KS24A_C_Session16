#include <stdio.h>
#include <string.h>

void revStr(char inputStr[], char reverseStr[]) {
    int length = strlen(inputStr);
    int j = 0;
    for (int i = length - 1; i >= 0; i--) {
        reverseStr[j] = inputStr[i];
        j++;
    }
}

void inChuoi(char reverseStr[]) {
    printf("%s", reverseStr);
}

int main() {
    char inputStr[100], reverseStr[100];
    printf("Moi nhap vao mot chuoi bat ki: ");
    fgets(inputStr, 100, stdin);
    
    inputStr[strcspn(inputStr, "\n")] = '\0';
    
    revStr(inputStr, reverseStr);
    inChuoi(reverseStr);
}

