#include<stdio.h>
#include<math.h>

void swap(int *a , int *b){
	int tmp = *a ; 
	*a = *b ; 
	*b = tmp ; 
}

int main(){
	int m , n ; scanf("%d %d",&m,&n) ; 
	int a[m][n] ; 
	for(int i = 0 ; i < m ; i++){
		for(int j = 0 ; j < n ; j++){
			scanf("%d",&a[i][j]) ; 
		}
	}
	int x , y ; scanf("%d %d",&x,&y) ; 
	for(int i = 0 ; i < n ; i++){
		swap(&a[x-1][i],&a[y-1][i]) ; 
	}
	for(int i = 0 ; i < m ; i++){
		for(int j = 0 ; j < n ; j++){
			printf("%d ",a[i][j]) ; 
		}
		printf("\n") ; 
	}
}
