#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int a, b, max = -1;
        for(int i = 0; i < 3; i++){
            cin >> a >> b;
            a = a+b;
            if(max < a)
                max = a;
        }
        cout << max;
        breakline;
    }
}