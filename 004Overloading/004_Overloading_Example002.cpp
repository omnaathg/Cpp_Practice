//Overloading () Operator

#include<cassert>
#include<vector>

class Matrix{
    public:
    // constructor - accepting size of matrix 
    Matrix(int row,int column):rows_(row),columns_(column),values_(row*column){}

    //overloading() operator for modifying
    //setter function
    int& operator()(int row,int column){
        return values_[row*columns_+column];
    }

    //overloading()operator for accesing
    //getter function 
    int operator()(int row, int column){
        return values_[row*columns_+column];
    }

    private:
    int rows_;
    int columns_;
    std::vector<int> values_;
};


int main(){
    Matrix matrix(2,2); // done thru constructor 
    matrix(0,0) = 4; // setter or modifier function - with overloading () operator
    assert(matrix(0,0)==4); // getter function - with overloading () operator   
}