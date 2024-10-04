// Practic_1.6.cpp 

#include <iostream>
using namespace std; 
#include <vector>


/* int main() {

    int A;
    cout << "write the whole number: ";
    cin >> A;

    int countOnes = 0, countZeros = 0;
    unsigned int num = A;  // Для роботи з від'ємними числами у двійковому вигляді

    // Рахуємо кількість 1 та 0 у двійковому поданні
    while (num > 0) {
        if (num & 1)
            countOnes++;
        else
            countZeros++;
        num >>= 1;
    }

    cout << "amount 1: " << countOnes << endl;
    cout << "amount 0: " << countZeros << endl;

    if (countOnes > countZeros)
        cout << "bits 1 more." << endl;
    else if (countOnes < countZeros)
        cout << "bits 0 more." << endl;
    else
        cout << "amount 1 і 0 is the same." << endl;

    return 0;
    
    */
    // Function to perform XOR operation between two sequences
vector<int> xorOperation(const vector<int>& seq1, const vector<int>& seq2) {
    int n = seq1.size();
    vector<int> result(n);

    // Perform XOR for each element
    for (int i = 0; i < n; ++i) {
        result[i] = seq1[i] ^ seq2[i];
    }

    return result;
}

int main() {
    int n;
    cout << "Enter the number of elements in the sequences: ";
    cin >> n;

    vector<int> seq1(n), seq2(n);

    // Input the first sequence
    cout << "Enter the first sequence of 0s and 1s:\n";
    for (int i = 0; i < n; ++i) {
        cin >> seq1[i];
    }

    // Input the second sequence
    cout << "Enter the second sequence of 0s and 1s:\n";
    for (int i = 0; i < n; ++i) {
        cin >> seq2[i];
    }

    // Call the XOR function
    vector<int> result = xorOperation(seq1, seq2);

    // Output the result
    cout << "Result of XOR operation: ";
    for (int i = 0; i < n; ++i) {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}
    
   


