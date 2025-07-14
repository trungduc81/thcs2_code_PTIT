#include<stdio.h>  

int main() {
    int  m , n ; 
    scanf("%d %d",&m,&n) ; 
    if(m <= n){
    	for(int i = 1 ; i <= m ; i++){
    		for(int j = 1 ; j <= i ; j++){
    			char c = 'a' + n - j ; 
    			printf("%c",c) ; 
			}
			for(int j = i + 1 ; j <= n ; j++){
				printf("%c",'a'+n-i) ; 
			}
			printf("\n") ; 
		}
	}
	else {
		for(int i = 1 ; i <= n ; i++){
    		for(int j = 1 ; j <= i ; j++){
    			char c = 'a' + m - j ; 
    			printf("%c",c) ; 
			}
			for(int j = i + 1 ; j <= n ; j++){
				printf("%c",'a'+m-i) ; 
			}
			printf("\n") ; 
		}
		for(int i = n + 1 ; i <= m ; i++){
			for(int j = 1 ; j <= n ; j++){
				printf("%c",'a'+m-j) ; 
			}
			printf("\n") ; 
		}
		
	}
}


