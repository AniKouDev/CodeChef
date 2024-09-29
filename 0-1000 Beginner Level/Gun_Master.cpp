#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, d;
        cin >> n >> d;
        int count = 0;
        int flag = 0;
        while(n){
            int k;
            cin >> k;
            n--;
            while(k<=d && n){
                cin >> k;
                n--;
            }
            if(!n){
                if(k>d)
                    count++;
                break;
            } 
            count++;
            while(k>d && n){
                cin >> k;
                n--;
            }
            if(!n){
                if(k<=d)
                    count++;
                break;
            } 
            count++;
        }
        cout << count;
        breakline;
    }
}