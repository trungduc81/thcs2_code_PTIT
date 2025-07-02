#include<stdio.h>
#include<math.h>
#include<string.h>
#define ll long long 

int main(){
    int n ; scanf("%d",&n) ;  
    int k = n ; 
    while(n>10){
    	n /= 10 ; 
	}
	printf("%d %d\n",n,k%10) ; 
	  
}
	
    
