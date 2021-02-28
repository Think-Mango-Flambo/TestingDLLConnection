// TestingDLLConnection.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <stdio.h>
#include <windows.h>
#include <iostream>
#include "SiUSBXp.h"

// For getting number of devices
DWORD numDevices; 
// Getting prudcut string 
DWORD dwDeviceNum = 0;
SI_DEVICE_STRING lpvDeviceString;
DWORD dwFlags;

int main()
{

    SI_STATUS status = SI_GetNumDevices(&numDevices);
    SI_STATUS statusProductString = SI_GetProductString(dwDeviceNum, lpvDeviceString, dwFlags);
    std::cout << "Number of Devices Connected:\n";
    std::cout << numDevices;
    std::cout << "\nDevice Number:\n";
    std::cout << dwDeviceNum;
    std::cout << "\nDeviceString:\n";
    std::cout << lpvDeviceString;
    std::cout << "\nFlags:\n";
    std::cout << dwFlags;
    std::cout << "\n\Status of getting :\n";
    std::cout << dwFlags;
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
