#include <iostream>
using namespace std;
void quick_sort(int arr[],int left,int right){
    if (right <= left)
        return;
    int pivot = arr[left]; //选取一个基准值后面比较
    int mov_l = left,mov_r = right; //定义两个移动的双指针
    while(mov_r > mov_l){ //退出循环时一定mov_l = mov_r
        while(mov_r > mov_l && arr[mov_r] >= pivot){ //注意细节是大于等于就可以移动指针不然死循环
            mov_r--;
        }
        if (mov_r > mov_l)
            swap(arr[mov_l],arr[mov_r]);
        while(mov_r > mov_l && arr[mov_l] <= pivot){
            mov_l++;
        }
        if (mov_r > mov_l)
            swap(arr[mov_l],arr[mov_r]);
    }
    // 递归调用
    quick_sort(arr,left,mov_l);
    quick_sort(arr,mov_l+1,right);
}

