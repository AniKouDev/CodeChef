#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        for(int i = 0; i < n; i++){
            char help;
            cin >> help;
            if(help == '1')
                cout << '0';
            else
                cout << '1';
        }
        breakline;
    }
}