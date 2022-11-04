#include <iostream>

void ProductOfIndices(const long* vec, int &N){ 
	long multiplication = 1;
	for(int i = 0; i < N; i++){
		multiplication =* vec[i];
		std::cout << multiplication <<",";
	}
}

int main(){
	int n;   //variable for getting number from user for size of array
	std::cout << " Enter the range of array : " ;
	std::cin >> n;
	long* arr = new long(n);	// dynamic array
	for(int i = 0; i < n; i++){
		std::cout<< " enter a number b(" << i + 1 << "): ";
		std::cin >> arr[i];
	}

	ProductOfIndices(arr,n);
}	

		


