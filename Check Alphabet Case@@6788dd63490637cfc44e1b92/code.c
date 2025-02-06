#include <stdio.h>
int main() {
    char a;
    scanf("%c",&a);
    if ((a<97) && (a>9))
        printf("Uppercase");
    if (a<65)
        printf("Lowercase");
    else{
        printf("Not an alphabet");
    }
    
    return 0;
}