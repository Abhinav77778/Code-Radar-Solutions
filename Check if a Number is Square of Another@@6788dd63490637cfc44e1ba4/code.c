#include <stdio.h>
int main() {
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    c=b*b;
    if(c==a)
        printf("Yes");
    else{
        printf("No");
    }
    
    return 0;
}