#include<stdio.h>
#include<math.h>
#include<string.h>
#define ll long long 

ll giaithua(int n){
	ll res = 1 ; 
	for(int i = 1 ; i <= n ; i++) res *= i ;
	return res ; 
}


int main(){
    int n ; scanf("%d",&n) ; 
    int k = n ; 
    ll sum = 0 ; 
	while(n>0){
		int m = n%10 ; 
		sum += giaithua(m) ; 
		n /= 10 ; 
	}
	if(sum==k) printf("1") ; 
	else printf("0") ;  
}
	
    
