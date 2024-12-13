#include <iostream>
#include <string>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        int arr[3] = {0};
        for(int i = 0; i < n; i++){
            if(s[i] == 'R')
                arr[0]++;
            else if(s[i] == 'G')
                arr[1]++;
            else
                arr[2]++;
        }
        cout << n - max(arr[0], max(arr[1],arr[2]));
        breakline;
    }
}