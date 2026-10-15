#include <stdio.h>

int main(){
    char ch;

    scanf(" %c", &ch);

    printf("CODE_DEC: %d\n", ch);
    printf("CODE_HEX: %x\n", ch);
    printf("CODE_OCT: %o\n", ch);

    printf("UPPER: %c\n", ch - 'a' + 'A');
    printf("NEXT: %c\n", ch + 1);
    printf("PREV: %c\n", ch - 1);

    return 0;
}