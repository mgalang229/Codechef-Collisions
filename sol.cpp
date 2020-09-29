#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int t;
	cin >> t;
	while(t--) {
		int n, m;
		cin >> n >> m;
		char a[n][m];
		for(int i=0; i<n; ++i)
			for(int j=0; j<m; ++j)
				cin >> a[i][j];
		int cnt=0;
		for(int i=0; i<n; ++i)
			for(int j=i+1; j<n; ++j)
				for(int k=0; k<m; ++k)
					if(a[i][k]=='1'&&a[j][k]=='1')
						cnt++;
		cout << cnt << "\n";
	}
}
