#include<stdio.h>
#include<math.h>

int gcd(int a , int b){
	if(b==0) return a ; 
	else return gcd(b,a%b) ; 
}

int reverse(int n){
	int sum = 0 , k = n ;  
	while(k>0){
		sum = sum*10 + k%10 ; 
		k /=10 ; 
	}
	return sum ; 
}

void solve(){
	int a ; scanf("%d",&a) ; 
	if(gcd(a,reverse(a)) == 1) printf("YES\n") ; 
	else printf("NO\n") ; 
	
}

int main(){
	int t; scanf("%d", &t);
	while(t--){
		solve();
	}
}
 
