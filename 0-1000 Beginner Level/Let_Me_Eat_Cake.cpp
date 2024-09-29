#include <iostream>
#include <cmath>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        float a, b;
        cin >> a >> b;
        int sum = 0, h;
        while(a!=b){
            if(a>b){
                h = ceil((float)(a/2));
                a = (int)a/2;
            }
            else{
                h = ceil((float)(b/2));
                b = (int)b/2;
            }
            sum += h;
        }
        cout << sum;
        breakline;
    }
}