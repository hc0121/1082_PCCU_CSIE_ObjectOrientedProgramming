/*==========================================

第二題-Swap function in main

==========================================*/

#include <iostream>
#include <iomanip> // 將會使用到 setprecision
using namespace std;

// Rectangle 類別
class Rectangle
{
public:
    // 預設建構子
    Rectangle();
    // 兩個輸入參數的建構子
    Rectangle(double, double);
    // 設定寬
    void setWidth(double);
    // 設定高
    void setHeight(double);
    // 取得寬
    double getWidth();
    // 取得高
    double getHeight();
    // 取得面積
    double getArea();

private:
    // 資料欄位(data fields) 為 private，分別有寬、高
    double width;
    double height;
};
// 預設建構子實作
Rectangle::Rectangle()
{
    width = 1;
    height = 1;
}
// 兩個輸入參數的建構子實作
Rectangle::Rectangle(double width, double height)
{
    this->width = width;
    this->height = height;
}
// 設定寬實作
void Rectangle::setWidth(double newWidth)
{
    width = newWidth;
}
// 設定高實作
void Rectangle::setHeight(double newHeight)
{
    height = newHeight;
}
// 取得寬實作
double Rectangle::getWidth()
{
    return width;
}
// 取得高實作
double Rectangle::getHeight()
{
    return height;
}
// 取得面積實作
double Rectangle::getArea()
{
    return width * height;
}
// 透過 Reference 交換實作 (主程式觀點)
void swapByReference(Rectangle &r1, Rectangle &r2)
{
    Rectangle temp = r1;
    r1 = r2;
    r2 = temp;
}
// 透過 Pointer 交換實作 (主程式觀點)
void swapByPointer(Rectangle *p1, Rectangle *p2)
{
    Rectangle temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}
// 主程式
int main()
{
    // 宣告四個欲輸入的值，分別為兩組寬、高
    double a, b, c, d;
    // 輸入值
    cin >> a >> b >> c >> d;
    // 宣告兩個物件
    Rectangle rectangle1(a, b);
    Rectangle rectangle2(c, d);
    // 進行 Reference 交換
    cout << "SwapByReference:";
    cout << fixed << setprecision(2) << rectangle1.getArea() << " " << rectangle2.getArea();
    swapByReference(rectangle1, rectangle2);
    cout << " to " << rectangle1.getArea() << " " << rectangle2.getArea() << endl;
    // 進行 Pointer 交換
    cout << "SwapByPointer:";
    cout << rectangle1.getArea() << " " << rectangle2.getArea();
    swapByPointer(&rectangle1, &rectangle2);
    cout << " to " << rectangle1.getArea() << " " << rectangle2.getArea() << endl;

    return 0;
}