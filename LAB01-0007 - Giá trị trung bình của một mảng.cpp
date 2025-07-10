#include<stdio.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
#include<stdlib.h>
#define ll long long

int main(){
	int n ; scanf("%d",&n) ; 
	ll a[n] ; 
	ll sum  = 0 ; 
	for(int i = 0 ; i < n ; i++){
		scanf("%lld",&a[i]) ; 
		sum += a[i] ; 
	}
	double res = (double) sum / n ; 
	printf("%.3lf",res) ; 

}

