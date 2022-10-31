// Рекурсивный Ханойской башни


#include <iostream>

using namespace std;

// Алгоритм переноса колец с колышка from на колышек to, используя колышек buf как вспомогательный буфер
void move(int q, int from, int to, int buf){
    if(q != 0){
        move(q - 1, from, buf, to);

        cout << "ring " << q << " move from " << from << " to " << to << '\n';

        move(q - 1, buf, to, from);
    }
}


int main(){
    int q;
    cin >> q;

    move(q, 1, 3, 2);
}