#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int count = 0;
        for(int i = 0; i < n; i++){
            char k;
            cin >> k;
            if(k=='1')
                count++;
        }
        count = count + (120 - n);
        float per = (count * 100)/120;
        cout << ((per>=75)?"YES":"NO");
        breakline;
    }
}