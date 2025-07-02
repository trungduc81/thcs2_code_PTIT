#include<stdio.h>
#include<math.h>
#define ll long long

void check(int n){
	int a = n % 10 ;; 
	while(n > 10){
		n /= 10 ; 
	}
	if(a==n) printf("YES\n") ; 
	else printf("NO\n") ; 
}

int main(){
	int t ; scanf("%d",&t) ; 
	while(t--){
		int n ; scanf("%d",&n) ; 
		check(n) ; 	
	}	
	return 0 ; 
}
