#include <iostream>
#include <vector>

std::vector<int> real(const std::vector<int>& n) {
  std::vector<int> odd{}, even{};

  for (const int& num : n)
    (num % 2 == 0) ? even.push_back(num) : odd.push_back(num);

  std::vector<int> result(odd);
  result.insert(std::end(result), std::begin(even), std::end(even));

  return result;
}

void printvec(const std::vector<int>& a) {
  char comma[3]{'\0', ' ', '\0'};
  for (const int& num : a) {
    std::cout << comma << num;
    comma[0] = ',';
  }
  std::cout << std::endl;
}

int main() {
  std::vector<int> n(20);
  for (int i{}; i < n.size(); i++) {
    std::cout << "Enter "
              << "element " << i + 1 << " : ";
    std::cin >> n[i];
  }
  printvec(real(n));
}
