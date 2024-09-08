#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int help = 4;
        int max = 0;
        int sum = 0;
        while(help--){
            int a;
            cin >> a;
            sum+=a;
            if(max<a)
                max = a;
        }
        sum-=max;
        if(max > sum)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
}