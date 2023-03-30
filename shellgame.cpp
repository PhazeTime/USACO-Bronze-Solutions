#include <bits/stdc++.h>
using namespace std;
//const int N;
#define pb push_back
#define eb emblace_back
using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;
using pii = pair<int,int>;
using pll = pair<ll,ll>;
void solve(){
	
}
int main(){
     
	ios::sync_with_stdio(false);
	cin.tie(0);
	ifstream cin("shell.in");
	ofstream cout("shell.out");
	int n; cin>>n;
	vi shell_at_pos(3);
	for(int i = 0; i<n; i++){
		shell_at_pos[i] = i;
	}
	vi counter(3);
	for(int i = 0; i<n; i++){
		int a,b,g; cin>>a>>b>>g;
		a--; b--; g--;
		swap(shell_at_pos[a], shell_at_pos[b]);
		counter[shell_at_pos[g]]++;
	}
	cout<<max({counter[0],counter[1],counter[2]});
	
	
	
	
}