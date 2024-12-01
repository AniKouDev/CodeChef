#include <iostream>
#include <string>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, a, b;
        cin >> n >> a >> b;
        string s;
        cin >> s;
        int ones = 0, zeros = 0;
        for(int i = 0; i < n; i++){
            if(s[i] == '0')
                zeros++;
            else
                ones++;
        }
        cout << zeros*a + ones*b;
        breakline;
    }
}