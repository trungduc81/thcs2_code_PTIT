#include<stdio.h>
#include<math.h>
#define ll long long
#define MAX 100000

int gcd(int a , int b){
	if(b==0) return a ; 
	else return gcd(b,a%b) ; 
}

int main(){
	int a , b ; scanf("%d %d",&a,&b) ; 
	for(int i = a ; i <= b - 1 ; i++){
		for(int j = i + 1 ; j <= b ; j++){
			if(gcd(i,j)==1) printf("(%d,%d)\n",i,j) ; 
		}
	}
}

