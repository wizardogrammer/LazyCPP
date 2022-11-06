#include<iostream>
#include<vector>
#include<algorithm>

std::vector<int> ascendingOrder(std::vector<int> arr, int N){
    std::sort(arr.begin(), arr.end());
    return arr;
}

void printArray(std::vector<int> a){
    for(int i = 0; i < a.size(); i++){
        std::cout<< a[i] << ",";
    }
}

int main(){
    int n;
    std::cout<<"enter the range of array n = ";
    std::cin >> n;
    std::vector<int> arr(n);
    for(int i = 0; i < n ; i++){
        std::cout<<"Enter a("<< i+1 <<") : ";
        std::cin>> arr[i];
    }

    printArray(ascendingOrder(arr,n));

}

