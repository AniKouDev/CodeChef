#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        long long pos = 0, neg = 0;
        for(int i = 0; i < n; i++){
            int help;
            cin >> help;
            if(help > 0)
                pos++;
            else if(help < 0)
                neg++;
        }
        cout << ((pos-1)*(pos)/2) + ((neg-1)*(neg)/2);
        breakline;
    }
}