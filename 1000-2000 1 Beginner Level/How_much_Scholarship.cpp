#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    if(t>100)
        cout << 0;
    else if(t>50)
        cout << 50;
    else
        cout << 100;
}