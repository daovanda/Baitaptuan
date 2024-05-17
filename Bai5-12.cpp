#include<bits/stdc++.h>
using namespace std;
int nguyen_to(int n){
	if(n<2) return 0;
	for(int i = 2; i <= sqrt(n); i++){
		if(n%i==0) return 0; 
	} 
	return 1; 
} 
int uoc_chung(int a, int b){
	if(b==0) return a;
	else return uoc_chung(b, a%b); 
} 

void printf_sao(int n){
	for(int i = 0; i < n; i++) cout << "*"; 
} 
void printf_space(int m){
	for(int i = 0; i < m; i++) cout << " "; 
} 
void printf_tamgiac(int n){
	for(int i = 0; i < n; i++){
		printf_space((n-i-1)); 
		printf_sao(2*i + 1);
		printf_space((n-i-1)); 
		if(i < n - 1) cout << endl; 
	} 
} 
int ngau_nhien(int n){
	return rand()%n; 
} 
string nhi_phan(int n){
	string s="";
	int i;
	while(n){
		s=to_string(n%2) + s;
		n = n/2; 
	} 
	return s; 
} 
int thap_phan(string s){
	int n; 
	int f = 0; 
	for(int i = (int) s.size() - 1; i >= 0; i--){
		n += int(s[i]-'0')*pow(2,f);
		f++; 
	} 
	return n; 
} 
int main(){
	string s; cin >> s;
	cout << thap_phan(s); 
	return 0; 
} 
