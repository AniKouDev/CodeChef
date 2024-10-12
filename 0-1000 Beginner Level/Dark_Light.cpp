#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        if(k == 0){
            if((n%4)!=0)
                cout << "On";
            else
                cout << "Off";
        }
        else{
            if(n%4 == 0)
                cout << "On";
            else
                cout << "Ambiguous";
        }
        breakline;
    }
}