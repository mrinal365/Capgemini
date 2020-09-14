// q54
#include <stdio.h>
int main() {
   int calculate(int b){
       if(b ==1){
           return 0;
       }
       else{
           return(5+calculate(b/2));
       }
       
   }
   int m=calculate(18);
   printf("%d",m);
   return 0;
}

//ans=20




// q55
#include <stdio.h>
int main() {
   int a;
   if(a%2!=0){
       if(a>12){
           printf("%d",a*a);
       }
   }
   return 0;
}

//ans=2 answers : value of a=13
//                value is odd








// q56
#include <stdio.h>
int main() {
    int k,p,i;
    k=2,p=6;
    i=k/p+3*k/p;
    if(i){
        printf("you are promted");
    }
    else if(i!=0){
        printf("you are not promted");
    }
    else{
        printf("you better try next time");
    }
   return 0;
}

//ans=you are promted





// q57
#include <stdio.h>
int main() {
    int a,b,c;
    a=11,b=21;
    for(c=16;c<=17;c++){
        if(c-10>8){
            if(1&&1){
                a=a+c;
            }
            a=a+1;
        }
        else{
            a=0;
        }
    }
    printf("%d",b+a);
   return 0;
}

//ans=21






// q58
#include <stdio.h>
int main() {
    int a,b;
    b=2;
    a=b+3;
    if(a&&b-a&&1){
        a=a+1;
    }
    printf("%d",a);
    return 0;
}

//ans=6





// q60
#include <stdio.h>
int main() {
    int n,c;
    n=128,c=4;
    while(n!=0){
        n=n/10;
        c=c-1;
    }
    printf("%d",c);
    
    
    return 0;
}
//ans=1








// q63
#include <stdio.h>
int main() {
    int a,b,c;
    a=11,b=21;
    for(c=16;c<=17;c++){
        if(c-10>8){
            if(1&&1){
                a=a+c;
            }
        }
    }
    
    return 0;
}
//ans=wrong question






// q64
#include <stdio.h>
int main() {
    int a[5]={1,2,3,4};
    int m,j;
    m=1;
    for(j=0;j<=3;j++){
        m=m+a[j]+a[j]+6;
    }
    printf("%d",m);
    
    
    return 0;
}
//ans=45





// q65
#include <stdio.h>
int main() {
    int a,b,c,d;
    a=3,b=1;
    for(d=1;d<=3;d++){
        for(c=1;c<=2;c++){
            if(c<d+1){
                a=a-b;
            }
            else{
                a=a+b;
            }
        }
    }
  
    
    
    return 0;
}
//ans=incomplete





// q66
#include <stdio.h>
int main() {
    int x,y;
    x=19,y=4;
    while(x-y>0){
        printf("hello");
        x=x-1;
        y=y-1;
    }
    
    
    return 0;
}
//ans= not sure . mine is 12,4




// q67
#include <stdio.h>
int main() {
    int a,b,c;
    a=3,b=2;
    if(b-1){
        for(c=1;c<=3;c++){
            a=a-1;
            if(c>1){
                break;
            }
            continue;
            a=a+1;
            a=a-3;
            a=a+2;
        }
    }
    printf("%d",a+b);
    
    return 0;
}
//ans=3




// q68
#include <stdio.h>
int main() {
    int k,p,j;
    k=1,p=4;
    j=p+k/2;
    if(j==p){
        printf("hello");
    }
    j=p+k/5;
    if(j!=p){
        printf("hello");
    }
    
    printf("hello");
    return 0;
}
//ans=2 times hello




// q73
#include <stdio.h>
int main() {
    
    printf("see nswer below");
    return 0;
}
//ans=not a leap year




// q74
#include <stdio.h>
int main() {
    int k,j,p,h;
    k=1,j=2;
    while(k<2){
        p=9,h=10;
        printf("%d",h/p);
        k=k+1;
    }
    printf("%d",h);
    return 0;
}
//ans=110








