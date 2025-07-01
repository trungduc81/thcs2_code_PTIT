#include<stdio.h>
#define ll long long

int main(){
	int a , b ; 
	scanf("%d %d",&a,&b) ; 
	if(b==0){
		printf("0") ; 
		return 0 ; 
	}
	int tong = a + b , hieu = a-b , tich = a*b ; 
	double thuong = (double) a / b ; 
	int du = a % b ; 
	printf("%d %d %d %.2f %d\n",tong,hieu,tich,thuong,du) ; 
	return 0 ; 
}
