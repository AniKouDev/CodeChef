#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int a, b, c;
        cin >> a >> b >> c;
        if(a<51 && b<51 && c<51)
            cout << "nota";
        else if(a>50)
            cout << "A";
        else if(b>50)
            cout << "B";
        else
            cout << "C";
        breakline;
    }
}