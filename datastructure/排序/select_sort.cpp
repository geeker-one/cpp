#include <iostream>
using namespace std;
void select_sort(int arr[],int size){
    for (int i = 0; i < size-1;i++){
        int min_pos = i;
        for (int j = i+1;j < size;j++){
            if (arr[j] < arr[min_pos])
                min_pos = j;
        }
        std::swap(arr[min_pos],arr[i]);
    }
}
/*
int main(){
    const int size = 10000;
    int arr[size] = {};
    for (int i = 0; i < size;i++){
        arr[i] = rand()%10000;
    }
    select_sort(arr,size);
    for (auto ele : arr)
        std::cout << ele << ',';
}
*/
