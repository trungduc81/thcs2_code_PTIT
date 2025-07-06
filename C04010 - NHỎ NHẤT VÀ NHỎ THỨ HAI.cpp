#include<stdio.h>
#include<math.h>
#include<string.h>
#define ll long long
#define MAX 1000005

void solve(){
	int n ; scanf("%d",&n) ; 
	int a[n] ;
	for(int i = 0 ; i < n ; i++){
		scanf("%d",&a[i]) ; 
	}
	int first = MAX , second = MAX ; 
	for(int i = 0 ; i < n ; i++){
		if(a[i] < first ){
			second = first ; 
			first = a[i] ; 
		} 
		else if(a[i] > first && a[i] < second){
			second = a[i] ;  
		}
	}
	printf("%d %d",first , second) ;  
} 

int main(){ 
    solve() ; 
}

