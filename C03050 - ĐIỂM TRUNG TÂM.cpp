#include<stdio.h>
#include<math.h>
#include<string.h>
#define ll long long


int main(){
	int n ; scanf("%d",&n) ; 
	int a[2*n-2] ; 
	int cnt1 = 1 , cnt2 = 1 ; 
	for(int i = 0 ; i < 2*n - 2 ; i++){
		scanf("%d",&a[i]) ; 
	}
	for(int i = 2 ; i < 2*n - 2 ; i++){
		if(a[i] ==a[0]) cnt1++ ; 
		if(a[i] == a[1]) cnt2++ ; 
	}
	if(cnt1==n-1 || cnt2 == n-1) printf("Yes\n") ; 
	else printf("No\n") ; 
}
 
