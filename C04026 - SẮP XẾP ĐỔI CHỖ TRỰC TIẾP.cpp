#include<stdio.h>

void bubble_sort(int a[] , int n){ 
    int cnt = 0 ; 
	for(int i = 0 ; i < n - 1 ; i++ ){
		for(int j = i + 1 ; j < n ; j++ ){
			if(a[i] > a[j]) {
				int tmp = a[i] ; 
				a[i] = a[j] ; 
				a[j] = tmp ;  
			}  
		}
		cnt++ ; 
		printf("Buoc %d: ",cnt) ; 
		for(int i = 0 ; i < n ; i++){
			printf("%d ",a[i]) ; 
		}
		printf("\n") ;  
	}
}

int main(){
	int n ; scanf("%d",&n) ; 
	int a[n] ; 
	for(int i = 0 ; i < n ; i++) scanf("%d",&a[i]) ; 
	bubble_sort(a,n) ; 
}
