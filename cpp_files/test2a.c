#include <stdio.h>

int main () {
    int c;
    long nc=0;
    printf("Jetzt geht es los!\n");
    while ( (c=getchar()) !=EOF) {
        //putchar(c);
        if (c!='e') {
            nc++;
            printf("%ld ",nc);
    
        } else printf(" WONKA ");
    }
    return (0);
}