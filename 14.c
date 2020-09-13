//Q-14
#include <stdio.h>
int main() {
    int num;
    num=1;
    do{
        printf("%d",num);
        num=num+1;
        printf("%d",num+1);
    }while(num<=0);
    printf("%d",num);
    return 0;
}

//ans= 132