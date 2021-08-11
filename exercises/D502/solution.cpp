#include <iostream>
#include <fstream>
using namespace std;
int main() {
    ifstream fin("weather.txt");
    int max_temp = 0, min_temp = 100;
    while (!fin.eof()) {
        char tmp[32];
        fin.read(tmp, 32);
        int x;
        string dummy;
        fin >> x;
        getline(fin, dummy);
        max_temp = max(x, max_temp);
        min_temp = min(x, min_temp);
    }
    fin.close();
    cout << min_temp << " " << max_temp << endl;
}