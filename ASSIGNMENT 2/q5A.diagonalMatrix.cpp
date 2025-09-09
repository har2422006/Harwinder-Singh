// 5) Space required to store any two-dimensional array is 𝑛𝑢𝑚𝑏𝑒𝑟 𝑜ƒ 𝑟𝑜𝑤𝑠 × 𝑛𝑢𝑚𝑏𝑒𝑟 𝑜ƒ 𝑐𝑜𝑙𝑢𝑚𝑛𝑠. 
// Assuming array is used to store elements of the following matrices, implement an efficient way that reduces the space requirement. 
// (a) Diagonal Matrix. 
#include<iostream>
using namespace std;

int main(){
    int size = 0;
    int matrix[3][3] =
    {
        {1,0,0},
        {0,6,0},
        {0,0,5}
    };

for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            if (matrix[i][j] != 0)
                size++;
        }
}            

int sparseMatrix[size + 1][3];

sparseMatrix[0][0] = 3;
sparseMatrix[0][1] = 3;
sparseMatrix[0][2] = size;

int k = 1 ;
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        if(matrix[i][j] != 0){
            sparseMatrix[k][0] = i;
            sparseMatrix[k][1] = j;
            sparseMatrix[k][2] = matrix[i][j];
            k++;
        }
    }
}

for(int i=0;i<size+1;i++){
    for(int j=0;j<3;j++){
        cout << sparseMatrix[i][j] ;
    }
    cout << endl;
}

}
