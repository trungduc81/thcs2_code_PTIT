#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define ll long long

int main(){
    ll u , d , n ; scanf("%lld %lld %lld",&u,&d,&n) ;
    ll sum = u ;
    for(int i = 2 ; i <= n ; i++){
        u += d ;
        sum += u ;
    }
    printf("%lld\n",sum) ;
}
