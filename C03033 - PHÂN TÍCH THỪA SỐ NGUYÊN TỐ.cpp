#include<stdio.h>
#include<math.h>

int isprime(int n){
	if(n<2) return 0 ; 
	for(int i = 2 ; i <= sqrt(n) ; i++){
		if(n%i==0) return 0 ; 
	}
	return 1 ; 
}
void solve(){
	int n ; scanf("%d",&n) ; 
	int k = n , check = 0 ; 
	printf("%d = ",n) ; 
  	for(int i = 2 ; i <= sqrt(n) ; i++){
		if(isprime(i)){
			int cnt = 0 ; 
			while(n%i==0){
				cnt++ ; 
				n /= i ; 
			}
		    if(cnt>0) {
		    	if(check) printf(" * ") ;
		    	check = 1 ; 
		    	printf("%d^%d",i,cnt) ; 
			}
	    }    
	}
	if(isprime(n)){
		if(check) printf(" * ") ; 
		printf("%d^1",n) ;
	} 
	printf("\n") ; 
}

int main(){
	int t; scanf("%d", &t);
	while(t--){
		solve();
	}
}
 
