// q10
#include <stdio.h>
int main() {
   int a,b,c;
   a=1,b=1;
   for(c=4;c<=7;c++){
       a=a-1;
       if(a<10){
           a=a-1;
           continue;
       }
       a=a+2;
       
   }
    printf("%d",b+a);
    return 0;
}

//Ans=-6