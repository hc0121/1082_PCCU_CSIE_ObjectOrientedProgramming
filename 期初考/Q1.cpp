/*==========================================

第一題-Search and Add

==========================================*/

#include <iostream>
using namespace std;

// LinearComp 函式 (傳入使用者輸入值、整數陣列、陣列大小)
int LinearComp(int number, int array[], int size)
{
    // 宣告一個數，儲存加總之值
    int total = 0;
    // 使用for迴圈尋訪陣列每一個值
    for (int i = 0; i < size; i++)
    {
        // 判斷使用者輸入值是否小於陣列中之值
        if (number < array[i])
            //若判斷為真，則將陣列中之值加總至總和變數
            total += array[i];
    }
    // 回傳總和
    return total;
}

// 主函式
int main()
{
    // 宣告三個值，分別為陣列大小、整數陣列、欲輸入值
    const int size = 7;
    int array[size] = {3, 5, 7, 2, 4, 8, 6}, input;
    // 使用者輸入一個數
    cin >> input;
    // 呼叫LinearComp函式，並輸出結果
    cout << LinearComp(input, array, size) << endl;

    return 0;
}