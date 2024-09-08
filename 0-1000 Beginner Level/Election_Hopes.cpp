#include <iostream>
using namespace std;

#define breakline cout<<endl;

int main(){
    int x,y;
    cin >> x >> y;
    if(x>=2*y)
        cout << "Yes";
    else
        cout << "No";
    breakline;
}