#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

void solve(){
	char s[1005] ; 
	scanf("%s",s) ; 
	int chan = 0 , le = 0 ;
	int len = strlen(s) ; 
	if(s[0]=='0') {
		printf("INVALID\n") ; 
		return ; 
	}
	for(int i = 0 ; i < len ; i++){
		if(!isdigit(s[i])){
			printf("INVALID\n") ; 
			return ; 
		}
		int d = s[i] - '0' ; 
		if(d%2==0) chan++ ; 
		else le++ ; 
	}
	if(chan > le && (chan+le)%2==0) printf("YES\n") ; 
	else if(chan < le && (chan+le) % 2 != 0) printf("YES\n") ; 
	else printf("NO\n") ; 
}

int main(){
	int t ; scanf("%d",&t) ; 
	while(t--){
		solve() ; 
	}
}



