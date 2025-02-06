#include <stdio.h>
int main() {
    char a;
    scanf("%c",&a);
    if (a==9)
        printf("Not an alphabet");
    if (a<97) 
        printf("Uppercase");
    if (a<65)
        printf("Lowercase");
    
    
    return 0;
}