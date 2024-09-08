#include <iostream>
using namespace std;

int main(){
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    int messi = a*2 + b;
    int ronaldo = c*2 + d;
    if(messi > ronaldo)
        cout << "Messi";
    else if(messi < ronaldo)
        cout << "Ronaldo";
    else 
        cout << "Equal";
}