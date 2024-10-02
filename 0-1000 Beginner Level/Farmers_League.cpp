#include <iostream>
#include <cmath>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int one = (n-1)*3;
        int two = (n-2)-((n-2)/2);
        cout << one - two*3;
        breakline;
    }
}