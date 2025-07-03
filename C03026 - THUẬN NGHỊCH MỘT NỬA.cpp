#include<stdio.h>
#include<math.h>
#include<string.h>
#define ll long long

int palindrome(char s[]){
	int len = strlen(s) ; 
	int a[len] ; 
	for(int i = 0 ; i < len ; i++){
		a[i] = s[i] - '0' ; 
	}
	for(int i = 0 ; i < (len+1)/2 ; i++){
		if(a[i] != a[len-1-i]) return 0 ; 
	}
	return 1 ; 
}

int main(){
	char s1[10] , s2[10] ; 
	scanf("%s %s",s1,s2) ; 
	if(palindrome(s1) && !palindrome(s2) || (palindrome(s2) && !palindrome(s1)))
	printf("YES") ; 
	else printf("NO") ; 
	 
}
