#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        float n, x, y, a, b;
        cin >> n >> x >> y >> a >> b;
        float petrol = (n*x)/a;
        float disel = (n*y)/b;
        if(petrol>disel)
            cout << "DIESEL";
        else if(petrol==disel)
            cout << "ANY";
        else
            cout << "PETROL";
        breakline;
    }
}