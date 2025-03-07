#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;

	for(int i = n+1; ; i++){
		string y = to_string(i);

		unordered_set <char> year(y.begin(), y.end());

		if(year.size() == 4){
			cout<<i;
			break;
		} 
			

	}


}
