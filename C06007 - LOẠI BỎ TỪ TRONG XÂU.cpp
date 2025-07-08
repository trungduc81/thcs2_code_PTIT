#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#define ll long long
#define MAX 1000005

void solve(){
	char s1[200] ;  
	gets(s1) ; 
	char s2[20] ; 
	gets(s2) ; 
	char a[100][100] ; 
	int cnt = 0 ; 
	char *token = strtok(s1," ") ; 
	while(token != NULL){
		strcpy(a[cnt++],token) ; 
		token = strtok(NULL , " ") ; 
	}
	for(int i = 0 ; i < cnt  ; i++){
		if(strcmp(a[i],s2)) printf("%s ",a[i]) ; 
	}
	 
} 

int main(){ 
    solve() ; 
}

