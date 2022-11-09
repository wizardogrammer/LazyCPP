#include <iostream>
#include <vector>

std::vector<int> matrixColumnAddition(std::vector<std::vector<int>> matrix,
                                      int row, int column) {
  int res{};
  std::vector<int> result{};
  for (int i = 0; i < row; i++) {
    for (int j = 0; j < column; j++) {
      res = res + matrix[j][i];
    }
    result.push_back(res);
    res = 0;
  }
  return result;
}

void printArray(std::vector<int> a) {
  for (int i = 0; i < a.size(); i++) {
    std::cout << a[i] << ",";
  }
}
int main() {
  int row_range;
  int column_range;
  std::cout << "Enter the size of row and column respectively : ";
  std::cin >> row_range >> column_range;
  std::vector<std::vector<int>> matrix(row_range,
                                       std::vector<int>(column_range, 0));
  for (int i = 0; i < row_range; i++) {
    for (int j = 0; j < column_range; j++) {
      std::cout << "Enter the element of matrix : ";
      std::cin >> matrix[i][j];
    }
  }
  printArray(matrixColumnAddition(matrix, row_range, column_range));
  return 0;
}
