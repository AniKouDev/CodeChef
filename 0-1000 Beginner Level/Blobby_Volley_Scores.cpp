#include <iostream>
#include <string>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        int turn = 0;
        char chance = 'A';
        int arr[2]={0};
        for(int i = 0; i < n; i++){
            if(s[i] == chance+turn){
                arr[turn]++;
            }
            else{
                turn^=1;
            }
        }
        cout << arr[0] << " " << arr[1] << endl;
    }
}