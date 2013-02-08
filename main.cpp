#include <iostream>
#include "sortingClass.h"

using namespace std;

int main()
{
    sortingClass sortingObject;
    sortingObject.initialize();
    sortingObject.insertionSort();
    sortingObject.display();

    return 0;
}
