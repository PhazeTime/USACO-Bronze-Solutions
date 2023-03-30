#include <iostream>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    long long n,t;
    cin>>n>>t;
    long long hay = 0;
    long long d[n];
    long long b[n];
    for(int i = 0; i<n; i++){
        cin>>d[i]>>b[i];'\n';
        for(int j = 1; j<=d[n]; j++){
            hay++;
        }
    }
    cout<<hay;
}


    
    

 

