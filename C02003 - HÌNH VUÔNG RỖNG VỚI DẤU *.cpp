#include<stdio.h>
#include<math.h>
#include<string.h>
#define ll long long 

int main() {
    int n ; scanf("%d",&n) ; 
    for(int i = 1 ; i <= n ; i++){
    	for(int j = 1 ; j <= n ; j++){
    		if(i==1 || j==1 || j== n || i ==n) 
			printf("*") ; 
			else printf(".") ;  
		}
		printf("\n") ; 
	}
}

