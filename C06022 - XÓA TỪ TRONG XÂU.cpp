#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

int T = 1 ; 

void solve(){
	char s[205] , word[50] ; 
	fgets(s,sizeof(s),stdin) ; 
	s[strcspn(s,"\n")] = 0 ; 
	scanf("%s",word) ; 
	getchar() ; 
	int len = strlen(s) ; 
	for(int i = 0 ; i < strlen(word) ; i++) word[i] = tolower(word[i]) ; 
	char a[100][50] ; int idx = 0 ; 
	char *token = strtok(s," ") ; 
	while(token != NULL){
		strcpy(a[idx++],token) ; 
		token = strtok(NULL, " ") ; 
	}
	int res[200]= {0} ; 
	for(int i = 0 ; i < idx ; i++){
		char m[50] ; 
		strcpy(m,a[i]) ; 
		for(int j = 0 ; j < strlen(m) ; j++) m[j] = tolower(m[j]) ; 
		if(strcmp(word,m)==0) res[i] = 1 ; 
	}
	printf("Test %d: ",T) ; 
	for(int i = 0 ; i < idx ; i++){
		if(!res[i]) printf("%s ",a[i]) ; 
	}
	printf("\n") ; 
	T++ ; 
}

int main(){
	int t ; scanf("%d",&t) ; 
	getchar() ; 
	while(t--){
		solve() ; 
	}
}



