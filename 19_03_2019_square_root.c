#include <stdio.h>
double square_root(double S, int n);
int main()
{
    int n = 11;
    double S = 125348;
    printf("%f\n",square_root(S, n));
}
double square_root(double S, int n){
    int i = 1;
    double x=S/2;
    while(i <= n){
    x = (x + S/x) / 2;
    i++;
    }
    return x;
}
