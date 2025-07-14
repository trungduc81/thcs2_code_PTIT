#include <stdio.h>
#include <math.h>
#define ll long long

int isprime(ll n){
    if(n < 2) return 0;
    for(ll i = 2; i * i <= n; i++){
        if(n % i == 0) return 0;
    }
    return 1;
}

void solve() {
    ll n;
    scanf("%lld", &n);

    if (isprime(n)) {
        printf("%lld\n", n);
        return;
    }

    ll kyluc = -1;

    for (ll i = 1; i * i <= n; i++){
        if (n % i == 0) {
            ll j = n / i;
            if (isprime(j)){
                printf("%lld\n", j);
                return;
            }
            if (isprime(i)) {
                kyluc = i;
            }
        }
    }
    printf("%lld\n", kyluc);
}

int main() {
    int t ; scanf("%d", &t) ;
    while(t--){
        solve();
    }
    return 0;
}
