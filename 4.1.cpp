// НОД рекурсией


#include <iostream>

using namespace std;


int NOD(int a, int b){
    if(a == b){
        return a;
    }

    else if(a > b){
        return NOD(a - b, b);
    }

    else{
        return NOD(a, b - a);
    }
}


int main(){
    int x, y;
    cin >> x >> y;

    cout << NOD(x, y);
}