#include<stdio.h>
#include<math.h>
#include<string.h>
#define ll long long

int check(int n){
	while(n>0){
		int a = n % 10 ; 
		int b = (n/10)%10 ; 
		if(a < b) return 0 ; 
		n /= 10 ;  
	}
	return 1 ; 
}

int main(){
	int t; scanf("%d",&t) ; 
	while(t--){
		int n ; scanf("%d",&n) ; 
		int a = pow(10,n-1) , b = pow(10,n) ; 
		for(int i = a ; i < b ; i++){
			if(check(i)) printf("%d ",i) ; 
		}
		printf("\n") ; 
	}
}
