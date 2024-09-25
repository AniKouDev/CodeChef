#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int x;
        cin >> x;
        if(x >= 7)
            cout << "HOT";
        else if(x >= 4)
            cout << "MEDIUM";
        else
            cout << "MILD";
        breakline;
    }
}