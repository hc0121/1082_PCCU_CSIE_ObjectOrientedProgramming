/*==========================================

第三題-BMI Calculate

==========================================*/

#include <iostream>
#include <iomanip> // 因需要使用 setprecision
using namespace std;

// 主函式
int main()
{
    // 宣告三個數，分別為姓名、體重、身高
    string name;
    double weight, height;
    // 輸入姓名、體重、身高
    cin >> name >> weight >> height;
    // 輸入姓名與計算 BMI 後輸出
    cout << name << " " << setprecision(2) << fixed
         << weight / (height * height) << endl;
    return 0;
}