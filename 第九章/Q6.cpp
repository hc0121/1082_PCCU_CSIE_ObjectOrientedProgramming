/*==========================================

第六題-成績print

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
    // 輸出函式
    void print();

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
// 輸出函式實作
void Score::print()
{
    cout << getName() << " " << getMath() << endl;
}

// 主函式
int main()
{
    // 宣告兩個值，分別為欲輸入的姓名與數學成績
    string name;
    double math;
    // 輸入兩個值
    cin >> name >> math;
    // 根據題目規定，宣告兩個物件
    Score score1("John", 90);
    Score score2("Mary", 80);
    // 透過 set function 修改第一個人姓名與第二個人數學成績
    score1.setName(name);
    score2.setMath(math);
    // 透過 print function 輸出兩個人姓名與數學成績
    score1.print();
    score2.print();

    return 0;
}