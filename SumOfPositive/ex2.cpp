#include <iostream>
#include <vector>


int main(){
    std::vector<int> real ;
    int n;
    double elm;
    double res = 0;
    std:: cout << "Enter the number of element in the series: ";
    std::cin >> n;
    for(int i = 1; i <= n; i++){
        std::cout << "Enter the element of the serie: ";
        std::cin >> elm;
        real.push_back(elm);
    }

    for(int j = 0 ; j < real.size(); j++){
        if(real[j] > 0){
            res = res + real[j];
            //std::cout << real[j] << " + " <<  <<" = " << real[j] << std::endl;
        }

    }

    std::cout << "final solution = " << res;
}
