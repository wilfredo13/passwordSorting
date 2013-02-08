#include "sortingClass.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void sortingClass::initialize(){

    string line;
    int p = 0;
    ifstream myfile("top_passwords.txt");
    while (myfile.good()){
        getline(myfile, line);
        password[p] = line;
        p++;
    }
        myfile.close();

}

void sortingClass::insertionSort(){

    int j;
    string key;
    for (int i=0; i<100; i++){
        key = password[i];
        j = (i-1);

        while (j >= 0 && password[j] > key){
            password[j+1] = password[j];
            j = j-1;
            }
        password[j+1] = key;
    }
}

void sortingClass::display(){

        for(int p = 0; p<100; p++){
        cout<< password[p] << endl;
        }

}
