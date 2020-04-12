/*==========================================

第三題-static const

==========================================*/

#include <iostream>
using namespace std;

// Rectangle 類別
class Rectangle
{
public:
    // 預設建構子
    Rectangle();
    // 設定寬
    void setWidth(double);
    // 取得寬
    double getWidth() const;
    // 設定長
    void setHeight(double);
    // 取得長
    double getHeight() const;
    // 取得面積
    double getArea() const;
    // 取得 Rectangle 次數
    static int getNumOfRect();

private:
    // 資料欄位(data fields) 為 private，分別有寬度與長度
    double width, height;
    // 靜態變數將會固定數字，計算被宣告次數
    static int numOfRect;
};

// 靜態變數需初始化
int Rectangle::numOfRect = 0;

// 預設建構子實作
Rectangle::Rectangle()
{
    // 當每宣告一次物件則將變數加 1
    numOfRect++;
}
// 設定寬實作
void Rectangle::setWidth(double newWidth)
{
    width = newWidth;
}
// 取得寬實作
double Rectangle::getWidth() const
{
    return width;
}
// 設定長實作
void Rectangle::setHeight(double newHeight)
{
    height = newHeight;
}
// 取得長實作
double Rectangle::getHeight() const
{
    return height;
}
// 取得面積實作
double Rectangle::getArea() const
{
    return width * height;
}
// 取得 Rectangle 次數實作
int Rectangle::getNumOfRect()
{
    return numOfRect;
}
// 主函式
int main()
{
    // 宣告一個常數為陣列大小
    const int size = 3;
    // 宣告兩個浮點數變數為欲輸入值
    double height, width;
    // 宣告一個 Rectangle 物件之陣列
    Rectangle rectArray[size];
    // 以迴圈輸入後並儲存至陣列中
    for (int i = 0; i < size; i++)
    {
        cin >> width >> height;
        rectArray[i].setWidth(width);
        rectArray[i].setHeight(height);
        cout << rectArray[i].getWidth() << " " << rectArray[i].getHeight() << " " << rectArray[i].getArea() << endl;
    }
    // 呼叫取得次數函式輸出次數
    cout << Rectangle::getNumOfRect() << " Rectangles" << endl;

    return 0;
}