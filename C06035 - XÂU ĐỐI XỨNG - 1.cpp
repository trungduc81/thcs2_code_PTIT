#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define ll long long

void solve(){
	char s[25] ; 
	scanf("%s",s) ; 
	int l = 0 , r = strlen(s) - 1 , cnt = 0 ; 
	while(l<r){
		if(s[l] != s[r]) cnt++ ; 
		l++ ; 
		r-- ; 
	}
	if(cnt==1) printf("YES\n") ; 
	else if(cnt==0 && strlen(s)%2==1) printf("YES\n") ; 
	else printf("NO\n") ; 
}

int main(){
	int t ; scanf("%d",&t) ; 
	while(t--){
		solve() ; 
	}
}




