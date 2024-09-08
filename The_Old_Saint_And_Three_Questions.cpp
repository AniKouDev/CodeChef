#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int count = 0;
        for(int i = 0; i < 3; i++){
            int x;
            cin >> x;
            if(x)
                count++;
        }
        int check = 0;
        for(int i = 0; i < 3; i++){
            int x;
            cin >> x;
            if(x)
                check++;
        }
        if(check == count)
            cout << "Pass";
        else 
            cout << "Fail";
        cout << endl;
    }
}