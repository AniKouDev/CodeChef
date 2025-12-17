#include <iostream>
using namespace std;

int main(){
    string s;
    cin >> s;
    if((s=="cat" || s=="cta" || s=="act" || s=="atc" || s=="tac" || s=="tca")){
        cout << "Yes";
    }
    else
        cout << "No";
}