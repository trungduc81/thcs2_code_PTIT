#include<stdio.h>
#include<string.h>
#include<math.h>

int prime[1005] ; 

void sang(){
	memset(prime,1,sizeof(prime)) ; 
	prime[0] = prime[1] = 0 ; 
	for(int i = 2 ; i <= sqrt(1005) ; i++){
		if(prime[i]){
			for(int j =i*i ; j <= 1005 ; j+=i){
				prime[j] = 0 ; 
			}
		}
	}
}

void solve(){
	int n ; scanf("%d",&n) ; 
	int a[n]  ;
	for(int i = 0 ; i < n ; i++) scanf("%d",&a[i]) ; 
	for(int i = 0 ; i < 1005 ; i++){
		if(prime[i]){
			for(int j = 0 ; j < n ; j++){
				if(i==a[j]){
					printf("%d ",i) ; 
					break ; 
				}
			}
		}
	}
	printf("\n") ;  
}

int main(){
	sang() ; 
    int t ; scanf("%d",&t) ; 
    while(t--){
    	solve() ; 
	}
}
