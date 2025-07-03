#include<stdio.h>
#include<math.h>
#include<string.h>
#define ll long long 

int main() {
    int n ; scanf("%d",&n) ; 
    for(int i = 1 ; i <= n ; i++){
    	for(int j = 1 ; j <= i ; j++){
    		if( i != n){
    			if(j==i || j == 1) printf("*") ; 
    		    else printf(".") ; 
            } 
    	    else printf("*") ; 
		}
		printf("\n") ; 
	}
     
}


