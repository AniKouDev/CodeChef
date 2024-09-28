#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int check = 0;
        for(int i = 0; i < 3; i++){
            int x;
            cin >> x;
            if(x==0)
                check++;
        }
        if(check>1)
            cout << "Water filling time";
        else
            cout << "Not now";
        breakline;
    }
}