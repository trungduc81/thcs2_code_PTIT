#include<stdio.h>
#include<math.h>
#include<string.h>
#define ll long long
#define MAX 1000005

int prime[10005] ; 

void sang(){
	for(int i = 0 ; i < 10005 ; i++) prime[i] = 1 ; 
	prime[0] = prime[1] = 0 ; 
	for(int i = 0 ;  i<= sqrt(10005) ; i++){
		if(prime[i]){
			for(int j = i *i ; j < 10005 ; j += i){
				prime[j] = 0 ; 
			}
		}
	}
	
}

void solve(){
	int n ; scanf("%d",&n) ; 
	int a[n] , cnt = 0  ; 
	for(int i = 0 ; i < n ; i++){
		scanf("%d",&a[i]) ; 
		if(prime[a[i]]) cnt++ ; 
	} 
	printf("%d ",cnt) ; 
	for(int i = 0 ; i < n ; i++){
		if(prime[a[i]]) printf("%d ",a[i]) ; 
	}
} 

int main(){ 
    sang() ; 
 	solve() ;
}

