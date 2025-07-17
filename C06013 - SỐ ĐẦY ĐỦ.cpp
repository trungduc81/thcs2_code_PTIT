#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

void solve(){
	char s[1005] ; 
	fgets(s,sizeof(s),stdin) ; 
	s[strcspn(s,"\n")] = 0 ; 
	int check = 0 ; 
	if(s[0]=='0') {
		printf("INVALID\n") ; 
		return ; 
	}
	int cnt[10]= {0} ; 
	for(int i = 0 ; i < strlen(s) ; i++){
		if(!isdigit(s[i])){
			printf("INVALID\n") ; 
			return ; 
		}
		cnt[s[i]-'0']++ ; 
	}
	for(int i = 0 ; i < 10 ; i++){
		if(cnt[i]==0){
			printf("NO\n") ; 
			return ; 
		}
	}
	printf("YES\n") ; 
}

int main(){
    int t ; scanf("%d",&t) ; 
    getchar() ; 
    while(t--){
    	solve() ; 
	}
}

