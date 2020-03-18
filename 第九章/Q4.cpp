/*==========================================

第四題-物件BMI

==========================================*/

#include <iostream>
#include <iomanip> // 因需要使用 setprecision
using namespace std;

// BMI 類別
class BMI
{
public:
    // 建構子
    BMI(string newName, double newWeight, double newHeight);
    // 取得 BMI
    double getBMI();
    // 取得姓名
    string getName();

private:
    // 資料欄位(data fields) 為 private，分別有姓名、體重、身高
    string name;
    double weight;
    double height;
};

// 建構子實作
BMI::BMI(string newName, double newWeight, double newHeight)
{
    name = newName;
    weight = newWeight;
    height = newHeight;
}
// 取得 BMI 實作
double BMI::getBMI()
{
    return weight / (height * height);
}
// 取得姓名實作
string BMI::getName()
{
    return name;
}

// 主函式
int main()
{
    // 宣告三個變數，分別為姓名、體重、身高
    string name;
    double weight, height;
    // 輸入三個值
    cin >> name >> weight >> height;
    // 將輸入三數宣吿一個 BMI 物件
    BMI person(name, weight, height);
    // 透過 get function 取得姓名與 BMI
    cout << person.getName() << " "
         << fixed << setprecision(2)
         << person.getBMI() << endl;
    return 0;
}