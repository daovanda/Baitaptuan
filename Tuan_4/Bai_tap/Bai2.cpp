#include<bits/stdc++.h>
using namespace std;
int main(){
	string s1, s2;
	cin >> s1;
	s2 = s1;
	reverse(s2.begin(), s2.end());
	if(s2 == s1) cout << "yes";
	else cout << "no";
	return 0;
	
}
