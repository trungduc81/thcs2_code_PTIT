#include<stdio.h>
#include<math.h>
#define ll long long

ll fibo[93] ; 

void fi(){
	fibo[0] = 0 ; fibo[1] = 1 ; 
	for(int i = 2 ; i < 93 ; i++){
		fibo[i] = fibo[i-1] + fibo[i-2] ; 
	}
}

void solve() {
    ll n ; scanf("%lld" , &n) ; 
    for(int i = 0 ; i < 93 ; i++){
    	if(fibo[i] == n){
    		printf("YES\n") ; 
    		return ; 
		}
	}
	printf("NO\n") ; 
}

int main(){
	fi() ; 
	int t ; scanf("%d",&t) ; 
	while(t--){
		solve() ; 
	}
}


