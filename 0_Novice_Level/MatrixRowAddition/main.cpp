#include <iostream>
#include <vector>

std::vector<int> matrixRowAddition(std::vector<std::vector<int>> matrix,
                                   int row, int coluumn) {
  std::vector<int> result{};
  int res = 0;
  for (int i = 0; i < row; i++) {
    for (int j = 0; j < coluumn; j++) {
      res = res + matrix[i][j];
    }
    result.push_back(res);
    res = 0;
  }

  return result;
}

void printArray(std::vector<int> arr) {
  for (int i = 0; i < arr.size(); i++) {
    std::cout << arr[i] << ",";
  }
}

int main() {
  int row;
  int column;
  std::cout << "Enter the size of row an column of matrix : ";
  std::cin >> row >> column;
  std::vector<std::vector<int>> matrix(row, std::vector<int>(column, 0));

  for (int i = 0; i < row; i++) {
    for (int j = 0; j < column; j++) {
      std::cout << "enter the element of the matrix : ";
      std::cin >> matrix[i][j];
    }
  }

  printArray(matrixRowAddition(matrix, row, column));
}
