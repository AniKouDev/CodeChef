#include <iostream>
using namespace std;

int main(){
    int x,y,n;
    cin >> x >> y >> n;
    int k = abs(x-y);
    cout << ((k<=n)?"Yes":"No");
}