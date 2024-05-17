#include<bits/stdc++.h>
using namespace std;

using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    char a[n+2][m+2];
    int b[n + 2][m + 2] = {0};
    int dx[8]={0, 0, -1, -1, -1, 1, 1, 1};
    int dy[8]={-1, 1, -1, 0, 1, -1, 0, 1};
    for(int i = 0; i < n + 2; i++){
    	for(int j = 0; j < m + 2; j++) a[i][j]= '.';
	}
	for(int i = 1; i < n + 1; i++){
		for(int j = 1; j < m + 1; j++) cin >> a[i][j];
	}
	for(int i = 1; i < n + 1; i++){
		for(int j = 1; j < m + 1; j++){
			int count = 0;
			for(int k = 0; k < 8; k++){
				int x = i + dx[k];
				int y = j + dy[k];
				if(a[x][y] == '*') count ++;
			}
			b[i][j] = count;
			cout << count << " ";
		}
		cout << endl;
	}
	return 0;
	

}
