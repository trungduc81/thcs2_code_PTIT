#include<stdio.h>
#define ll long long 

int gcd(int a, int b){
	if(b==0) return a ; 
	else return gcd(b,a%b) ; 
}

int main(){
	int t ; scanf("%d",&t) ; 
	while(t--){
		int a , b ; 
	    scanf("%d %d",&a,&b) ; 
     	printf("%d\n",gcd(a,b)) ;
	} 
}
