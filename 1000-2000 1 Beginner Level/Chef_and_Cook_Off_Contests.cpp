#include <iostream>
#include <string>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int cake = 0, simple = 0, easy = 0, emed  = 0, medh = 0;
        for(int i = 0; i < n; i++){
            string help;
            cin >> help;
            if(help == "cakewalk")
                cake++;
            else if(help == "simple")
                simple++;
            else if(help == "easy")
                easy++;
            else if(help == "easy-medium" || help == "medium")
                emed++;
            else 
                medh++;
        }
        if(cake>=1 && simple>=1 && easy>=1 && emed>=1 && medh>=1)
            cout << "Yes";
        else
            cout << "No";
        breakline;
    }
}