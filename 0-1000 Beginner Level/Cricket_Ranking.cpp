#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int arr[6];
        for(int i = 0; i < 6; i++){
            cin >> arr[i];
        }
        int countA = 0, countB = 0;
        for(int i = 0; i < 3; i++){
            if(arr[i] > arr[i+3])
                countA++;
            else
                countB++;
        }
        if(countA > countB)
            cout << "A";
        else
            cout << "B";
        cout << endl;
    }
}