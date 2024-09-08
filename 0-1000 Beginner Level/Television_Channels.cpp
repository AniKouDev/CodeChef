#include <iostream>
using namespace std;

#define breakline cout<<endl;

int main(){
    int x;
    cin >> x;
    if(x%2 == 0)
        cout << x/2;
    else    
        cout << x/2 + 1;
}