#include<stdio.h>
#include<math.h>
#include<string.h>
#define ll long long 

int perfect(int n){
	int sum = 1 ; 
	for(int i = 2 ; i < sqrt(n) ; i++){
		if(n%i==0){
			sum += i ; 
			sum += n/i ; 
		}
	}
	if(sqrt(n) == (int) sqrt(n)) sum += (int) sqrt(n) ; 
	if(sum ==n) return 1 ; 
	else return 0 ; 
}

int main(){
    int n ; scanf("%d",&n) ; 
    if(perfect(n)) printf("1") ; 
    else printf("0") ; 
}
	
    
