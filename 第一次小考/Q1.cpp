/*==========================================

第一題-數學成績

==========================================*/

#include <iostream>
#include <string> //會用到 string
using namespace std;

// Score 類別
class Score
{
public:
    // 建構子
    Score(string newName, int newMath);
    // 設定名字
    void setName(string newName);
    // 取得名字
    string getName();
    // 設定分數
    void setMath(int newMath);
    // 取得分數
    int getMath();

private:
    // 資料欄位(data fields) 為 private，分別有名字與分數
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
// 設定分數實作
void Score::setMath(int newMath)
{
    math = newMath;
}
// 取得分數實作
int Score::getMath()
{
    return math;
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
    Score score1("John", 90);
    Score score2("Mary", 80);
    // 設定名字與分數
    score1.setName(name);
    score2.setMath(math);
    // 輸出二個物件的名字與分數
    cout << score1.getName() << " " << score1.getMath() << endl;
    cout << score2.getName() << " " << score2.getMath() << endl;

    return 0;
}