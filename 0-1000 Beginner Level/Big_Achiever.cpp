#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int max = 0;
        for(int i = 0; i < n; i++){
            int help;
            cin >> help;
            if(help > max){
                max = help;
                cout << "1 ";
            }
            else    
                cout << "0 ";
        }
        breakline;
    }
}