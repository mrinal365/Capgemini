


#include <stdio.h>
int main() {
    int a,b,c;
    a=1;
    b=1;
    if(a-b){
        for(c=1;c<=3;c++){
            a=a+1;
        }
    }
    else{
        for(c=1;c<=4;c++){
            a=a+1;
        }
    }
    a=a+b;
    printf("%d",b+a);
    
    return 0;
}

//Ans=7