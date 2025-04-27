#include <iostream>
#include <string>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        string s, help = "ADVITIYA";
        cin >> s;
        int sum = 0;
        for(int i = 0; i < 8; i++){
            if(s[i] > help[i]){
                sum += ('Z' - s[i]);
                sum += (help[i] - 'A') + 1;
            }
            else if(s[i] < help[i]){
                sum += (help[i] - s[i]);
            }
        }
        cout << sum;
        breakline;
    }
}