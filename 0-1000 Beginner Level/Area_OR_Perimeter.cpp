#include <iostream>
using namespace std;

int main(){
    int l, b;
    cin >> l >> b;
    int area = l*b;
    int peri = 2*(l+b);
    if(area<peri)
        cout << "Peri" << endl << peri;
    else if (area==peri)
        cout << "Eq" << endl << peri;
    else
        cout << "Area" << endl << area;
}