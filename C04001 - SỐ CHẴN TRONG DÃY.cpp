#include<stdio.h>
#include<math.h>
#include<string.h>
#define ll long long
#define MAX 1000005


void solve(){
	int n ; scanf("%d",&n) ; 
	int a[n] ; 
	for(int i = 0 ; i < n ; i++) scanf("%d",&a[i]) ; 
	for(int i = 0 ; i < n ; i++){
		if(a[i]%2==0) printf("%d ",a[i]) ; 
	}
	printf("\n") ; 
}

int main(){
    int t ; scanf("%d",&t) ; 
	while(t--){
		solve() ; 
	} 
}
