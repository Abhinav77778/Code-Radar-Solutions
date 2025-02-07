#include <stdio.h>
int main() {
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    c=a*a;
    if(c==b)
        printf("Yes");
    else{
        printf("No");
    }
    
    return 0;
}