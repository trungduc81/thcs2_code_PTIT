#include<stdio.h>
#include<math.h>
#include<string.h>
#define ll long long
#define MAX 1000005

void solve(){
	int a , b ; scanf("%d %d",&a,&b) ; 
	int A[a] , B[b] ; 
	for(int i = 0 ; i < a ;i++) scanf("%d",&A[i]) ; 
	for(int i = 0 ; i < b ; i++) scanf("%d",&B[i]) ; 
	int p ; scanf("%d",&p) ; 
	for(int i = 0 ; i < p ; i++){
		printf("%d ",A[i]) ; 
	}
	for(int i = 0 ; i < b ; i++){
		printf("%d ",B[i]) ;
	}
	for(int i = p ; i < a ; i++){
		printf("%d ",A[i]) ; 
	}
}

int main(){ 
    solve() ;  
}

