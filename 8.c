//Q-8
#include <stdio.h>
int main() {
    int a,b,c;
    a=3,b=1;
    for(c=b;c<=a;c++){
        if(a+b>0){
            b=a;
            continue;
        }
        a=a+b;
        a=a-1;
    }
    printf("%d",a);
    return 0;
}

//ans=3