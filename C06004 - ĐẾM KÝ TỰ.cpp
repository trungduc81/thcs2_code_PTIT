#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#define ll long long
#define MAX 1000005

void solve(){
	char s[200] ;  
	gets(s) ; 
	int cnt1 = 0 , cnt2 = 0 , cnt3 = 0 ; 
	for(int i = 0 ; i < strlen(s) ; i++){
		if(isalpha(s[i])) cnt1++ ; 
		else if(isdigit(s[i])) cnt2++ ; 
		else cnt3++ ; 
	} 
	printf("%d %d %d",cnt1,cnt2,cnt3) ; 
} 

int main(){ 
    solve() ; 
}

