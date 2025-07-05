#include<stdio.h>
#include<math.h>
#include<string.h>
#define ll long long

int check(int n){
	int sum = 0 , k = n , tongcs = 0 ; 
	while(k>0){
		int m = k %10 ; 
		if(m==4) return 0 ; 
		sum = sum * 10 + m ; 
		tongcs += m ; 
		k /= 10 ; 
	}
	if(sum==n && tongcs%10==0) return 1 ; 
	else return 0 ; 
}
int main(){
	int t ; scanf("%d",&t) ; 
	while(t--){
		int n ; scanf("%d",&n) ; 
		int a = pow(10,n-1) , b = pow(10,n) ; 
		for(int i = a ; i < b ; i++){
			if(check(i)) printf("%d ",i) ; 
		}
		printf("\n") ; 
	}
}
 
