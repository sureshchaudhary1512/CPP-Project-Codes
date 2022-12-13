#include<iostream>
using namespace std;

class Matrix
{
    private:
    int A[3][3];
    int row, col;

    public:
    Matrix(int rows = 3, int cols = 3); // create matrix
    //int matrix_check(int cols1, int cols2);
    //void display_matrix();
    friend void operator+(Matrix m1, Matrix m2); // Add 2 matrix

};

Matrix::Matrix(int rows, int cols)
{
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            cout << "Enter Element of Matrix M" << i + 1 << j + 1 << " : ";
            cin >> A[i][j];
        }
    }
}

void operator+(Matrix m, Matrix n)
{
    Matrix M[3][3];

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            M[i][j] = m.A[i][j] + n.A[i][j];
        }
    }

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            cout<<M[i][j];
            
        	// if(j == c2-1)
        	cout << endl;
        }
    }
        

    //return M[3][3]; 
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

    Matrix m1(r1, c1);
    Matrix m2(r2, c2);
    
    //m1.display_matrix();
    //m2.display_matrix();
    // Matrix m3;
    
    // m3 = m1 + m2;

    //m3.display_matrix();

    return 0;
}