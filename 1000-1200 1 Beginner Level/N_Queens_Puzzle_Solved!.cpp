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
        double result = pow((0.143*n), n);
        if(result-floor(result) < 0.5)
            cout << floor(result);
        else
            cout << ceil(result);
        breakline;
    }
}