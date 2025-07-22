#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define ll long long

int prime[10000] ; 

void sang(){
	memset(prime,1,sizeof(prime)) ; 
	prime[0] = prime[1] = 0 ; 
	for(int i = 2 ; i *i <= 10000 ; i++){
		if(prime[i]){
			for(int j = i*i ; j <= 10000 ; j += i){
				prime[j] = 0 ; 
			}
		}
	}
}

int main(){
	sang() ; 
	int n ; scanf("%d",&n) ; 
	int a[n][n] ; 
	for(int i = 0 ; i < n ; i++){
		for(int j = 0 ; j < n ; j++){
			scanf("%d",&a[i][j]) ; 
		}
	} 
	int cnt[n] ; memset(cnt,0,sizeof(cnt)) ; 
	for(int i = 0 ; i < n ; i++){
		int count = 0 ; 
		for(int j = 0 ; j < n ; j++){
			if(prime[a[i][j]]) count++ ; 
		}
		cnt[i] = count ; 
	}
	int MAX = -1 , idx = 0 ; 
	for(int i = 0 ; i < n ; i++){
		if(cnt[i] > MAX) MAX = cnt[i] ; 
	}
	for(int i = 0 ; i < n ; i++){
		if(cnt[i]==MAX){
			printf("%d\n",i+1) ; 
			for(int j = 0 ; j < n ; j++){
				if(prime[a[i][j]]) 
				printf("%d ",a[i][j]) ; 
			}
			break ; 
		}
	}
}
