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
	int m ; scanf("%d",&m) ; 
	for(int i = m ; i < n ; i++) printf("%d ",a[i]) ; 
	for(int i = 0 ; i < m ; i++) printf("%d ",a[i]) ; 
} 

int main(){ 
    solve() ; 
}

