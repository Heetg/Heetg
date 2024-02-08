#include <stdio.h>
    int main() {
        char str[100];
        int hchar;
        printf("Enter a string: ");
        int i = 0;
        char cha;
        while((cha = getchar()) != '\n' && i < sizeof(str) - 1){
        str[i++] = cha;
    }

        str[i] = 0;
        hchar = i;
        printf("\nMaximum number of characters in the string: %d", hchar);
        return 0;
}
