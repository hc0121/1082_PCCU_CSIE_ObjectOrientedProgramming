/*==========================================

第二題-長方形分開檔案

==========================================*/

#include <iostream>
#include <iomanip> // 因需要使用 setprecision
using namespace std;

// Rectangle 類別
class Rectangle
{
public:
    // 建構子
    Rectangle(double newWidth, double newHeight);
    // 取得面積
    double getArea();
    // 取得周長
    double getPerimeter();

public:
    // 資料欄位(data fields) 為 public，分別有寬度與長度
    double width;
    double height;
};

// 建構子實作
Rectangle::Rectangle(double newWidth, double newHeight)
{
    width = newWidth;
    height = newHeight;
}
// 取得面積實作
double Rectangle::getArea()
{
    return width * height;
}
// 取得周長實作
double Rectangle::getPerimeter()
{
    return (width + height) * 2;
}

// 主函式
int main()
{
    // 宣告四個欲輸入的double變數
    double r1_width, r1_height, r2_width, r2_height;
    // 輸入
    cin >> r1_width >> r1_height >> r2_width >> r2_height;
    // 宣告兩個物件
    Rectangle rectangle_1(r1_width, r1_height);
    Rectangle rectangle_2(r2_width, r2_height);
    // 輸出兩個物件面積與周長
    cout << fixed << setprecision(2);
    cout << rectangle_1.getArea() << " " << rectangle_1.getPerimeter() << endl;
    cout << rectangle_2.getArea() << " " << rectangle_2.getPerimeter() << endl;
    // 修改第二個物件的長與寬
    rectangle_2.width = 5.0;
    rectangle_2.height = 2.5;
    // 輸出第二個物件的面積與周長
    cout << rectangle_2.getArea() << " " << rectangle_2.getPerimeter() << endl;

    return 0;
}