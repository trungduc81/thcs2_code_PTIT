#include<stdio.h>
#include<math.h>
#define ll long long

int main(){
    ll n ;
    ll MAX = - 1 ;
    while(scanf("%lld",&n)==1){
        if(MAX < n) MAX = n ;
    }
    printf("%lld\n",MAX) ;
}
