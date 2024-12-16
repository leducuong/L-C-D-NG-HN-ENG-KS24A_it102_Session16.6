#include <stdio.h>
#include <string.h>

void daoNguocChuoi(char *inputString, char *reverseString) {
    char *cuoi = inputString + strlen(inputString) - 1;
    char *dau = inputString;
    
    while (cuoi >= dau) {
        *reverseString = *cuoi;
        reverseString++;
        cuoi--;
    }
    *reverseString = '\0';
}

int main() {
    char inputString[100];
    char reverseString[100];

    printf("Nhap chuoi cua ban: ");
    fgets(inputString, sizeof(inputString), stdin);

    inputString[strcspn(inputString, "\n")] = '\0';

    daoNguocChuoi(inputString, reverseString);

    printf("Chuoi ban dau: %s\n", inputString);
    printf("Chuoi dao nguoc: %s\n", reverseString);

    return 0;
}

