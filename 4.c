#include <stdio.h>
int main() {
    int j,m;
    m=1;
    int a[4]={1,1,2,2};
    a[0]=a[0]+a[1]+a[2]+a[3];
    a[1]=a[0]+a[1]+a[2]+a[3];
    a[2]=a[0]+a[1]+a[2]+a[3];
    a[3]=a[0]+a[1]+a[2]+a[3];
    m=a[3];
    printf("%d",m);
    
    return 0;
}


//Ans = 40