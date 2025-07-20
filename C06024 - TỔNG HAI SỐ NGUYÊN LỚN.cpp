#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>

void reverse(char a[]){
	int l = 0 , r = strlen(a) - 1 ; 
	while(l<r){
		char tmp = a[l] ; 
		a[l] = a[r] ; 
		a[r] = tmp ; 
		l++ ; 
		r-- ; 
	}
}

void solve(){
	char a[505] , b[505] ; 
	scanf("%s %s",a,b) ; 
	reverse(a) ; reverse(b) ; 
	int len_a = strlen(a) , len_b = strlen(b) ; 
	int len = len_a > len_b ? len_a : len_b ; // neu len_a > len_b thi len = len_a 
	char res[510] ; 
	int nho = 0 , idx = 0 ; 
	for(int i = 0 ; i < len ; i++){
		int a1 , b1 ; 
		if(i<len_a)  a1 = a[i] - '0' ; 
		else a1 = 0 ; 
		if(i<len_b) b1 = b[i] - '0' ; 
		else b1 = 0 ; 
		
		int sum = a1 + b1 + nho ; 
		res[idx++] = sum%10 + '0' ; 
		nho = sum/ 10 ; 
	}
	if(nho) res[idx++] = nho + '0' ; 
	res[idx] = '\0' ; 
	
	reverse(res) ; 
	printf("%s\n",res) ; 
}

int main(){
	int t ; scanf("%d",&t) ; 
	while(t--){
		solve() ; 
	}
}

