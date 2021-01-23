// AlgorWeek1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <array>




void StandardDev(float list[], int size) 
{
    int count = size;

    float sum = 0;
    for (int i = 0; i < count; i++)
    {
        sum += list[i];
    }

    float mean = (float)sum / (float)count;

    for (int i = 0; i < count; i++)
    {
        list[i] = list[i] - mean;
        list[i] = pow(list[i], 2);
    }

    float differenceSum = 0;
    for (int i = 0; i < count; i++)
    {
        differenceSum += list[i];
    }

    float variance = differenceSum / count;
    float standardDeviation = powf(variance, 0.5);
    
    std::cout << standardDeviation;
}

void SelectionSort(float list[], int size) 
{

}

int main()
{
    float list[8] = { 0,1,2,5,7,1,9,9 };
    //StandardDev(list, 8);
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
