#include <iostream>
#include <fstream>
using namespace std;
int main() {
    ofstream fout("chart.txt");
    int a[6];
    for (int i = 0; i < 6; i++) {
        cin >> a[i];
    }
    fout << "+-------------------------+\n";
    for (int i = 10; i >= 1; i--) {
        fout << "| ";
        for (int j = 0; j < 6; j++) {
            if (a[j] >= i) {
                fout << "### ";
            } else {
                fout << "    ";
            }
        }
        fout << "|\n";
    }
    fout << "+-------------------------+\n";
    fout.close();
}
