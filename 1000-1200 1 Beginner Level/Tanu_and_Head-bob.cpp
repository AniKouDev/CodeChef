#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int k;
        cin >> k;
        int n = 0, y = 0, i = 0;
        for(int j = 0; j < k; j++){
            char ch;
            cin >> ch;
            if(ch == 'N')
                n++;
            else if(ch == 'I')
                i++;
            else
                y++;
        }
        if(y==0 && i!=0)
            cout << "INDIAN";
        else if(y!=0 && i==0)
            cout << "NOT INDIAN";
        else
            cout << "NOT SURE";
        breakline;
    }
}