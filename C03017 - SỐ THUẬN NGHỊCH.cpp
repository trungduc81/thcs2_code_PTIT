#include<stdio.h>
#include<math.h>
#include<string.h>
#define ll long long
#define MAX 100000

int main(){
	int t ; scanf("%d",&t) ; 
	while(t--){
	char s[18] ; 
	scanf("%s",s) ; 
	int len = strlen(s) ; 
	int a[len] ; 
	for(int i = 0 ; i < len ; i++){
		a[i] = s[i] -'0' ; 
	}
	int check = 1 ; 
	for(int i = 0 ; i < (len+1) / 2 ; i++){
		if(a[i] != a[len-i-1]){
			check = 0 ; 
			break ; 
		}
	}
	if(!check) printf("NO\n") ; 
	else printf("YES\n") ;
	}
}
