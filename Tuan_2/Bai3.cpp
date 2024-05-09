#include<bits/stdc++.h>
using namespace std;
int main(){
	int n; cin >> n;
	int m = 1;
	int l = n - 1;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= l; j++) cout << " ";
		for(int j = 1; j <= m; j++) cout << "*";
		for(int j = 1; j <= l; j++) cout << " ";
		if(i==n) return 1;
		else cout << endl;
		m+=2;
		l--;
		
	}
} 
