//Q-7
#include <stdio.h>
int main() {
    int a,b,c;
   a=1,b=6,c=12;
   if(a>b){
       if(a>c){
           printf("%d",c+b);
       }
       else{
           printf("%d",b);
       }
   }
   else{
       printf("%d",b+1);
   }
    
    return 0;
}

//ans=7