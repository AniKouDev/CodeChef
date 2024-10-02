#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int attA=0, defA=0, attP=0, defP=0;
        for(int i = 0; i < n; i++){
            int k;
            cin >> k;
            attA += k;
        }
        for(int i = 0; i < n; i++){
            int k;
            cin >> k;
            defA += k;
        }
        for(int i = 0; i < n; i++){
            int k;
            cin >> k;
            attP += k;
        }
        for(int i = 0; i < n; i++){
            int k;
            cin >> k;
            defP += k;
        }
        if(attA>attP && defA>defP)
            cout << "A";
        else if(attP>attA && defP>defA)
            cout << "P";
        else
            cout << "DRAW";
        breakline;
    }
}