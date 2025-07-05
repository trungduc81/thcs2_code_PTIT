#include<stdio.h>
#include<math.h>
#include<string.h>
#define ll long long
#define MAX 1000005

int prime[MAX];

void sang() {
    for (int i = 0; i < MAX; i++){
        prime[i] = 1;
    }
    prime[0] = prime[1] = 0;
    for (int i = 2; i * i < MAX; i++){
        if (prime[i]) {
            for (int j = i * i; j < MAX; j += i){
                prime[j] = 0;
            }
        }
    }
}

int main(){
    sang();
    int t;
    scanf("%d", &t);
    while (t--) {
        ll l, r;
        scanf("%lld %lld", &l, &r);
        int cnt = 0;
        for (ll i = ceil(sqrt(l)); i <= floor(sqrt(r)); i++){
            if (prime[i]) cnt++;
        }
        printf("%d\n", cnt);
    }
    return 0;
}

