#include<stdio.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
#include<stdlib.h>
#define ll long long

int main(){
    int n ; scanf("%d",&n) ; 
    char c , d ; 
	c = d = 'A' + n - 2 ;  
    for(int i = 1 ; i < n ; i++){
    	c = d ; 
    	for(int j = 1 ; j <= n - i + 1  ; j++){
    		printf("%c",c) ; 
    		c += 1 ; 
		}
		d -= 1 ; 
		printf("\n") ; 
	}
	printf("@") ; 
}
