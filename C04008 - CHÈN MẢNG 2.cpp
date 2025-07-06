#include<stdio.h>
#include<math.h>
#include<string.h>
#define ll long long
#define MAX 1000005

int T = 1 ; 

void solve(){
	int a , b , p  ; scanf("%d %d %d",&a,&b,&p) ; 
	int A[a] , B[b] ; 
	for(int i = 0 ; i < a ;i++) scanf("%d",&A[i]) ; 
	for(int i = 0 ; i < b ; i++) scanf("%d",&B[i]) ; 
	printf("Test %d:\n",T) ; 
  	for(int i = 0 ; i < p ; i++){
		printf("%d ",A[i]) ; 
	}
	for(int i = 0 ; i < b ; i++){
		printf("%d ",B[i]) ;
	}
	for(int i = p ; i < a ; i++){
		printf("%d ",A[i]) ; 
	}
	T++ ; 
	printf("\n") ; 
}

int main(){ 
    int t ; scanf("%d",&t) ; 
	while(t--){
		solve() ; 
	} 
}

