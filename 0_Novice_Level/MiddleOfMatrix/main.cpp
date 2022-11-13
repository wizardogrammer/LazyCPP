#include <iostream>
#include <vector>

long middle(std::vector<std::vector<long>> &matrix, long m, long n) {
  long result{};
  long minn{};
  long maxx{};
  for (int i{}; i < m; i++) {
    for (int j{}; j < n; j++) {
      if (matrix[i][j] < matrix[0][0]) {
        minn = matrix[i][j];
      } else if (matrix[i][j] > matrix[0][0]) {
        maxx = matrix[i][j];
      }
    }
  }
  result = (minn + maxx) / 2;
  return result;
}

int main() {
  int row;
  std::cout << "Enter the range of row :";
  std::cin >> row;
  int column;
  std::cout << "Enter the rang of row : ";
  std::cin >> column;
  std::vector<std::vector<long>> matris(row, std::vector<long>(column, 0));
  for (int i{}; i < row; i++) {
    for (int j{}; j < column; j++) {
      std::cout << "Enter a number as an integer of matrix: ";
      std::cin >> matris[i][j];
    }
  }
  std::cout << middle(matris, row, column);
}
