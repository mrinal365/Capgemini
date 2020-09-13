
//Q-11
#include <stdio.h>
int main() {
    int a,b,c;
    a=3,b=2;
    if(b-1){
        for(c=1;c<=3;c++){
            a=a-1;
        }
        for(c=1;c<=3;c++){
            a=a+b;
        }
    }
    printf("%d",a+b);
    return 0;
}

//ans=8