/*==========================================

第一題-日期＆時間

==========================================*/

#include <iostream>
using namespace std;

class Date
{
public:
    // 三個參數的建構子
    Date(int, int, int, int, int, int);
    // 設定月
    void setMonth(int);
    // 設定日
    void setDay(int);
    // 設定年
    void setYear(int);
    // 設定時
    void setHour(int);
    // 設定分
    void setMinute(int);
    // 設定秒
    void setSecond(int);
    // 取得月
    int getMonth();
    // 取得日
    int getDay();
    // 取得年
    int getYear();
    // 取得時
    int getHour();
    // 取得分
    int getMinute();
    // 取得秒
    int getSecond();

private:
    // 資料欄位(data fields) 為 private，分別有年、月、日、時、分、秒
    int month;
    int day;
    int year;
    int hour;
    int minute;
    int second;
};

// 三個參數的建構子實作
Date::Date(int newYear, int newMonth, int newDay, int newHour, int newMinute, int newSecond)
{
    month = newMonth;
    day = newDay;
    year = newYear;
    hour = newHour;
    minute = newMinute;
    second = newSecond;
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

// 設定時實作
void Date::setHour(int newHour)
{
    hour = newHour;
}

// 設定分實作
void Date::setMinute(int newMinute)
{
    minute = newMinute;
}

// 設定秒實作
void Date::setSecond(int newSecond)
{
    second = newSecond;
}

// 取得月實作
int Date::getMonth()
{
    return month;
}

// 取得日實作
int Date::getDay()
{
    return day;
}

// 取得年實作
int Date::getYear()
{
    return year;
}

// 取得時實作
int Date::getHour()
{
    return hour;
}

// 取得分實作
int Date::getMinute()
{
    return minute;
}

// 取得秒實作
int Date::getSecond()
{
    return second;
}

// 主函式
int main()
{
    // 宣告兩個 Date 物件
    Date date1(2020, 1, 25, 13, 39, 20), date2(2020, 6, 1, 13, 9, 30);
    // 宣告三個欲輸入年月日變數
    int month, hour, second;
    // 輸入
    cin >> month >> hour >> second;
    // 修改第一個Date的月份與第二個Date的小時與兩個Date秒數
    date1.setMonth(month);
    date2.setHour(hour);
    date1.setSecond(second);
    date2.setSecond(second);
    // 輸出
    cout << date1.getYear() << "-" << date1.getMonth() << "-" << date1.getDay() << " " << date1.getHour() << ":" << date1.getMinute() << ":" << date1.getSecond() << endl;
    cout << date2.getYear() << "-" << date2.getMonth() << "-" << date2.getDay() << " " << date2.getHour() << ":" << date2.getMinute() << ":" << date2.getSecond() << endl;

    return 0;
}