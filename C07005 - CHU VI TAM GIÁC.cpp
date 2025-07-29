#include<stdio.h>
#include<math.h>

float dd(float x1, float y1, float x2, float y2){
    return sqrt((x1 - x2)*(x1 - x2) + (y1 - y2)*(y1 - y2));
}

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        float x1, y1, x2, y2, x3, y3 ;
        scanf("%f %f %f %f %f %f", &x1, &y1, &x2, &y2, &x3, &y3) ;

        float ab = dd(x1, y1, x2, y2);
        float bc = dd(x2, y2, x3, y3);
        float ca = dd(x3, y3, x1, y1);

        if(ab + bc > ca && ab + ca > bc && bc + ca > ab){
            float p = ab + bc + ca ;
            printf("%.3f\n", p) ;
        } else {
            printf("INVALID\n");
        }
    }
}
