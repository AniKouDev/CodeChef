#include <iostream>
using namespace std;

int main(){
    int w, h;
    cin >> w >> h;
    if(w>=60 && h<=130)
        cout << "Yes";
    else
        cout << "No";
}