#include<stdio.h>
#include<math.h>
#include<string.h>
#define ll long long

ll gt[11] ; 

void giaithua(){
	gt[0] = 1 ; 
	for(int i = 1 ; i < 11 ; i++){
		gt[i] = gt[i-1]*i ; 
	}
}

int main(){
	int n ; scanf("%d",&n) ;
	giaithua() ;  
	for(int i = 0 ; i < n ; i++){
		for(int j = 0 ; j <= i ; j++){
			printf("%lld ",gt[i]/(gt[j]*gt[i-j])) ; 
		}
		printf("\n") ; 
	}
}
