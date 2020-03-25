/*==========================================

第二題-成績平均

==========================================*/

#include <iostream>
#include <string> //會用到 string
using namespace std;

// Score 類別
class Score
{
public:
    // 建構子
    Score(string newName, int newMath, int newChinese);
    // 設定名字
    void setName(string newName);
    // 取得名字
    string getName();
    // 設定數學分數
    void setMath(int newMath);
    // 取得數學分數
    int getMath();
    // 設定國文分數
    void setChinese(int newChinese);
    // 取得國文分數
    int getChinese();
    // 取得數學與國文成績平均
    int getAverage();

private:
    // 資料欄位(data fields) 為 private，分別有名字、數學分數、國文分數
    string name;
    int math;
    int chinese;
};

// 建構子實作
Score::Score(string newName, int newMath, int newChinese)
{
    name = newName;
    math = newMath;
    chinese = newChinese;
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
// 設定數學分數實作
void Score::setMath(int newMath)
{
    math = newMath;
}
// 取得數學分數實作
int Score::getMath()
{
    return math;
}
// 設定國文分數實作
void Score::setChinese(int newChinese)
{
    chinese = newChinese;
}
// 取得國文分數實作
int Score::getChinese()
{
    return chinese;
}
// 取得數學與國文成績平均實作
int Score::getAverage()
{
    return (math + chinese) / 2;
}

// 主函式
int main()
{
    //宣告兩個欲輸入的變數，為名字與分數
    string name;
    int math;
    // 輸入
    cin >> name >> math;
    // 宣告兩個物件
    Score score1("John", 90, 80);
    Score score2("Mary", 80, 75);
    // 設定名字與分數
    score1.setName(name);
    score2.setMath(math);
    // 輸出二個物件的名字與分數
    cout << score1.getName() << " " << score1.getAverage() << endl;
    cout << score2.getName() << " " << score2.getAverage() << endl;

    return 0;
}