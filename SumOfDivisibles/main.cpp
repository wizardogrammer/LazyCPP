#include <iostream>
#include <vector>

void sumDivisibles(const std::vector<int> &nums, unsigned &N) {
  int summation{}, element{};
  std::string output_str{};

  for (int i = 0; i < N; i++) {
    element = nums[i];
    if (element % 5 == 0 and element % 7 != 0) {
      summation += element;
      output_str += std::to_string(element) + " + ";
    }
  }

  if (output_str.length() > 3) output_str.erase(output_str.length() - 3, 3);

  std::cout << "The sum of integers divisible by 5 but not by 7 : \n";
  std::cout << output_str << " = " << summation << std::endl;
}

int main() {
  //    Allocate memory to store a list count
  unsigned n{};

  //    Get the list count
  std::cout << "Enter the range of the array: ";
  std::cin >> n;

  //    Create a vector to store `n data` as you earlier decided
  //    The vector initializer reserves memory and set all the values to zero
  std::vector<int> numbers(n, 0);

  //    Now it's time to receive list elements from user
  for (int i = 0; i < n; i++) {
    std::cout << "Enter an element of array : element(" << i + 1 << "): ";
    std::cin >> numbers[i];
  }

  //    Process the list and sum the values which are divisible by 5
  sumDivisibles(numbers, n);
}
