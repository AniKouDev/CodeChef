#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        long long n, p;
        cin >> n >> p;
        int cake = 0, hard = 0;
        for(int i = 0; i < n; i++){
            long long help;
            cin >> help;
            if(help <= (p/10)){
                hard++;
            }
            else if(help >= (p/2)){
                cake++;
            }
        }
        if(hard == 2 && cake == 1)
            cout << "yes";
        else
            cout << "no";
        breakline;
    }
}