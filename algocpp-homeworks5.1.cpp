#include <iostream>
#include "print.h"

int main()
{
    setlocale(LC_ALL, "Russian");
    std::srand(std::time(nullptr));

    int arrSize = 3 + rand() % 17;

    
    int* arr = new int[arrSize] {};

   
    for (int i = 0; i < arrSize; i++)
    {
        arr[i] = rand() % 55;
    }

    PrintArray(arr, arrSize);
    PrintPyramid(arr, arrSize);

    delete[] arr;
    arr = nullptr;
}