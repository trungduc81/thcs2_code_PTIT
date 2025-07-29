#include<stdio.h>
#include<math.h>

double dd(double x1, double y1, double x2, double y2){
    return sqrt((x1 - x2)*(x1 - x2) + (y1 - y2)*(y1 - y2));
}

double s(double a, double b, double c){
    double p = (a + b + c) / 2;
    return sqrt(p * (p - a) * (p - b) * (p - c));
}

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        double x1, y1, x2, y2, x3, y3;
        scanf("%lf %lf %lf %lf %lf %lf", &x1, &y1, &x2, &y2, &x3, &y3);
        double a = dd(x1, y1, x2, y2);
        double b = dd(x2, y2, x3, y3);
        double c = dd(x3, y3, x1, y1);

        if(a + b > c && a + c > b && b + c > a){
            double dtich = s(a, b, c);
            printf("%.2lf\n", dtich);
        } else {
            printf("INVALID\n");
        }
    }
}
