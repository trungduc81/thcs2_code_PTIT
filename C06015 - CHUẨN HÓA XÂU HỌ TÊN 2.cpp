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
		if(i==0) {
			for(int j = 0 ; j < strlen(a[i]) ; j++){
				a[i][j] = toupper(a[i][j]) ; 
			}
		}
	    else a[i][0] = toupper(a[i][0]) ;  
	}
	for(int i = 1 ; i < idx ; i++){
		printf("%s",a[i]) ; 
		if(i != idx - 1) printf(" ") ; 
	}
	printf(", %s\n",a[0]) ; 
}

int main(){
    int t ; scanf("%d",&t) ; 
    getchar() ; 
    while(t--){
    	solve() ; 
	}
}

