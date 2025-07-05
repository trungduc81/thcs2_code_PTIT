#include<stdio.h>
#include<math.h>
#include<string.h>
#define ll long long
#define MAX 1000005

int check(int a[] , int n){
	int l = 0 , r = n - 1  ; 
	while(l < r){
		if(a[l] != a[r]) return 0 ; 
		l++ ; 
		r-- ; 
	}
	return 1 ; 
}


void solve(){
	int n ; scanf("%d",&n) ; 
	int a[n] ; 
	for(int i = 0 ; i < n ; i++) scanf("%d",&a[i]) ; 
	if(check(a,n)) printf("YES\n") ; 
	else printf("NO\n") ; 
}

int main(){
    int t ; scanf("%d",&t) ; 
	while(t--){
		solve() ; 
	} 
}

