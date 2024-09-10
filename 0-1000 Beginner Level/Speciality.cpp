#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int x, y, z;
        cin >> x >> y >> z;
        if(x>y && x>z)
            cout << "Setter";
        else if(y>x && y>z)
            cout << "Tester";
        else
            cout << "Editorialist";
        breakline;
    }
}