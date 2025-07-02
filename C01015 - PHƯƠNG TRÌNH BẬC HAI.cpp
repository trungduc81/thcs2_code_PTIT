#include<stdio.h>
#include<math.h>

int main() {
    double a , b , c ;
	scanf("%lf %lf %lf",&a,&b,&c) ; 
	double delta = b*b - 4 * a * c ; 
	if(delta < 0){
		printf("NO") ; 
	} 
	else {
		double no1 = (-b + sqrt(delta))/2/a ; 
		double no2 = (-b - sqrt(delta))/2/a ; 
		if(no1 == no2) printf("%.2lf",no1) ; 
		else 
		printf("%.2lf %.2lf",no1,no2) ; 
	}
    
}

