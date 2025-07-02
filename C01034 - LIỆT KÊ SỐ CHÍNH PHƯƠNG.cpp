#include<stdio.h>
#include<math.h>
#define ll long long 

int main(){
		int m , n ; scanf("%d %d",&m,&n) ; 
		int  a =  (int) ceil(sqrt(m)) ; 
		int  b =  (int) floor(sqrt(n)) ; 
		printf("%d\n",b-a+1) ; 
		for(int i = a ; i <= b ; i++){
			printf("%d\n",i*i) ; 
		}
}
