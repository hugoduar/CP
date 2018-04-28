using namespace std;
#include <bits/stdc++.h>

int table[1000007];
void buildfailure(string s){
	int  i = 1;
	table[0] = 0;
	while( i < s.length()){
		int j = table[i - 1];
		while( j > 0 && s[i] != s[j]) j = table[j-1];
		if(s[i] == s[j]) j++;
		table[i] = j;
		i++;
	}
}
//Search x in s
int search(string s, string x){
	buildfailure(x);
	int j = 0;
	int i = 0;
	while(i  < s.length()){
		if( s[i] == x[j]){
			i++;
			j++;   
		}
		if( j == x.length()){
			//j = table[j-1];
			return i-j;
		} else if( i < s.length() && s[i] != x[j]){
			
			if( j!= 0){
				
				j = table[j-1];
			}else{
				
				i++;
			}   
		}
	}
	return -1;
}
int main() {
	ios_base::sync_with_stdio(0);cin.tie(NULL);
	//Solution
	string a, b;
	cin >> a >> b;
	cout << search(a, b) << endl;
	   
	   
	return 0;
}

