#include<stdio.h>
#include<math.h>
#include<string.h>
#define ll long long
#define MAX 1000005

int check(int a[] , int len){
	if((a[0] != 2 * a[len-1]) && (a[len-1] != 2*a[0])) return 0 ; 
	for(int i = 1 ; i < len/2 ; i++){
		if(a[i] != a[len-1-i]) return 0 ; 
	}
	return 1 ; 
}

void solve(){
	char s[20] ; 
	scanf("%s",s) ; 
	int len = strlen(s) ; 
	int a[len] ; 
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

