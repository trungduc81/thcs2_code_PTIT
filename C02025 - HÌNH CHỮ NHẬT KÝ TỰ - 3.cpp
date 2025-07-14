#include<stdio.h>

int main(){
    int m, n;
    scanf("%d %d", &m, &n);
    char c = '@' ; 
    if(m<=n){
    	for(int i = 1 ; i <= m ; i++){
    		for(char j = c ; j < '@' + n - 1 ; j++){
    			printf("%c",j) ; 
			}
			for(int j = i ; j >= 1 ; j-- ){
				printf("%c",'@'+n-1) ; 
			}
			c++ ; 
			printf("\n") ; 	
		}
	}
	else {
		for(int i = 1 ; i <= n ; i++){
    		for(char j = c ; j < '@' + n - 1 ; j++){
    			printf("%c",j) ; 
			}
			for(int j = i ; j >= 1 ; j-- ){
				printf("%c",'@'+n-1) ; 
			}
			c++ ; 
			printf("\n") ; 	
		}
		for(int i = n + 1 ; i <= m ; i++){
			for(int j = 1 ; j <= n ; j++){
				printf("%c",'@'+n-1) ; 
			}
			printf("\n") ; 
		}
		
	}
    
}

