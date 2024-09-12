#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int p, l;
        cin >> p >> l;
        if(p/l*100 >= 75)
            cout << "Yes";
        else
            cout << "No";
        breakline;
    }
}