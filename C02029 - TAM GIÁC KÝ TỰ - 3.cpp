#include<stdio.h>  

int main() {
    int n ; scanf("%d",&n) ; 
    char k , tmp ; 
	int d ;  
    k = tmp = 'A' ; 
    for(int i = 1 ; i <= n ; i++){
    	d = n - 1 ; 
    	for(int j = 1 ; j <= i ; j++){
    		printf("%c ",k) ;
    		k += d ; 
    		d-- ;  
		}
		tmp++ ; 
		k = tmp ; 
		printf("\n") ; 
	}
}


