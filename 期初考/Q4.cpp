/*==========================================

第四題-BMI Calculate - Function

==========================================*/

#include <iostream>
#include <iomanip> // 因需要使用 setprecision
using namespace std;

// 計算 BMI 函式 (輸入身高與體重)
double BMI(double weight, double height)
{
    //計算後並回傳
    return weight / (height * height);
}

// 主函式
int main()
{
    // 宣告三個數，分別為姓名、體重、身高
    string name;
    double weight, height;
    // 輸入姓名、體重、身高
    cin >> name >> weight >> height;
    // 輸入姓名與呼叫 BMI 函式後輸出
    cout << name << " " << setprecision(2) << fixed
         << BMI(weight, height) << endl;
    return 0;
}