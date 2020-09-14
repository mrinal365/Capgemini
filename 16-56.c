// q-16
//Q17
#include <stdio.h>
int main() {
    int a, b,c;
    a=13,b=9,c=6;
    if(a<c){
        if(a<c){
            printf("%d",a);
        }
        else{
            printf("%d",c);
        }
    }
    else if(b<c){
        printf("%d",b);
    }
    else{
        printf("%d",c);
    }
    
    return 0;
}
//Ans=6





// q19
#include <stdio.h>
int main() {
   int p,q,r;
   p=12,q=67,r=90;
   if(p+q-r){
       for(int j=0;j<=4;j++){
           if(q+r>90){
               printf("Enginnering");
           }
           else{
               printf("Btech");
           }
       }
   }
    return 0;
}

//Ans=5 Times Engineering





// q20
#include <stdio.h>
int main() {
   int i,a,j;
   i=6,a=23;
   j=i+a && i/a && a/i+i;
   if(j){
       printf("%d",j);
   }
   else{
       printf("%d",j*j);
   }
   
    return 0;
}

//Ans=00




// q21
#include <stdio.h>
int main() {
   int funn(int a,int b){
       if(a+2-1-1){
           return a;
       }
       if(b+1){
           return(a+1+b+1);
       }
       return b;
   }
   funn();
    return 0;
}

//Ans=not sure of values



// q22
#include <stdio.h>
int main() {
   int a,b,c,d;
   a=3,b=1,c=1;
   for(d=1;d<=3;d++){
       a=a-1;
       if(d>2){
           a=a-b;
           b=a;
       }
       if(d<2){
           break;
       }
       a=a+1;
   }
   printf("%d",a+c);
    return 0;
}
//ans=3



// q23
#include <stdio.h>
int main() {
   char a[20],b[20];
   a[20]="Apital";
   int j,k;
   j=0,k=0;
   while(a[j]!=NULL){
       if(j%2==0){
           b[k]=a[j];
       }
       else{
           b[k]=" ";
       }
       k=k+1;
       j=j+1;
   }
   k=0;
   while(b[k]!=NULL){
       printf("%d",b[k]);
       k=k+1;
   }
   return 0;
}
//ans=Cannot be determined



// q24
#include <stdio.h>
int main() {
   int combine(int p){
       if(p<=17){
           combine(combine(p*2));
       }
       return(p+3);
   }
   int m=combine(8);
   printf("%d",m);
   return 0;
}
//ans=11





// q25
#include <stdio.h>
int main() {
   int a,b;
   for(a=1;a<=2;a++){
       b=17;
       printf("%d",b+a-a*a);
   }
   printf("%d",a+1);
   return 0;
}
//ans=17154




// q26
#include <stdio.h>
int main() {
   int a,b,c,d;
   a=3,b=1;
   for(d=1;d<=2;d++){
       for(c=1;c<=2;c++){
           if(c<d){
               continue;
           }
           a=a-b;
       }
   }
   printf("%d",a);
}
//ans=0



// q27
#include <stdio.h>
int main() {
   int remainder(int x){
       if(x==0){
           return 2;
       }
       else{
           return remainder(x/2+1);
       }
   }
   remainder(5);
   return 0;
}
//ans=Segmentatiion fault... bcz if(x==0) kabhi achieve hi nhi krega..
//syd question galat ho




// q28
#include <stdio.h>
int main() {
   int k;
   k=6/7+3-3;
   if(k<=0){
       if(k==0){
           printf("test1");
       }
       else{
           printf("test2");
       }
   }
   else{
       printf("test");
   }
   printf("test completed");
   return 0;
}
//ans=test1test completed





// q29
#include <stdio.h>
int main() {
   int j,m;
   m=1;
   int a[4]={0,1,0,2};
   a[0]=a[0]-a[2]+a[3];
   a[1]=a[0]-a[3];
   a[2]=a[1]-a[2];
   a[3]=a[2];
   m=a[3];
   printf("%d",m);
   
   return 0;
}
//ans=0



// q30
#include <stdio.h>
int main() {
   int s;
   s=17;
   while(s!=(s+1)/2){
       printf("Computer");
       s=s-1;
       if(s==2){
           printf("science");
       }
       break;
       printf("Maths");
   }
   if(s>=4){
       printf("%d",s);
   }
   
   
   return 0;
}
//ans=Computer16




// q31
#include <stdio.h>
int main() {
   int compact(int a){
       if(a<=45){
           compact(compact(a*5+1));
       }
       return(a*2);
   }
   int m=compact(22);
   printf("%d",m);
   return 0;
}
//ans=44



// q33
#include <stdio.h>
int main() {
   int remainder(int x){
       if(x==0){
           return 2;
       }
       else{
           return remainder(x/2+1);
       }
   } 
   remainder(5);
   return 0;
}
//ans=Segmentation fault.. bcz x==0 condition can never be acgieved


// q34
#include <stdio.h>
int main() {
   int k,a,p;
   k=5,a=234;
   p=k+a && k/a || a/k+k;
   
   if(k){
       printf("it is working");
   }
   else{
       printf("its is not working");
   }
   return 0;
}
//ans=it is working




