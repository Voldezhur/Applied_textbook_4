// функция Дейкстры


#include <iostream>

using namespace std;


int Dijkstra(int n){
    if(n == 1) return 1;

    else if(n % 2 == 0) return Dijkstra(n / 2);

    else return Dijkstra(n / 2) + Dijkstra(n / 2 + 1);
}


int main(){
    int a = 0;
    cin >> a;

    cout << Dijkstra(a);
}