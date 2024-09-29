#include <iostream>
#include <cmath>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        float ls, b;
        cin >> b >> ls;
        cout << sqrt(ls*ls - b*b) << " " << sqrt(ls*ls + b*b);
        breakline;
    }
}