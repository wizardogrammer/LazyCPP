#include <iostream>
#include <vector>

std::vector<float> middleofcolumn(std::vector<std::vector<float>> matrix,
                                  int row, int column) {
  float middle{};
  std::vector<float> result{};
  for (int i = 0; i < row; i++) {
    for (int j = 0; j < column; j++) {
      middle = (middle + matrix[j][i]) / column;
    }
    result.push_back(middle);
    middle = 0;
  }
  return result;
}

void printArray(std::vector<float> a) {
  std::cout << "\nThe average of each column :" << std::endl;
  for (int i = 0; i < a.size(); i++) {
    std::cout << a[i] << ",";
  }
}

void printMatrix(std::vector<std::vector<float>> a, int row, int column) {
  std::cout << "[";
  for (int i = 0; i < row; i++) {
    std::cout << "[";
    for (int j = 0; j < column; j++) {
      std::cout << a[i][j] << ",";
      if (j + 1 == column) {
        std::cout << "],";
      }
    }
  }
  std::cout << "]";
}

void result(std::vector<std::vector<float>> matrix, int row, int column) {
  float middle{};
  for (int i = 0; i < row; i++) {
    for (int j = 0; j < column; j++) {
      middle = (middle + matrix[j][i]) / 2;
      if (middle == matrix[i][j]) {
        std::cout << "\nrow\tcolumn" << std::endl;
        std::cout << i << "\t" << j << std::endl;

      } else
        break;
      middle = 0;
    }
  }
}

int main() {
  int row_range;
  int column_range;
  std::cout << "Enter the size of row and column of matirx respectively : ";
  std::cin >> row_range >> column_range;
  std::vector<std::vector<float>> matrix(row_range,
                                         std::vector<float>(column_range, 0));
  for (int i = 0; i < row_range; i++) {
    for (int j = 0; j < column_range; j++) {
      std::cout << "Enter the element of matrix : ";
      std::cin >> matrix[i][j];
    }
  }

  printMatrix(matrix, row_range, column_range);
  printArray(middleofcolumn(matrix, row_range, column_range));
  result(matrix, row_range, column_range);
}
