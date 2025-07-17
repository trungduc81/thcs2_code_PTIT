#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

int check1(int a[] , int n){
	for(int i = 0 ; i < n - 1 ; i++){
		if(a[i]>=a[i+1]) return 0 ; 
	}
	return 1 ; 
}

int check2(int a[] , int n){
	for(int i = 0 ; i < n - 1 ; i++){
		if(a[i] != a[i+1]) return 0 ; 
	}
	return 1 ; 
}

int check3(int a[] , int n){
	if((a[0]==a[1]&&a[1]==a[2]) && (a[3]==a[4])) 
	return 1 ; 
	else return 0 ; 
}

int check4(int a[] , int n){
	for(int i = 0 ; i < n ; i++){
		if(a[i] != 6 && a[i] != 8) return 0 ; 
	}
	return 1 ; 
}
void solve(){
	char s[15] ; 
	fgets(s,sizeof(s),stdin) ; 
	s[strcspn(s,"\n")] = 0 ; 
	int a[5] , idx = 0 ; 
	for(int i = 6 ; i < strlen(s) ; i++){
		if(s[i] != '.') a[idx++] = s[i] - '0' ; 
	}
	if(check1(a,idx) || check2(a,idx) || check3(a,idx) || check4(a,idx)){
		printf("YES\n") ; 
	}
	else printf("NO\n") ; 
}

int main(){
    int t ; scanf("%d",&t) ; 
    getchar() ; 
    while(t--){
    	solve() ; 
	}
}

