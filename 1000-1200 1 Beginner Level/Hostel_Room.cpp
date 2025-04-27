#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int a, b;
        cin >> a >> b;
        int max = b;
        for(int i = 0; i < a; i++){
            int help;
            cin >> help;
            b += help;
            if(max < b)
                max = b;
        }
        cout << max;
        breakline;
    }
}