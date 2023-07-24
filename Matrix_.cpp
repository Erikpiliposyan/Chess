#include <iostream>


class matrix {
protected:
    const int rows;
    const int cols;
public:
    std::string** matrix1;
    int** matrix2;

    void init(){
    matrix1 = new std::string * [rows];
    matrix2 = new int* [rows];

    for (int i = 0; i < rows; i++) {
        matrix1[i] = new std::string[cols];
        matrix2[i] = new int[cols];
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            matrix1[i][j] = "__";
            matrix2[i][j] = 0;
        }
    }
}
    matrix() = delete;
    matrix(int a, int b) : rows(a), cols(b) {
        init();
    }   

    matrix(const matrix& obj) = default;
    matrix& operator=(const matrix& obj) = default;
    virtual ~matrix() = default;
};