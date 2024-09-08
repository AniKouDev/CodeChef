#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int m, h;
        cin >> m >> h;
        int bmi = m/(h*h);
        if(bmi<=18)
            cout << 1;
        else if(bmi<25)
            cout << 2;
        else if(bmi<30)
            cout << 3;
        else
            cout << 4;
        cout << endl;
    }   
}