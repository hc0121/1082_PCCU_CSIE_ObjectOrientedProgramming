/*==========================================

第五題-數學成績

==========================================*/

#include <iostream>
using namespace std;

// 類別 Score
class Score
{
public:
    // 建構子
    Score(string newName, int newMath);
    // 設定名字
    void setName(string newName);
    // 取得名字
    string getName();
    // 設定數學成績
    void setMath(int newMath);
    // 取得數學成績
    int getMath();

private:
    // 資料欄位(data fields) 為 private，分別有姓名、數學成績
    string name;
    int math;
};

// 建構子實作
Score::Score(string newName, int newMath)
{
    name = newName;
    math = newMath;
}
// 設定名字實作
void Score::setName(string newName)
{
    name = newName;
}
// 取得名字實作
string Score::getName()
{
    return name;
}
// 設定數學成績實作
void Score::setMath(int newMath)
{
    math = newMath;
}
// 取得數學成績實作
int Score::getMath()
{
    return math;
}

// 主函式
int main()
{
    // 宣告四個值，兩個欲輸入字串、兩個欲輸入浮點數
    string person1_name, person2_name;
    double person1_math, person2_math;
    // 輸入四個值
    cin >> person1_name >> person1_math >> person2_name >> person2_math;
    // 根據題目規定，宣告兩個物件
    Score score1("John", 90);
    Score score2("Mary", 80);
    // 透過 set function 修改第一個人姓名與第二個人數學成績
    score1.setName(person1_name);
    score2.setMath(person2_math);
    // 透過 get function 輸出兩個人姓名與數學成績
    cout << score1.getName() << " " << score1.getMath() << endl;
    cout << score2.getName() << " " << score2.getMath() << endl;

    return 0;
}