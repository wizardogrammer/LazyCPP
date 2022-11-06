#include<iostream>
#include<vector>
#include<cmath>


// square of integers in a list function
std::vector<int> squareOfNumber (std::vector<int> Arr, int N){
	std::vector<int> result{};
	for(int i = 0; i < Arr.size(); i++){
		result.push_back(std::pow(Arr[i],2));
	}

	return result;
}

// print a list function
void printArray (std::vector<int> a){
	for(int i = 0; i < a.size(); i++){
		std::cout<<a[i]<<",";
	}
}

int main(){
	int n;  //range of array.
	std::cout<<"Enter the range of array n = ";
	std::cin >> n;
	std::vector<int> arr(n);
	// creat a list by user.
	for(int i = 0; i < n; i++){
		std::cout<<"Enter a(" << i + 1 << ") = " ;
		std::cin>> arr[i];
	}

	printArray (squareOfNumber(arr,n));	// call square and print function

}

