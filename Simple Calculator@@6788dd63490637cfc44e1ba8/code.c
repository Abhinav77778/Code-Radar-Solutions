#include <stdio.h>
int main() {
    int a,b;
    char c;
    scanf("%d%d%c",&a,&b,&c);
    if(c=='+')
        a=a+b;
        printf("%d",a);
    else if(c=='-')
        a=a-b;
        printf("%d",a);
    else if(c=='/')
        a=a/b;
        printf("%d",a);
    else if(c=='-')
        a=a*b
        printf("%d",a);
    
    return 0;
}