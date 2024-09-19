#include <iostream>
using namespace std;

#define breakline cout<<endl
#define ll long long

ll getRes(int n){
    if(n>=12)
        return getRes(n/2)+getRes(n/3)+getRes(n/4);
    else
        return n;
}

int main(){
    ll n;
    while(cin>>n){
        cout << getRes(n);
        breakline;
    }
}