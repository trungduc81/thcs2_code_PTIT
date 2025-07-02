#include<stdio.h>
#include<math.h>
#include<string.h>
#define ll long long 


int main(){
    int n ; scanf("%d",&n) ; 
    int m = 1 ; 
	ll sum = 0 ; 
	while(m <= n){
		ll res = 1 ; 
		for(int i = 1 ; i <= m ; i++){
			res *= i ; 
		}
		sum += res ; 
		m++ ; 
	} 
	printf("%lld",sum) ; 
}
	
    
