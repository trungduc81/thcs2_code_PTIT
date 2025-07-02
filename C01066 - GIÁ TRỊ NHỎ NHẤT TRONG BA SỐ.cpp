#include<stdio.h>
#include<math.h>
#include<string.h>
#define ll long long 



int main() {
    int a , b , c ; scanf("%d %d %d",&a,&b,&c) ; 
    int MIN = 1e7 ; 
    if(a < MIN) MIN = a ; 
    if(b < MIN) MIN = b ; 
    if(c < MIN) MIN = c ; 
    printf("%d",MIN)  ;
}

