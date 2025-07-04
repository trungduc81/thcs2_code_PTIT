#include<stdio.h>
#include<math.h>
#include<string.h>
#define ll long long

int pld(int n){
	int sum = 0 , k = n ; 
	while(k>0){
		sum = sum*10 + k%10 ; 
		k /=  10 ; 
	}
	return sum == n ; 
}

int isprime(int n){
	if(n<2) return 0 ; 
	for(int i = 2 ; i *i <= n ; i++){
		if(n%i==0) return 0 ; 
	}
	return 1 ; 
}

void solve(){
	int a , b ; scanf("%d %d",&a,&b) ; 
	int cnt = 0 ; 
	for(int i = a ; i <= b ; i++){
		if(pld(i) && isprime(i)){
			printf("%d ",i) ; 
			cnt++ ; 
			if(cnt==10){
				printf("\n") ; 
				cnt = 0 ; 
			}	
		} 
	}
	printf("\n") ;  
}

int main(){
	int t ; scanf("%d",&t) ; 
	while(t--){
		solve() ; 
	}
}
