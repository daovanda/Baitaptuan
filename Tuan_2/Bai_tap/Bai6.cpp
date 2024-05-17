#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    int a[n+1][n+1];
    int f = 1;
    for(int i = 1; i <= n; i++){
    	f = 1;
        for(int j = 1; j <= n; j++){
            if(j <= n - i + 1) a[i][j] = j+i-1;
            else{
            	a[i][j]=f;
            	f++;
			}
        }
    }
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++) cout << a[i][j] << " ";
        cout << endl;
    }
}      
