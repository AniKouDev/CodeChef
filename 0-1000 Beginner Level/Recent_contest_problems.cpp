#include <iostream>
#include <string>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int word1 = 0, word2 = 0;
        while(n--){
            string s;
            cin >> s;
            if(s=="START38")
                word1++;
            else 
                word2++;
        }
        cout << word1 << " " << word2 << endl;
    }
}