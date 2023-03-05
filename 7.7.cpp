#include <iostream>

using namespace std;

const int N = 5;

int main()
{
    int rainfall[N], wind[N];
    
    cout << "Введите количество осадков и силу ветра для каждого дня: " << endl;
    for (int i = 0; i < N; i++) {
        cin >> rainfall[i] >> wind[i];
    }
    
    int max_wind = wind[0], max_rainfall = rainfall[0], max_rainfall_day = 0;
    for (int i = 1; i < N; i++) {
        if (wind[i] > max_wind) {
            max_wind = wind[i];
        }
        if (rainfall[i] > max_rainfall) {
            max_rainfall = rainfall[i];
            max_rainfall_day = i;
        }
    }
    
    bool is_hurricane = max_rainfall_day > 0 && wind[max_rainfall_day] == max_wind;
    
    if (is_hurricane) {
        cout << "Был ураган в день " << max_rainfall_day + 1 << endl;
    } else {
        cout << "Не было урагана" << endl;
    }
    
    return 0;
}