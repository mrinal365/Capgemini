//Q-5
#include <stdio.h>
int main() {
    int a,b,c,d;
    a=3,b=1;
    for(c=b;c<=b+1;c++){
        a=a+1;
        if(1){
            continue;
            for(d=0;d<=1;d++){
                a=a+c+d;
                if(a>d){
                    break;
                }
                b=b+a-c+d;
                
            }
        }
    }
    printf("%d",b+a);
    
    return 0;
}

//ans=6