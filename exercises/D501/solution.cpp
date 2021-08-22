#include <fstream>
#include <iostream>
using namespace std;
int main() {
    ifstream fin("account.txt");
    int n, x, balance = 0;
    fin >> n;
    for (int i = 0; i < n; i++) {
        fin >> x;
        balance += x;
    }
    fin.close();
    cout << balance << endl;
}
