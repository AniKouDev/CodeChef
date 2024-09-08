#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int count1 = 0, count2 = 0;
        for(int i = 0 ; i < 10; i++){
            int x;
            cin >> x;
            if(i%2 == 0)
                count2+=x;
            else
                count1+=x;
        }
        if(count1 == count2)
            cout << 0;
        else if(count1 < count2)
            cout << 1;
        else 
            cout << 2;
        cout << endl;
    }
}