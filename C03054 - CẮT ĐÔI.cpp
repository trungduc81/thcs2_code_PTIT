#include<stdio.h>
#include<math.h>
#include<string.h>
#define ll long long
#define MAX 1000005

void solve(){
	char s[20] ; 
	scanf("%s",s) ; 
	int len = strlen(s) ; 
	for(int i = 0 ; i < len ; i++){
		if(s[i] != '1'){
			if(s[i]=='0' || s[i] =='8' || s[i] =='9') s[i] = '0' ; 
		    else {
		    	printf("INVALID\n") ; 
		    	return ; 
			}
		}
	}
	int check = -1 ; 
	for(int i = 0 ; i < len ; i++){
		if(s[i] != '0'){
			check = i ; 
			break ; 
		}
	}
	if(check>=0){
		for(int i = check ; i < len ; i++){
			printf("%c",s[i]) ; 
		}
	}
	else printf("INVALID\n") ; 
	printf("\n") ; 
}


int main(){
    int t;
    scanf("%d", &t);
    while (t--) {
        solve() ; 
    }
}
