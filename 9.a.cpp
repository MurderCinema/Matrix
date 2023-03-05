#include <iostream>

using namespace std;

int main()
{
    const int MAX_N = 100, MAX_M = 100, MAX_COLOR = 255;
    int image[MAX_N][MAX_M][3];

    int n, m;
    cout << "Введите размеры изображения (n m): ";
    cin >> n >> m;

    cout << "Введите яркость цветовых каналов для каждого пикселя:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << "Пиксель (" << i << ", " << j << "): ";
            cin >> image[i][j][0] >> image[i][j][1] >> image[i][j][2];

            for (int k = 0; k < 3; k++) {
                if (image[i][j][k] < 0) {
                    image[i][j][k] = 0;
                } else if (image[i][j][k] > MAX_COLOR) {
                    image[i][j][k] = MAX_COLOR;
                }
            }
        }
    }

    cout << endl << "Изображение:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << "(" << image[i][j][0] << ", " << image[i][j][1] << ", " << image[i][j][2] << ") ";
        }
        cout << endl;
    }

    return 0;
}