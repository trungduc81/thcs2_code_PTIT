#include<stdio.h>
#include<math.h>
#include<string.h>
#define ll long long
#define MAX 1000005

void solve(){
	char s[200] ;  
	gets(s) ; 
	char *token = strtok(s," ") ; 
	int dem = 0 ; 
	while(token != NULL){
		dem++ ; 
		token = strtok(NULL," ") ; 
	}
	printf("%d\n",dem) ; 
} 

int main(){ 
    int t ; scanf("%d",&t) ; 
    getchar() ; 
    while(t--){
    	solve() ; 
	}
}

