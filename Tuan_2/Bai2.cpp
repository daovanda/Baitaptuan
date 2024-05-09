#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	int l = 5;
	int r = 0; 
	for(int i = 5;i >=1 ; i--){
		for(int j = 1; j <= r;j++) cout << " "; 
		for(int j = 1; j <= l; j++) cout << "*";
		cout << endl;
		l--;
		r++; 
	}
	return 1; 
}
