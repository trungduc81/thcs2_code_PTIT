#include<stdio.h>

int main() {
    int m , n ; scanf("%d %d",&m,&n) ; 
    char k = 'A' ; 
    if(m<=n){
    	for(int i = 1 ; i <= m ; i++){
    		for(char j = k ; j <= 'A' + n - 1; j++){
    			printf("%c",j) ; 
			}
			for(char j = k - 1 ; j >= 'A' ; j--){
				printf("%c",j) ; 
			}
			k++ ; 
			printf("\n") ; 
		}	
	}
	else {
		for(int i = 1 ; i <= n ; i++){
    		for(char j = k ; j <= 'A' + n - 1; j++){
    			printf("%c",j) ; 
			}
			for(char j = k - 1 ; j >= 'A' ; j--){
				printf("%c",j) ; 
			}
			k++ ; 
			printf("\n") ; 
		}
		for(int i = n + 1 ; i <= m ; i++){
			for(int j = 1 ; j <= n ; j++){
				printf("%c",'A'+n-j) ; 
			}
			printf("\n") ; 
		}
    }
}


