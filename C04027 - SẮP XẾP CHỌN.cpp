#include<stdio.h>

void selection_sort(int a[] , int n){
	int cnt = 1 ; 
	for(int i = 0 ; i < n - 1 ; i++){
		int min = i ; 
		for(int j = i + 1 ; j < n ; j++){
			if(a[j] < a[min]) min = j ; 
		}
		if(min != i){
			int tmp = a[i] ; 
			a[i] = a[min] ; 
			a[min] = tmp ; 
		}
		printf("Buoc %d: ",cnt) ; 
		for(int i = 0 ; i < n ; i++) printf("%d ",a[i]) ; 
		cnt++ ; 
		printf("\n") ; 
	}
}

int main(){
	int n ; scanf("%d",&n) ; 
	int a[n] ; 
	for(int i = 0 ; i < n ; i++) scanf("%d",&a[i]) ; 
	selection_sort(a,n) ; 
}
