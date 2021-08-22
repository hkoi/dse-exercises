#include <fstream>
#include <iostream>
using namespace std;
int a[6];
int main() {
    ofstream fout("chart.txt");
    for (int i = 0; i < 6; i++) {
        cin >> a[i];
    }
    fout << "+-------------------------+" << endl;
    for (int i = 10; i >= 1; i--) {
        fout << "| ";
        for (int j = 0; j < 6; j++) {
            if (a[j] >= i) {
                fout << "### ";
            } else {
                fout << "    ";
            }
        }
        fout << "|" << endl;
    }
    fout << "+-------------------------+" << endl;
    fout.close();
}
