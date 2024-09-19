#include <iostream>
#include <cmath>
using namespace std;

#define breakline cout<<endl 

int main(){
    int t;
    cin >> t;
    while(t--){
        int a, b;
        cin >> a >> b;
        int sum = 0;
        for(int i = 0; i < b; i++){
            sum += pow(2,a--);
        }
        sum -= (2*(pow(2,a)-1));
        cout << sum;
        breakline;
    }
}