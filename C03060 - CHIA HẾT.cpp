#include<stdio.h>
#include<math.h>
#include<string.h>
#define ll long long
#define MAX 1000005

void solve(){
	int n , k ; scanf("%d %d",&n,&k) ; 
	int cnt = 0 ; 
	for(int i = 1 ; i <= n ; i++){
		int m = i ; 
		while(m%2==0){
			m /= 2 ; 
			cnt++ ; 
			if(cnt==k) break ; 
		}
		if(cnt==k) break ;
	}
	if(cnt==k) printf("Yes") ; 
	else printf("No") ; 	  
}

int main(){
     solve() ; 
}
