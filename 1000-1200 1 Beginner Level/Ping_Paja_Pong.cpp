#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int a, b, c;
        cin >> a >> b >> c;
        if(((int)((a+b)/c)) % 2)
            cout << "Paja";
        else
            cout << "Chef";
        breakline;
    }
}