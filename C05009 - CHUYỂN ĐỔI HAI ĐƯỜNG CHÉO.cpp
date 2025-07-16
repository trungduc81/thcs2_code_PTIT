#include<stdio.h>
#include<math.h>

void swap(int *a , int *b){
	int tmp = *a ; 
	*a = *b ; 
	*b = tmp ; 
}

int main(){
	int m  ; scanf("%d",&m) ; 
	int a[m+1][m+1] ; 
	for(int i = 1 ; i <= m ; i++){
		for(int j = 1 ; j <= m ; j++){
			scanf("%d",&a[i][j]) ; 
		}
	}
	for(int i = 1 ; i <= m ; i++){
		swap(&a[i][i],&a[i][m-i+1]) ; 
    }
	for(int i = 1 ; i <= m ; i++){
		for(int j = 1 ; j <= m ; j++){
			printf("%d ",a[i][j]) ; 
		}
		printf("\n") ; 
	}
}
