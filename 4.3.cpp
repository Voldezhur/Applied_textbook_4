// Вычисление функции рекурсивно


#include <iostream>
#include <math.h>

using std::cin, std::cout;


double F(double x){
    return 1 - x + sin(x) - log(1 + x);
}

double Rec(double R, double L, double B){
    if(R - L < 0.0001){
        return B;
    }

    B = (L + R) / 2;

    if(F(B) * F(R) > 0){
        return Rec(B, L, B);
    }
    
    else{
        return Rec(R, B, B);
    }
}


int main(){
    double B, L, R;
    int t = 0;
    
    B = 0;
    L = 0;
    R = 2;

    cout << Rec(R, L, B);
}