// q35
#include <stdio.h>
int main() {
   int f5(int a){
       if(a%2){
           return a++;
       }
       else{
           return f5(f5(a-1));
       }
   }
   int m=f5(100);
   printf("%d",m);
   return 0;
}
//ans=99


// q36
#include <stdio.h>
int main() {
   int funn(int a,int b){
       if(a>-2){
           if(b+1){
               return 2;
           }
           return a;
       }
       return b;
   }
   int m=funn(0,0);
   printf("%d",m);
   return 0;
}
//ans=2



// q37
#include <stdio.h>
int main() {
   int a,b,c;
   a=3,b=1;
   for(c=1&1;c<=3&3;c++){
       a=a-b;
       
       if(c>2){
           break;
       }
       else{
           a=a+b;
           b=1;
           continue;
           b=2;
       }
       
   }
   printf("%d",a);
   return 0;
}
//ans=2




// q38
#include <stdio.h>
int main() {
   int fun(int a1,int b1){
       if(a1==0){
           return(b1+6);
       }
       else if(a1 ==1){
           return b1;
       }
       else{
           return fun(a1-1,a1+b1+5)+fun(a1-1,a1+b1);
           
       }
   }
   int m=fun(3,4);
   printf("%d",m);
   return 0;
}
//ans=56




// q39
#include <stdio.h>
int main() {
   int p;
   p=1;
   while(p+2<=4){
       printf("%d",p);
       p=p+1;
       break;
   }
   
   return 0;
}
//ans=1






// q40
#include <stdio.h>
int main() {
   int a,b,c;
   b=10,a=1;
   for(c=1;c<=2;c++){
       a=(a+c)*c;
       b=b-c;
   }
   if(0&&1 && (2^3)){
       b=b-1;
       a=a-1;
       a=b+1;
   }
   
   return 0;
}
//ans=question incomplete




// q41
#include <stdio.h>
int main() {
   int x,y;
   while(x-y>0){
       printf("hello");
       x=x-1;
       y=y+1;
   }
   return 0;
}
//ansquestion incomplete





// q43
#include <stdio.h>
int main() {
   int k;
   int arr[5]= {1,2,3,4};
   int sum;
   sum=0;
   for(k=0;k<=(arr[k]<=0 || arr[k]==2);k++){
       sum=sum+arr[k]+arr[k]+2;
   }
   printf("%d",sum);
   return 0;
}
//ans=10




// q44
#include <stdio.h>
int main() {
   int x;
   x=3;
   do{
       x=x-1;
       printf("%d",x*4);
       continue;
       printf("%d",x*7);
       x=x-1;
   }while(x!=2);
   printf("%d",x*x/6);
   return 0;
}
//ans=80




// q45
#include <stdio.h>
int main() {
   int j,m;
   m=1;
   int a[4]={1,1,2,2};
   a[0]=a[0]+a[1];
   a[1]=a[1]+a[2];
   a[2]=a[2]+a[3];
   a[3]=a[3]+a[0];
   m=a[3];
   printf("%d",m);
   return 0;
}
//ans=4




// q46
#include <stdio.h>
int main() {
   int f,k,j;
   f=9,k=55;
   j=f+k/8;
   if(j+1>=8){
       f=f+1;
   }
   else{
       k=k+1;
   }
   printf("%d",f+k);
   return 0;
}
//ans=65




// q47
#include <stdio.h>
int main() {
   int a,b,c;
   a=3,b=-2;
   if(b-1>b){
       for(c=1;c<=2;c++){
           a=a-1;
           if(c>0){
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
//ans=1



// q48
#include <stdio.h>
int main() {
   int fun(int a,int b){
       if(a>7 || b>100){
           return(a-b-fun(a-5,b+3)+fun(1,1));
       }
       b=b+b+b;
       return(a+b);
   }
   int m=fun(8,7);
   printf("%d",m);
   return 0;
}
//ans=-28





// q50
#include <stdio.h>
int main() {
   int a, b ;
   a=5,b=8;
   do{
       printf("%d",b/a);
   }while(a/b);
  
   return 0;
}
//ans=1






// q49
#include <stdio.h>
int main() {
   int a, b,c;
   a=-3,b=-2;
   if(b-2<b){
       for(c=1-1;c<=2-1;c++){
           a=a+1;
       }
   }
   printf("%d",a+b);
   return 0;
}
//ans=-3








// q51
#include <stdio.h>
int main() {
   int i,j;
   for(i=0;i<=4;i++){
       printf("%d",i+1);
       if(i==3){
           continue;
       }
   }
   return 0;
}
//ans=12345




// q52
#include <stdio.h>
int main() {
   char arr[3][2]={{12,21},{12,54},{52,63}};
   int x,k,j;
   x=1;
   for(k=0;k<=3;k++){
       for(j=k;j<=k;k++){
           x=x+arr[k][j];
       }
       continue;
   }
   printf("%d",x);
   return 0;
}

//ans=Segmentation fault



// q53
#include <stdio.h>
int main() {
   int i,j,k;
   i=1,2,3;
   j=1,2,3;
   k=1,2,3;
   printf("%d %d %d",i,j,k);
   return 0;
}

//ans=1 1 1


