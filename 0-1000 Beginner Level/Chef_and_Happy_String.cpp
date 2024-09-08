#include <iostream>
#include <string>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int count = 0;
        for(char ch : s){
            if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
                count++;
            else
                count = 0;
            if(count>2)
                break;
        }
        if(count>2)
            cout << "Happy";
        else
            cout << "Sad";
        cout << endl;
    }
}