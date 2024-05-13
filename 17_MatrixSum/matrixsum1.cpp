#include <iostream>
#include <vector>

using namespace std;

class Matrix {
public:
    Matrix(int y, int x);
    ~Matrix() = default;
    int &getpoint(int, int);
    vector<vector<int> > getmatrix();

private:
    int r, c;
    vector<vector<int> > num;
};

Matrix::Matrix(int y, int x) : r(y), c(x), num(y, vector<int>(x)) {
    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j) {
            cin >> num[i][j];
        }
    }
}

int &Matrix::getpoint(int r, int c) {
    return num[r][c];
}

vector<vector<int> > Matrix::getmatrix() {
    return num;
}

void matrixsum(const vector<vector<int> >& mat1, const vector<vector<int> >& mat2, int r, int c) {
    for (int y = 0; y < r; ++y) {
        for (int x = 0; x < c; ++x) {
            cout << mat1[y][x] + mat2[y][x] << " ";
        }
        cout << endl;
    }
}

int main(void) {
    int t, r, c;
    cin >> t;
    while (t--) {
        cin >> r >> c;
        Matrix m1(r, c);
        Matrix m2(r, c);   
        matrixsum(m1.getmatrix(), m2.getmatrix(), r, c);
    }
}
