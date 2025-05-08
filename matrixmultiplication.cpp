#include <iostream>

class Matrix {
private:
    int** data;
    int rows;
    int cols;

public:
    Matrix() : rows(0), cols(0), data(nullptr) {}

    Matrix(int r, int c) : rows(r), cols(c) {
        data = new int*[rows];
        for (int i = 0; i < rows; i++) {
            data[i] = new int[cols];
            for (int j = 0; j < cols; j++) {
                data[i][j] = 0;
            }
        }
    }

    Matrix(const Matrix& other) : rows(other.rows), cols(other.cols) {
        data = new int*[rows];
        for (int i = 0; i < rows; i++) {
            data[i] = new int[cols];
            for (int j = 0; j < cols; j++) {
                data[i][j] = other.data[i][j];
            }
        }
    }

    ~Matrix() {
        if (data != nullptr) {
            for (int i = 0; i < rows; i++) {
                delete[] data[i];
            }
            delete[] data;
        }
    }

    Matrix& operator=(const Matrix& other) {
        if (this == &other) {
            return *this;
        }

        if (data != nullptr) {
            for (int i = 0; i < rows; i++) {
                delete[] data[i];
            }
            delete[] data;
        }

        rows = other.rows;
        cols = other.cols;
        data = new int*[rows];
        for (int i = 0; i < rows; i++) {
            data[i] = new int[cols];
            for (int j = 0; j < cols; j++) {
                data[i][j] = other.data[i][j];
            }
        }
        return *this;
    }

    void input() {
        std::cout << "Enter the elements of the " << rows << "x" << cols << " matrix:" << std::endl;
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                std::cout << "Enter element [" << i << "][" << j << "]: ";
                std::cin >> data[i][j];
            }
        }
    }

    void display() const {
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                std::cout << data[i][j] << "\t";
            }
            std::cout << std::endl;
        }
    }

    Matrix operator+(const Matrix& other) const {
        if (rows != other.rows || cols != other.cols) {
            std::cout << "Error: Matrices dimensions don't match for addition!" << std::endl;
            return Matrix();
        }

        Matrix result(rows, cols);
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                result.data[i][j] = data[i][j] + other.data[i][j];
            }
        }
        return result;
    }

    Matrix operator*(const Matrix& other) const {
        if (cols != other.rows) {
            std::cout << "Error: Matrices dimensions don't match for multiplication!" << std::endl;
            return Matrix();
        }

        Matrix result(rows, other.cols);
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < other.cols; j++) {
                result.data[i][j] = 0;
                for (int k = 0; k < cols; k++) {
                    result.data[i][j] += data[i][k] * other.data[k][j];
                }
            }
        }
        return result;
    }

    int getRows() const { return rows; }
    int getCols() const { return cols; }
};

int main() {
    int r1, c1, r2, c2;
    
    std::cout << "Enter dimensions of first matrix (rows columns): ";
    std::cin >> r1 >> c1;
    
    std::cout << "Enter dimensions of second matrix (rows columns): ";
    std::cin >> r2 >> c2;
    
    Matrix m1(r1, c1);
    Matrix m2(r2, c2);
    
    std::cout << "\nFor first matrix:" << std::endl;
    m1.input();
    
    std::cout << "\nFor second matrix:" << std::endl;
    m2.input();
    
    std::cout << "\nFirst Matrix:" << std::endl;
    m1.display();
    
    std::cout << "\nSecond Matrix:" << std::endl;
    m2.display();
    
    if (r1 == r2 && c1 == c2) {
        std::cout << "\nSum of the matrices (using operator+):" << std::endl;
        Matrix sum = m1 + m2;
        sum.display();
    } else {
        std::cout << "\nAddition not possible due to incompatible dimensions." << std::endl;
    }
    
    if (c1 == r2) {
        std::cout << "\nProduct of the matrices (using operator*):" << std::endl;
        Matrix product = m1 * m2;
        product.display();
    } else {
        std::cout << "\nMultiplication not possible due to incompatible dimensions." << std::endl;
    }
    
    return 0;
}
