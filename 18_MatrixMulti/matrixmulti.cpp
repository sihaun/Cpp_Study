#include <iostream>
#include <vector>

using namespace std;

class Matrix {
public:
    Matrix(int y, int x);
    ~Matrix() = default;
    int &point(int, int);
    vector<vector<int> > getmatrix();
    void fillmatrix();

private:
    int row, column;
    vector<vector<int> > vec;
};

Matrix::Matrix(int y, int x) : row(y), column(x), vec(y, vector<int>(x)){

}
int &Matrix::point(int r, int c){
    return this->vec[r][c];
}

vector<vector<int> > Matrix::getmatrix() {
    return this->vec;
}

void Matrix::fillmatrix() {
    for (int i = 0; i < this->row; ++i) {
        for (int j = 0; j < this->column; ++j) {
            cin >> this->vec[i][j];
        }
    }
} 

void matrixmulti(const vector<vector<int> >& mat1, const vector<vector<int> >& mat2, int r, int s, int t) {
    Matrix m3(r, t);
    for (int y = 0; y < r; ++y) {
        for (int x = 0; x < t; ++x) {
            int sum = 0;
            for(int z = 0; z < s; ++z){
                sum += mat1[y][z] * mat2[z][x];
            }
            m3.point(y,x) = sum;
        }
    }
    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < t; ++j) {
            cout << m3.point(i,j) << " ";
        }
        cout << endl;
    }
}

int main(void) {
    int task, r, s, t;
    cin >> task;
    while (task--) {
        cin >> r >> s >> t;
        Matrix m1(r, s);
        Matrix m2(s, t);
        m1.fillmatrix();
        m2.fillmatrix();   
        matrixmulti(m1.getmatrix(), m2.getmatrix(), r, s, t);
    }
}
