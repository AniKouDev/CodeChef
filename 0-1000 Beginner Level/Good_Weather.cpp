#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int week = 7, count0 = 0, count1 = 0;
        while(week--){
            int x;
            cin >> x;
            if((x&1) == 1)
                count1++;
            else
                count0++;
        }
        if(count1 > count0)
            cout << "Yes" << endl;
        else 
            cout << "No" << endl;
    }
}