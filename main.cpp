#include <iostream>
#include <vector>

using namespace std;
int main() {
    vector<int> v = { 1, 5, 2, 6, 8 };

    cout << "Vektor elementlari oddiy iterator bilan: ";
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << ' ';
    }

    cout << "\nbegin() va end() iteratorlari bilan: ";
    for (auto i = v.begin(); i < v.end(); i++) {
        cout << *i << " ";
    }

    cout << "\nrbegin() va rend() iteratorlari bilan: ";
    for (auto i = v.rbegin(); i < v.rend(); i++) {
        cout << *i << " ";
    }
    return 0;
}