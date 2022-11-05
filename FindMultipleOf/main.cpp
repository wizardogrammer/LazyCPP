#include<iostream>
#include<vector>

std::vector<int> MultipleOf(int N, int P, std::vector<int> ARR){
	std::vector<int> result;
	for(int i = 0; i< N; i++){
		if(ARR[i] % P == 0) result.push_back(ARR[i]);
		else continue;
	}
	return result;

}

void PrintResult(std::vector<int> n){
	for(int i=0; i < n.size(); i++ ){
		std::cout<< n[i] << ",";
	}
}


int main(){
	int n;	// range of array
	int p;	// number which should be multipled by elements of array
	std::cout<<"Enter the range of arr: ";
	std::cin>>n;
	std::cout<<"\nEnter a number whcih you want to be multiple of arr argument P = ";
	std::cin>>p;
	std::vector<int>arr(n);
	// creating array by user
	for(int i = 0; i < n; i++){
		std::cout<<"Enter number of array a("<< i + 1 <<"):";
		std::cin>>arr[i];
	}
	PrintResult(MultipleOf(n,p,arr));
}

