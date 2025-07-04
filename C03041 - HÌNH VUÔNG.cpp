#include<stdio.h>
#include<math.h>
#include<string.h>
#define ll long long

void solve(){
	int a , b , c , d ; 
	scanf("%d %d %d %d",&a,&b,&c,&d) ; 
	if(abs(c-a)==abs(d-b)) printf("YES\n") ; 
	else printf("NO\n") ;  
	
}

int main(){
	int t ; scanf("%d",&t) ; 
	while(t--){
		solve() ; 
	}
	
}
 
