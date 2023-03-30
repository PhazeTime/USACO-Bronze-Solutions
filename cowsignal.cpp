#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define eb emblace_back
using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;
using pii = pair<int,int>;
using pll = pair<ll,ll>;
//const int N;
void solve(){
	
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	ifstream cin("cowsignal.in");
	ofstream cout("cowsignal.out");
	int m,n,k; cin>>m>>n>>k;
	string s;
	while(m--){
		cin>>s;
		for(int i = 0; i<k; i++){
			for(int j = 0; j<s.size(); j++){
				for(int l = 0; l<k; l++){
					cout<<s[j];
				}
			}
			cout<<"\n";
		}
	}
	
	
	
	
	
}