#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int x;
        cin >> x;
        int count = 0;
        while(x!=50){
            if(x>50)
                x-=3;
            else
                x+=2;
            count++;
        }
        cout << count << endl;
    }
}