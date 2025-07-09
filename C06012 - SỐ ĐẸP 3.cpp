#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

int check(int a[] , int n){
	for(int i = 0 ; i < n ; i++){
		if(a[i] != 2 && a[i] != 3 && a[i] != 5 && a[i] != 7) 
		return 0 ; 
	}
	for(int i = 0 ; i < (n+1)/2 ; i++){
		if(a[i] != a[n-1-i]) return 0 ; 
	}
	return 1 ; 
}

void solve(){
	char s[500] ; 
	scanf("%s",s) ; 
	int len = strlen(s) ; 
	int a[500] ; 
	for(int i = 0 ; i < len ; i++) a[i] = s[i] - '0' ; 
	if(check(a,len)) printf("YES\n") ; 
	else printf("NO\n") ; 
}

int main(){
    int t ; scanf("%d",&t) ; 
    while(t--){
    	solve() ; 
	}
}
