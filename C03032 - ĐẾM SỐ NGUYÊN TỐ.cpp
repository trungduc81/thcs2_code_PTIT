#include<stdio.h>
#include<math.h>

int prime[1000001];

void sang(){
	for(int i = 0 ; i <= 1e6 ; i++) prime[i] = 1;
	prime[0] = prime[1] = 0;
	for(int i = 2 ; i <= sqrt(1e6) ; i++){
		if(prime[i]){
			for(int j = i*i ; j <= 1e6 ; j += i){
				prime[j] = 0;
			}
		}
	}
}

int csngto(int n){
	while(n > 0){
		int m = n % 10;
		if(m != 2 && m != 3 && m != 5 && m != 7) return 0;
		n /= 10;
	}
	return 1;
}

void solve(){
	int a , b; scanf("%d %d", &a, &b);
	int cnt = 0;
	for(int i = a; i <= b; i++){
		if(prime[i] && csngto(i)) cnt++;
	}
	printf("%d\n", cnt);
}

int main(){
	sang(); 
	int t; scanf("%d", &t);
	while(t--){
		solve();
	}
}

