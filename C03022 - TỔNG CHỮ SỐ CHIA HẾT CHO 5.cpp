#include<stdio.h>
#include<math.h>
#include<stdbool.h>
#include<stdlib.h>
#include<string.h>
#define ll long long

int prime[10005] ; 
void sang(){
	memset(prime,1,sizeof(prime)) ; 
	prime[0] = prime[1] = 0 ; 
	for(int i = 2 ; i <= sqrt(10005) ; i++){
		if(prime[i]){
			for(int j = i*i ; j <= 10005 ; j +=i){
				prime[j] = 0 ; 
			}
		}
	}
}

int check(int n){
	int sum = 0 ; 
	while(n>0){
		sum += n%10 ; 
		n /= 10 ; 
	}
	if(sum%5==0) return 1 ; 
	else return 0 ; 
}
void solve(){
	sang() ; 
	int n ; scanf("%d",&n) ; 
	int cnt = 0 ; 
	for(int i = 2 ; i < n ; i++){
		if(prime[i]&&check(i)) {
			printf("%d ",i) ; 
			cnt++ ; 
		}
	}
	printf("\n%d",cnt) ; 
	
}

int main(){
	solve() ; 
}



