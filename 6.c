//Q-6

#include <stdio.h>
int merge(int x1){
    if(x1<3){
        merge(merge(x1+1));
    }
    return x1;
}
int main() {
    int m=merge(2);
    printf("%d",m);
    return 0;
}

//Ans=2