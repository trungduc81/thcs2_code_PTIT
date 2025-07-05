#include<stdio.h>
#include<math.h>
#include<string.h>
#define ll long long
#define MAX 1000005

void solve(){
	int n ; scanf("%d",&n) ; 
	int a[n] ; 
	for(int i = 0 ; i < n ; i++){
		scanf("%d",&a[i]) ; 
	}
	for(int i = n - 1 ; i >= 0 ; i--){
		printf("%d ",a[i]) ; 
	} 
	printf("\n") ; 
}

int main(){ 
    solve() ;  
}

