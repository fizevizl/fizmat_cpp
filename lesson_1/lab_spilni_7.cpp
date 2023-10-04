#include <iostream>
using namespace std;

int main() {
    int h, m, s;
    cout << "input h (0-23): ";
    cin >> h;
    cout << "input m (0-59): ";
    cin >> m;
    cout << "input s (0-59): ";
    cin >> s;
  
    if (h < 0 || h > 23 || m < 0 || m > 59 || s < 0 || s > 59) {
        cout << "incorrect input" << endl;
        return 1;
    }

    double angle = 360.0 * h / 12.0 + 360.0 * m / 60.0 + 360.0 * s / 3600.0;

    cout << "angle start is  " << h << " hours, " << m << " minuts, " << s << " sekund " << angle << endl;

    return 0;
}
