/*==========================================

第二題-do-while Calculate total

==========================================*/

#include <iostream>
using namespace std;

// 主函式
int main()
{
    // 宣告三個數，分別為欲輸入的兩個值以及儲存總和之值
    int start, end, total = 0;
    // 輸入兩個數
    cin >> start >> end;
    // 根據題意使用 do while 迴圈進行運算
    do
    {
        // 判斷值是否為 2 或 5 的倍數 (也就是能夠整除 2 或 5)
        if (start % 2 == 0 || start % 5 == 0)
            // 若判斷為真，則將值加總至總和變數
            total += start;
    } while (++start <= end); // 計算完將值加 1，若數值超過 end 則結束迴圈
    // 輸入總和
    cout << total << endl;

    return 0;
}