#include <iostream>
#include <string>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        int Bar, Mal, Rea, Eib;
        for(int i = 0; i < 4; i++){
            cin >> s;
            if(s=="Barcelona")
                cin >> Bar;
            else if(s == "Malaga")
                cin >> Mal;
            else if(s == "RealMadrid")
                cin >> Rea;
            else
                cin >> Eib;
        }
        if(Bar>Eib && Mal>Rea)
            cout << "Barcelona";
        else
            cout << "RealMadrid";
        breakline;
        
    }
}