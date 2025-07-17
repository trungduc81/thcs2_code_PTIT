#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

void solve(){
	char s[100] ; 
	fgets(s,sizeof(s),stdin) ; 
	s[strcspn(s,"\n")] = 0 ; 
	for(int i = 0 ; i < strlen(s) ; i++) s[i] = tolower(s[i]) ; 
	char a[100][50] ; 
	int idx = 0 ; 
	char *token = strtok(s," ") ; 
	while(token != NULL){
		strcpy(a[idx++],token) ; 
		token = strtok(NULL," ") ; 
	} 
	for(int i = 0 ; i < idx ; i++){
		a[i][0] = toupper(a[i][0]) ; 
		printf("%s ",a[i]) ; 
	}
	printf("\n") ; 
}

int main(){
    int t ; scanf("%d",&t) ; 
    getchar() ; 
    while(t--){
    	solve() ; 
	}
}

