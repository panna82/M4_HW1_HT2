#include <iostream>
#include <Windows.h>

int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    int arr[9] = { 14, 16, 19, 32, 32, 32, 56, 69, 72 };
    const int arr_size = 8;
    int middle = 0;
    int point = 0;
    int count = 0;

    std::cout << "14, 16, 19, 32, 32, 32, 56, 69, 72 \n\n";
    std::cout << "Введите точку отсчета: ";
    std::cin >> point;

    int left = 0;
    int right = arr_size;

    while (left < right)
    {
        middle = (left + right) / 2;
        if (arr[middle] <= point) left = middle + 1;
        else if (arr[middle] >= point) right = middle - 1;
    };
    count = arr_size - middle + 1;
    std::cout << "Количество элементов в массиве больших, чем " << point << ": " << count << std::endl << std::endl;


}

