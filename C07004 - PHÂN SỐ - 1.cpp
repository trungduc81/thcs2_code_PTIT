#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#define MAX 100006
#define ll long long

struct ps{
	ll x , y ; 
}; 

ll gcd(ll a , ll b){
	if(b==0) return a ; 
	else return gcd(b,a%b) ; 
}

int main(){
	struct ps p ; 
	scanf("%lld %lld",&p.x,&p.y) ; 
	ll tmp = gcd(p.x,p.y) ; 
	printf("%lld/%lld",p.x/tmp,p.y/tmp) ; 
}
