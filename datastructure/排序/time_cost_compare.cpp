#include <iostream>
#include <chrono>
#include <vector>
#include "quick_sort.cpp"
#include "select_sort.cpp"
#include "bubble_sort.cpp"

int main() {
    //创建无序列表
    const int size = 1000000;
    int arr[size] = {};
    srand(100);
    for (int i = 0; i < size;i++){
        arr[i] = rand();
    }

    {
    // 记录开始时间点
    auto start = std::chrono::high_resolution_clock::now();

    quick_sort(arr,0,size-1);

    // 记录结束时间点
    auto end = std::chrono::high_resolution_clock::now();

    // 计算程序执行时间（以毫秒为单位）
    auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(end - start).count();

    // 输出执行时间
    std::cout << "快速排序执行时间: " << duration << " 毫秒" << std::endl;
    }
    srand(100);
    for (int i = 0; i < size;i++){
        arr[i] = rand();
    }

    {
    // 记录开始时间点
    auto start = std::chrono::high_resolution_clock::now();

    bubble_sort(arr,size);

    // 记录结束时间点
    auto end = std::chrono::high_resolution_clock::now();

    // 计算程序执行时间（以毫秒为单位）
    auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(end - start).count();

    // 输出执行时间
    std::cout << "冒泡执行时间: " << duration << " 毫秒" << std::endl;
    }
    srand(100);
    for (int i = 0; i < size;i++){
        arr[i] = rand();
    }

    {
    // 记录开始时间点
    auto start = std::chrono::high_resolution_clock::now();

    select_sort(arr,size);

    // 记录结束时间点
    auto end = std::chrono::high_resolution_clock::now();

    // 计算程序执行时间（以毫秒为单位）
    auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(end - start).count();

    // 输出执行时间
    std::cout << "选择执行时间: " << duration << " 毫秒" << std::endl;
    }


    return 0;
}
