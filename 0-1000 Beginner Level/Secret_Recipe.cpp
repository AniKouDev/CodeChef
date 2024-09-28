#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int a, b, c, d, e;
        cin >> a >> b >> c >> d >> e;
        float chef = abs(a-c);
        float kefa = abs(b-c);
        chef = chef/d;
        kefa = kefa/e;
        if(chef<kefa)
            cout << "CHEF";
        else if(chef == kefa)
            cout << "DRAW";
        else
            cout << "KEFA";
        breakline;
    }
}