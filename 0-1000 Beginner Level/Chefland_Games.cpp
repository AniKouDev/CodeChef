#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int a, check = 0;
        for(int i = 0; i < 4; i++){
            cin >> a;
            if(a)
                check++;
        }
        if(check!=0)
            cout << "OUT";
        else
            cout << "IN";
        breakline;
    }
}