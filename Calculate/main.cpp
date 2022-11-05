#include <iostream>
int Max(int a, int b){
	int max = 0;
	if ( a > b ){
		max = a;
	}
	else {
		max = b;
	}

	return max;
}	
	
int Min(int a, int b){
	int min = 0;
	if ( a < b ){
		min = a;
	}
	else {
		min = b;
	}

	return min;
}
	
int main(){
int x, y, z, t ;

std::cout<< "enter a number: " << std::endl;
std::cin >> x;
y = abs(x);
std::cout<<"| "<< x <<" | = "<< y << std::endl;
y = abs(1-abs(1+x));
std::cout<< "| 1 - | 1 + ("<< x << " )| = " << y << std::endl;
std::cout << "enter an other number: "<< std::endl;
std::cin >> t;
z = Max(x,t);
std::cout<< "max of "<< x << " and " << t << " = "<< z <<std::endl;
z = Max(z,y);
std::cout<< "max of "<< x << " and "<< t << " and "<< y << " = "<< z << std::endl;
z = Min(x,Max(y,t));
std::cout << "min ( "<< x <<" max ( " << y << " , "<< t<< ")) = "<< z << std::endl;

}
