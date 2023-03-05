#include <iostream>

using namespace std;

const int N = 5;

int main()
{
    int matrix[N][N] = {
        {-1, 2, -3, 4, -5},
        {6, -7, 8, -9, 10},
        {11, -12, 13, -14, 15},
        {16, -17, 18, -19, 20},
        {-21, 22, -23, 24, -25}
    };
    
    int sum = 0;
    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (j % 2 == 0 && i <= j && matrix[i][j] > 0) {
                sum += matrix[i][j];
            }
        }
    }
    
    cout << "Сумма положительных элементов, лежащих на и выше главной диагонали и расположенных в чётных столбцах: " << sum << endl;
    
    return 0;
}