#include<iostream>
using namespace std;

class Matrix
{
    private:
    int A[10][10];
    int row, col;

    public:
    void setSize(int r, int c);
    void create_matrix();
    friend Matrix operator+(Matrix m, Matrix n);
    void show_matrix(int r, int c);
    
};

void Matrix::create_matrix()
{
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            cout << "Enter Element of Matrix M" << i + 1 << j + 1 << " : ";
            cin >> A[i][j];
        }
    }
}

void Matrix::setSize(int r, int c)
{
    this->row = r;
    this->col = c;
}

Matrix operator+(Matrix m, Matrix n)
{
    Matrix M;
    M.row = 10;
    M.col = 10;
    for(int i = 0; i < M.row; i++)
    {
        for(int j = 0; j < M.col; j++)
        {
            M.A[i][j] = m.A[i][j] + n.A[i][j];
        }
    }
    return M; 
} 

void Matrix::show_matrix(int r, int c)
{
    for(int i = 0; i < r; ++i)
        for(int j = 0; j < c; ++j)
        {
            cout << " " <<A[i][j];
            
        	if(j == c-1)
        	cout << endl;
        }
}

int main()
{    
    int r1, c1, r2, c2;
    cout << "Enter Size of Rows and Columns for First Matrix: ";
    cin >> r1 >> c1;
    cout << "Enter Size of Rows and Columns for Second Matrix: ";
    cin >> r2 >> c2;

    // Check Matrix 
    if (c1!=r2)
    {
        cout<<"Matrix Cannot be Add"<<endl;
        cout<<"Please Note * the size of Matrix1 column must be equal to Matrix2 Row size"<<endl;
        return 0;
    }

    Matrix m1, m2, m3;

    m1.setSize(r1,c1);
    m1.create_matrix();
    m1.show_matrix(r1,c1);

    m2.setSize(r2,c2);
    m2.create_matrix();
    m2.show_matrix(r2,c2);

    m3.setSize(r1,c2);
    cout<<"Addition of Matrix  "<<endl;
    m3 = m1 + m2;
    m3.show_matrix(r1,c2);
    
    return 0;
}