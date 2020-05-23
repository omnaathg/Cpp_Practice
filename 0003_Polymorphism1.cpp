#include<cassert>
#include<vector>
#include<iostream>

class Matrix{
    public:
    Matrix(int r,int c): rows_(r),columns_(c),values_(r*c){}

    //overloading a paranthesis operator
    int& operator()(int r,int c){
        return values_[r*columns_+c];
    }

    int operator[](int r,int c){
        return values_[r*columns_+c];
    }

    private:
    int rows_;
    int columns_;
    std::vector<int> values_;

};


int main(){
    Matrix matrix(2,2);
    matrix(1,1) = 10;
    std::cout<<"5";
    assert(matrix[1,1] == 4);

}