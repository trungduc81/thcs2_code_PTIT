#include<stdio.h>
#define ll long long

ll max(ll a, ll b){
    if(a>b) return a ;
    else return b ;
}

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n ; scanf("%d", &n) ;
        ll a[n];
        for(int i = 0; i < n; i++) scanf("%lld", &a[i]) ;
        ll max1 = a[0], max2 = a[0] ;
        for(int i = 1; i < n; i++){
            max1 = max(a[i], max1 + a[i]);
            max2 = max(max2, max1);
        }

        printf("%lld\n", max2);
    }
}
