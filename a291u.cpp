#include <iostream>

using namespace std;

void calculateNandB(const string& pw, const string& tried, int& a, int& b) {
    a = 0;
    b = 0;

    int pwCount[10] = {0};
    int triedCount[10] = {0};

    for (int i = 0; i < 4; i++) {
        if (pw[i] == tried[i]) {
            a++;
        } else {
            pwCount[pw[i] - '0']++;
            triedCount[tried[i] - '0']++;
        }
    }

    for (int i = 0; i < 10; i++) {
        b += min(pwCount[i], triedCount[i]);
    }
}

void nAnB() {
    int n;
    string pw;
    
    cout << "Please enter the password: ";
    cin >> pw;
    cout << "Number of attempts: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        string tried;
        cout << "Attempt " << i + 1 << ": ";
        cin >> tried;

        int a, b;
        calculateNandB(pw, tried, a, b);

        cout << a << "A" << b << "B" << endl;
    }
}

int main() {
    nAnB();
    return 0;
}
