#include<bits/stdc++.h>
using namespace std;
int main(){
	int n; cin >> n;
	int f = n;
	while(n>=0){
		cin >> n;
		if(f!=n) cout << f;
		if(n<0){
			cout << n;
			break;
		}
		
		f = n;
	}
}
