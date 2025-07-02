#include<stdio.h>
#include<math.h>
#define ll long long

int main(){
	int t ; scanf("%d",&t) ; 
	while(t--){
		ll n ; scanf("%lld",&n) ; 
		int MIN = 11 , MAX = -1 ; 
		while(n>0){
			int x = n %10 ; 
			if(x < MIN) MIN = x ;  
			if(x > MAX) MAX = x ; 
			n /= 10 ; 
		}
		printf("%d %d\n",MAX , MIN) ; 
	}	
	return 0 ; 
}
