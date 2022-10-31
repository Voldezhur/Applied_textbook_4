// Рекурсивное сложение


#include <iostream>

using namespace std;

int sum = 0;

int digitSum(int a){

    if(!a) return sum;

    string num = to_string(a);
    sum += (num[0] - '0');

    if (num.size() == 1){
        num = "0";
    }

    else{
        num = num.substr(1, num.size() - 1);
    }


    a = stoi(num);

    return digitSum(a);
}   


int main(){
    int a;
    cin >> a;

    cout << digitSum(a);
}