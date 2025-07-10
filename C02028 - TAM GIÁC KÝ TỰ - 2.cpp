#include<stdio.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
#include<stdlib.h>
#define ll long long

int main(){
    int n ; scanf("%d",&n) ; 
    char c = 'A' , d = 'A' ; 
    for(int i = 1 ; i <= n ; i++){
    	c = d ; 
    	for(int j = 1 ; j <= n - i + 1  ; j++){
    		printf("%c",c) ; 
    		c += 2 ; 
		}
		d += 2 ; 
		printf("\n") ; 
	}
}

