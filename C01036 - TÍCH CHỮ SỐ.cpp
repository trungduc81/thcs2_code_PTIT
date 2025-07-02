#include<stdio.h>
#include<math.h>
#define ll long long 

int main(){
    int n ; scanf("%d",&n) ; 
    int res = 1 ; 
    while(n >0){
    	res *= n%10 ; 
    	n /= 10 ; 
	}
	printf("%d",res) ; 
}
