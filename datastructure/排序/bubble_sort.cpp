#include <iostream>
// 将arr升序排列
void bubble_sort(int arr[],int size){
    // 标志冒泡有交换过
    bool flag = false;
    // 为什么要设置一个i:因为最多排序n次，这是最坏的情况，即完全倒序
    for (int i = 0; i < size-1; i++){
        flag = false;
        // 这里j<size-i表示经过了一次冒泡排序后最大的元素一定在最后一个，所以可以忽略
        for (int j = 0; j < size-1-i; j++){
            if (arr[j] > arr[j+1]){
                std::swap(arr[j],arr[j+1]);
                flag = true;
            }
        }
        if (flag == false)
            return;
    }
}
// 以下为测试
//int main(){
//    const int size = 10000;
//    int arr[size] = {};
//    for (int i = 0; i < size;i++){
//        arr[i] = rand()%1000;
//    }
//    bubble_sort(arr,size);
//    for (auto ele : arr)
//        std::cout << ele << ',';
//}
