#include <iostream>
#include <string>
#include <set>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        set<int> s = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25};
        int arr[26];
        for(int i = 0; i < 26; i++){
            int help;
            cin >> arr[i];
        }
        string s1;
        cin >> s1;
        for(int i = 0; i < s1.size(); i++){
            s.erase(s1[i]-'a');
        }
        int total = 0;
        for(int i : s){
            total += arr[i];
        }
        cout << total;
        breakline;

    }
}