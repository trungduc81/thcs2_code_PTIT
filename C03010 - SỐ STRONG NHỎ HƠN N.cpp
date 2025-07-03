#include<stdio.h>
#define ll long long

ll gt[10] ; 

void init(){
    gt[0] = 1;
    for (int i = 1; i <= 9; i++) {
        gt[i] = gt[i-1] * i;
    }
}

int check(ll n) {
    ll sum = 0, tmp = n;
    while(n > 0){
        sum += gt[n % 10];
        n /= 10;
    }
    return sum == tmp ;
}

int main() {
    ll n ;
    scanf("%lld", &n) ;
    init(); 
    for (ll i = 1; i <= n; i++){
        if (check(i)) printf("%lld ", i) ;
    }
}

