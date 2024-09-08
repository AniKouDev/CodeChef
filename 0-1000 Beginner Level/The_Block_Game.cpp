#include <iostream>
#include <string>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        auto start = s.begin();
        auto end = s.end();
        int flag = 0;
        while(start!=end && start!=--end){
            if(*start!=*end){
                flag = 1;
                break;
            }
            start++;
        }
        if(!flag)
            cout << "wins";
        else
            cout << "loses";
        cout << endl;
    }
}