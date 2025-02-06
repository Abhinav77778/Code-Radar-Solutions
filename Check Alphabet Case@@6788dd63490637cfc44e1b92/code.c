#include <stdio.h>
int main() {
    char a;
    scanf("%c",&a);
    if (a==9)
        printf("Not an alphabet");
    else if (a<97) 
        printf("Uppercase");
    else if (a<65)
        printf("Lowercase");
    
    
    return 0;
}