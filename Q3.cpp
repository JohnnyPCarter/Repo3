/**
 * Allows the user to input an array of ints and this class will
 * let the user know where the local min and max are
 */
#include <iostream>

/**
 * Creates a string that has the location of the local min and max
 * assuming the first number is 1
 */
std::string localMaxMin(int* arr) {
    int points[20];
    int intPoints = 0;
    int i = 1;
    while (arr[i] != 0) {
        if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1]) {
            points[intPoints] = i + 1;
            intPoints++;
        }
        if (arr[i] < arr[i - 1] && arr[i] < arr[i + 1]) {
            points[intPoints] = i + 1;
            intPoints++;
        }
        i++;
    }
    points[intPoints] = -1;
    std::string ret = "";
    int loop = 1;
    if (points[0] != -1) {
        ret += points[0];
        std::cout << "" << points[0];
        while (points[loop] != -1) {
            ret += points[loop];
            std::cout << ", " << points[loop];
            loop++;
        }
    }   
    return ret;
}

/**
 * Creates the array
 */
int main()
{
    int arr[] = {12, 11, 122, 112, 222, 222, 222, 221, 76, 36, 31, 234, 256, 76, 73};
    std::cout << "The local min and max are at: " << localMaxMin(arr) << std::endl;
    return 0;
}