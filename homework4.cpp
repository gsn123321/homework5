

#include <iostream>

int main()
{
//    int arr[10];
//
//    for (int i = 0; i < 10; i++) {
//        arr[i] = rand() % 100;
//        std::cout << arr[i] << " ";
//    }
//
//    int min = arr[0];
//    int max = arr[0];
//
//    for (int i = 0; i < 10; i++) {
//        if (arr[i] < min) {
//            min = arr[i];
//        }
//
//        if (arr[i] > max) {
//            max = arr[i];
//        }
//    }
//
//    std::cout << "Min: " << min << '\n';
//    std::cout << "Max: " << max << '\n';

    // 2

    //int profit[12];

    //for (int i = 0; i < 12; i++) {
    //    std::cin >> profit[i];
    //}

    //int num1;
    //int num2;

    //std::cin >> num1;
    //std::cin >> num2;

    //int min = profit[num1 - 1];
    //int max = profit[num1 - 1];

    //int minmonth = num1;
    //int maxmonth = num1;

    //for (int i = num1 - 1; i < num2; i++) {
    //    if (profit[i] < min) {
    //        min = profit[i];
    //        minmonth = i + 1;
    //    }

    //    if (profit[i] > max) {
    //        max = profit[i];
    //        maxmonth = i + 1;
    //    }
    //}

    //std::cout << "Min month: " << minmonth << "\n";
    //std::cout << "Max month: " << maxmonth;

    //3

    //int n;
    //std::cin >> n;

    //int arr[100];

    //for (int i = 0; i < n; i++) {
    //    std::cin >> arr[i];
    //}

    //int sum = 0;

    //for (int i = 0; i < n; i++) {
    //    if (arr[i] < 0) {
    //        sum = sum + arr[i];
    //    }
    //}

    //std::cout << sum;


    //int n;
    //std::cin >> n;

    //int arr[100];

    //for (int i = 0; i < n; i++) {
    //    std::cin >> arr[i];
    //}

    //int product = 1;

    //for (int i = 1; i < n; i += 2) {
    //    product = product * arr[i];
    //}

    //std::cout << product;

    //4

    //int arr[10];
    //int arr1[5];
    //int arr2[5];

    //for (int i = 0; i < 10; i++) {
    //    std::cin >> arr[i];
    //}

    //for (int i = 0; i < 5; i++) {
    //    arr1[i] = arr[i];
    //}

    //for (int i = 0; i < 5; i++) {
    //    arr2[i] = arr[i + 5];
    //}

    //std::cout << "First: ";

    //for (int i = 0; i < 5; i++) {
    //    std::cout << arr1[i] << " ";
    //}

    //std::cout << "Second: \n";

    //for (int i = 0; i < 5; i++) {
    //    std::cout << arr2[i] << " ";
    //}

    //5

    int arr1[5] = { 10, 15, 0, -23, 40 };
    int arr2[5] = { 6, 0, -100, 25, -4 };
    int arr3[5];

    for (int i = 0; i < 5; i++) {
        arr3[i] = arr1[i] + arr2[i];
    }

    for (int i = 0; i < 5; i++) {
        std::cout << arr3[i] << " ";
    }

}

