#include<stdio.h>

int main(){
    int m ; 
    scanf("%d", &m);
    char c = '@' ; 
    for(int i = 1 ; i <= m ; i++){
    	c = '@' ; 
    	for(int j = 1 ; j < i ; j++){
    		 printf("%c",c) ; 
    		 c += 2 ; 
		}
		for(int j = i ; j <= 2*i - 1 ; j++){
			printf("%c",c) ; 
			c -= 2 ; 
		}
		printf("\n") ; 
	}
}

