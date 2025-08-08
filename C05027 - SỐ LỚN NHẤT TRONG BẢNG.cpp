#include<stdio.h>
#define ll long long

int main(){
    int n ;scanf("%d", &n) ;
    int minA = 1e6, minB = 1e6 ;
    for(int i=0; i<n; i++){
        int a, b ;
        scanf("%d %d", &a, &b) ;
        if(a < minA) minA = a;
        if(b < minB) minB = b;
    }
    printf("%lld\n", (ll) minA * minB) ;
}
