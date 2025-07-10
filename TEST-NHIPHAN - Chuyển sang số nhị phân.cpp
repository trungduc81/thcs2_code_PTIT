#include<stdio.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
#include<stdlib.h>
#define ll long long

int main(){
    int n ; scanf("%d",&n) ; 
    int a[10] = {0} , idx = 0 ; 
    if(n==0) {
    	printf("0") ; 
    	return 0 ; 
	}
    while(n>0){
    	int m = n % 2 ; 
    	a[idx++] = m ; 
    	n /= 2 ; 
	}
	for(int i = idx - 1 ; i >= 0 ; i--) printf("%d",a[i]) ; 
}
