#include<stdio.h>

int main() {
    int m , n ; scanf("%d %d",&m,&n) ; 
    int k = 1 ; 
    if(m<=n){
    	for(int i = 1 ; i <= m ; i++){
    		for(int j = k ; j <= n ; j++){
    			printf("%d",j) ; 
			}
			for(int j = n - 1  ; j > n - k ;j--){
				printf("%d",j) ; 
			}
			k++ ; 
			printf("\n") ; 
		}
	}
	else {
		for(int i = 1 ; i <= n ; i++){
    		for(int j = k ; j <= n ; j++){
    			printf("%d",j) ; 
			}
			for(int j = n - 1 ; j > n - k ;j--){
				printf("%d",j) ; 
			}
			k++ ; 
			printf("\n") ; 
		}
		for(int i = n + 1 ; i <= m ; i++){
			printf("%d",i) ; 
			for(int j = i - 1 ; j > i - n  ; j--){
				printf("%d",j) ;
			} 
			printf("\n") ; 
		}
		
	}

    return 0;
}

