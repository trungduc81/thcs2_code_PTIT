#include<stdio.h>
#include<math.h>
#include<string.h>
#define ll long long
#define MAX 1000005

ll fibo[93] ; 

void fi(){
	fibo[0] = 0 ; fibo[1] = 1 ; 
	for(int i = 2 ; i < 93 ; i++){
		fibo[i] = fibo[i-1] + fibo[i-2] ; 
	}
}

void solve(){
	int n ; scanf("%d",&n) ; 
	printf("%lld\n",fibo[n]) ; 
}

int main(){
	fi() ; 
    int t ; scanf("%d",&t) ; 
	while(t--){
		solve() ; 
	} 
}

