#include <iostream>
#include <cstdlib> // for random
#include <ctime> // for time
using namespace std;

int findAvg(int* data, int size);

int findMDAvg(int vals[2][3], int r, int c);

int main() {


    // variables n shee
    int a = -124;
    double b = 12.43;
    char temp = 'a';
    bool c = 12341;

    cout << "Enter a value: " << endl;
    cin >> a;

    cout << "a: " << a << "\nb: " << b <<"\ntemp: " << temp <<"\nc: " << c << endl;

    // random
    srand(time(0));
    int r = rand(); // get rand from 0-max int (2^31)
    int q = rand() % 6; // get a random value from 0-5
    cout << "r: " << r << "\nq: " << q << endl;

    // arrays
    int data[20];
    int values[5] = {1, 2, 3, 4, 5};
    char letters[4] = {'a', 'b', 'c', 'd'};


    // use loop to print elements
    for (int i = 0; i < 3; ++i) {
        cout << values[i];
    }
    // Or just print if chars
    cout << "\n" << letters << endl;

    // passed by reference (link)
    int average = findAvg(values, 5);
    cout << "Average: " << average << endl;


    // multidimensional array
    int numbers[2][3] = {1, 2, 3, 10, 11, 12};
    cout << findMDAvg(numbers, 2, 3) << endl;

}

int findAvg(int* data, int size){
    int result = 0;
    for (int i = 0; i < size; ++i) {
        result+=data[i];
    }
    return result/size;
};

int findMDAvg(int vals[2][3], int r, int c){
    int result = 0;
    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j) {
            result+= vals[i][j];
        }
    }
    return result/(r*c);
}
