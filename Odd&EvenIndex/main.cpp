#include <iostream>
#include <vector>
using namespace std;

vector<int> real(vector<int> n){
	vector<int> res;
	for(int i = 0; i < n.size()-1; i+=2){
		res.push_back(n[i]);
	}
	for (int j = 1; j < n.size() ; j+=2){
		res.push_back(n[j]);
	}

	return res;
}

void printvec (vector<int> a){
	for(int i = 0 ; i < a.size(); i++){
		cout << a[i] << ",";
	}
}

int main(){
	int elm;
	vector<int> n;
	for (int i = 1; i <= 20; i++){
		cout << "Enter " << i <<" element: ";
		cin >> elm;
		n.push_back(elm);
	}
	printvec(real(n));
}
