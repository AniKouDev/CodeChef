#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int zeros = 0, ones = 0;
        for(int i = 0; i < n; i++){
            char ch;
            cin >> ch;
            if(ch == '0')
                zeros++;
            else 
                ones++;
        }
        if(ones == 0)
            cout << 0;
        else if (zeros == 0)
            cout << 1;
        else if(zeros < ones)
            cout << 1 + zeros;
        else
            cout << ones;
        breakline;
    }
}