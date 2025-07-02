#include<stdio.h>
#include<math.h>
#include<string.h>
#define ll long long 

int main(){
    int n ; scanf("%d",&n) ;  
    int le = 0 , chan = 0 ; 
    while(n>0){
    	int m = n % 10 ; 
    	if(m%2==0) chan++ ; 
    	else le++ ; 
    	n /= 10 ; 
	}
	printf("%d %d\n",le,chan) ; 
	  
}
	
    
