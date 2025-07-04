#include<stdio.h>
#include<math.h>
#include<string.h>
#define ll long long

int sogiam(int n){
	if(n<10) return 1 ; 
	while(n>=10){
		int a = n % 10 ; 
		int b = (n/10)%10 ; 
		if(a>=b) return 0 ; 
		n /= 10 ; 
	}
	return 1 ; 
}

int main(){
	int t ; scanf("%d",&t) ; 
	while(t--){
		int a , b ; scanf("%d %d",&a,&b) ; 
		int cnt = 0 ; 
		for(int i = a ; i <= b ; i++){
			if(sogiam(i)) cnt++ ; 
		} 
		printf("%d\n",cnt) ; 
	}
}
 
