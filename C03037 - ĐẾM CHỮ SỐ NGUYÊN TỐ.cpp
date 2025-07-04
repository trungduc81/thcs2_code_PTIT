#include<stdio.h>
#include<math.h>
#include<string.h>
#define ll long long

void solve(){
	int a[10] ; 
	for(int i = 0 ; i < 10 ; i++) a[i] = 0 ;
	char s[20] ; 
	scanf("%s",s) ; 
	int len = strlen(s) ; 
	for(int i = 0 ; i < len ; i++){
		int j = s[i] - '0' ; 
		a[j]++ ; 
	}
	for(int i = 0 ; i < 10 ; i++){
		if(a[i]>0){
			if(i==2 || i==3 || i==5 || i==7){
				printf("%d %d\n",i,a[i]) ; 
			}
		}
	} 
}

int main(){
	solve();
}
 
