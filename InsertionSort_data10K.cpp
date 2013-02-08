#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

void insertionSort (int A[], int N){

    for(int i = 0; i<N; i++){
        int key = A[i];
        int j = i-1;

        while ((j>=0) && (A[j]>key)){
            A[j+1] = A[j];
            j=j-1;
        }
        A[j+1] = key;

    }
}

int main (){

    string line;
    int temp = 0;
    int n = 0;
    int numbers[10000];

    ifstream myfile("data10k.txt");

    while (myfile.good()){
        getline (myfile, line);
        stringstream(line) >> temp;
        numbers[n] = temp;
        n++;
        }
        insertionSort (numbers, 9999);

    for (int n = 0; n < 9999; n++){
        cout << numbers[n] << "\n";
    }

    return 0;
}
