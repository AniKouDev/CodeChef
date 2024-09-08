#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int count = 0;
    while(n!=0){
        n/=10;
        count++;
    }
    switch (count)
    {
    case 1: cout << 1 << endl;
        break;
    case 2: cout << 2 << endl;
        break;
    case 3: cout << 3 << endl;
        break;
    default: cout << "More than 3 digits" << endl;
        break;
    }
}