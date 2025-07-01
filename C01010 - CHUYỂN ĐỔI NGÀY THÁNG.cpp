#include<stdio.h>
#define ll long long

int main(){
	int a ; scanf("%d",&a) ; 
	int y , m ; 
	y = a / 365 ; 
	a -= y* 365 ; 
	m = a / 7 ; 
	a -= m*7 ; 
	printf("%d %d %d\n",y,m,a) ; 
	
}
