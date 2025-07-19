#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#define MAX 100006

int queue[MAX], front = 0, back = 0;
int prime[1000006];

int isempty(){
    return front == back;
}

void push(int n){
    if(back < MAX) {
        queue[back++] = n;
    }
}

int pop(){
    if(!isempty()){
        return queue[front++];
    }
    return -1;
}

void sang(){
    memset(prime, 1, sizeof(prime));
    prime[0] = prime[1] = 0;
    for(int i = 2; i <= sqrt(1000000); i++) {
        if(prime[i]) {
            for(int j = i * i; j <= 1000000; j += i) {
                prime[j] = 0;
            }
        }
    }
}

int isprime(int n){
    if(n < 2) return 0;
    for(int i = 2; i * i <= n; i++) {
        if(n % i == 0) return 0;
    }
    return 1;
}

int check(int n){
    if(!isprime(n)) return 0;
    int sum = 0 ;
    while(n > 0) {
        int m = n % 10;
        sum += m ;
        n /= 10;
    }
    if(!prime[sum]) return 0 ;
    return 1 ;
}

void solve() {
    int a, b;
    scanf("%d %d", &a, &b);
    int cnt = 0;
    front = back = 0 ; 
    int cs[] = {2, 3, 5, 7};
    for(int i = 0; i < 4; i++) push(cs[i]) ;
    
    while(!isempty()){
        int num = pop() ;
        if(num >= a && check(num)) cnt++ ; 
        for(int i = 0; i < 4; i++) {
            long long tmp = num * 10 + cs[i] ;
            if(tmp <= b){
                push(tmp) ;
            }
        }
    }
    printf("%d\n", cnt);
}

int main() {
    sang();
    int t;
    scanf("%d", &t);
    while(t--) {
        solve();
    }
}
