/*==========================================

第四題-物件組合

==========================================*/

#include <iostream>
#include <string> // 會用到 string
using namespace std;
// Date 類別
class Date
{
public:
    // 預設建構子
    Date();
    // 三個參數的建構子
    Date(int, int, int);
    // 設定月
    void setMonth(int);
    // 設定日
    void setDay(int);
    // 設定年
    void setYear(int);
    // 取得月
    int getMonth() const;
    // 取得日
    int getDay() const;
    // 取得年
    int getYear() const;
    // 輸出函式
    void print();

private:
    // 資料欄位(data fields) 為 private，分別有年、月、日
    int month;
    int day;
    int year;
};
// 預設建構子實作
Date::Date()
{
    // 若無，可不用寫
}
// 三個參數的建構子實作
Date::Date(int newMonth, int newDay, int newYear)
{
    month = newMonth;
    day = newDay;
    year = newYear;
}
// 設定月實作
void Date::setMonth(int newMonth)
{
    month = newMonth;
}
// 設定日實作
void Date::setDay(int newDay)
{
    day = newDay;
}
// 設定年實作
void Date::setYear(int newYear)
{
    year = newYear;
}
// 取得月實作
int Date::getMonth() const
{
    return month;
}
// 取得日實作
int Date::getDay() const
{
    return day;
}
// 取得年實作
int Date::getYear() const
{
    return year;
}
// 輸出函式實作
void Date::print()
{
    cout << getMonth() << "/" << getDay() << "/" << getYear();
}

// Student 類別
class Student
{
public:
    // 三個參數的建構子
    Student(string newName, Date newBirthDay, int newScore);
    // 設定名字
    void setName(string);
    // 設定生日
    void setDate(Date);
    // 設定分數
    void setScore(int);
    // 取得姓名
    string getName() const;
    // 取得生日
    Date getDate() const;
    // 取得分數
    int getScore() const;
    // 輸出函式
    void print();

private:
    // 資料欄位(data fields) 為 private，分別有姓名、生日、分數
    string name;
    Date birthDay;
    int score;
};
// 三個參數的建構子實作
Student::Student(string newName, Date newBirthDay, int newScore)
{
    name = newName;
    birthDay = newBirthDay;
    score = newScore;
}
// 設定名字實作
void Student::setName(string newName)
{
    name = newName;
}
// 設定生日實作
void Student::setDate(Date newBirthDay)
{
    birthDay = newBirthDay;
}
// 設定分數實作
void Student::setScore(int newScore)
{
    score = newScore;
}
// 取得姓名實作
string Student::getName() const
{
    return name;
}
// 取得生日實作
Date Student::getDate() const
{
    return birthDay;
}
// 取得分數實作
int Student::getScore() const
{
    return score;
}
// 輸出函式實作
void Student::print()
{
    cout << getName() << " ";
    getDate().print();
    cout << " " << getScore() << endl;
}
// 主函式
int main()
{
    // 宣告兩個 Student 物件
    Student student1("John", Date(6, 1, 1999), 90);
    Student student2("Marry", Date(10, 8, 1997), 80);
    // 宣告一個欲輸入姓名與年月日變數
    string name;
    int day, month, year;
    // 輸入
    cin >> name >> month >> day >> year;
    // 修改第一個學生名字與第二個學生生日
    student1.setName(name);
    student2.setDate(Date(month, day, year));
    // 利用 print 函式輸出兩個物件
    student1.print();
    student2.print();

    return 0;
}