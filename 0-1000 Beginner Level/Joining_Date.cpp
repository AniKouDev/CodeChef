#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        int dates = ((n%5 == 0)?n/5:n/5+1);
        int kbelong = ((k%5 == 0)?k/5-1:k/5);
        cout << dates-kbelong-1;
        breakline;
    }
}