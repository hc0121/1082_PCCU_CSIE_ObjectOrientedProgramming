/*==========================================

第二題-函數傳遞物件陣列 

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
    double getWidth();
    // 設定長
    void setHeight(double);
    // 取得長
    double getHeight();
    // 取得面積
    double getArea();

private:
    // 資料欄位(data fields) 為 private，分別有寬度與長度
    double width, height;
};
// 預設建構子實作
Rectangle::Rectangle()
{
    // 若無，可不用寫
}
// 設定寬實作
void Rectangle::setWidth(double newWidth)
{
    width = newWidth;
}
// 取得寬實作
double Rectangle::getWidth()
{
    return width;
}
// 設定長實作
void Rectangle::setHeight(double newHeight)
{
    height = newHeight;
}
// 取得長實作
double Rectangle::getHeight()
{
    return height;
}
// 取得面積實作
double Rectangle::getArea()
{
    return width * height;
}

// 計算陣列總和函式
double sum(Rectangle rectArray[], int size)
{
    double sum = 0;

    for (int i = 0; i < size; i++)
        sum += rectArray[i].getArea();

    return sum;
}
// 印出陣列函式
void printRectangleArray(Rectangle rectArray[], int size)
{
    for (int i = 0; i < size; i++)
        cout << rectArray[i].getWidth() << " " << rectArray[i].getHeight() << " " << rectArray[i].getArea() << endl;

    cout << "Total: " << sum(rectArray, size) << endl;
}
// 主函式
int main()
{
    // 宣告一個常數為陣列大小
    const int SIZE = 4;
    // 宣告兩個浮點數變數為欲輸入值
    double height, width;
    // 宣告一個 Rectangle 物件之陣列
    Rectangle rectArray[SIZE];
    // 以迴圈輸入後並儲存至陣列中
    for (int i = 0; i < SIZE; i++)
    {
        // 陣列中每一格皆是獨立的物件
        cin >> width >> height;
        rectArray[i].setWidth(width);
        rectArray[i].setHeight(height);
    }
    // 利用函式輸出結果
    printRectangleArray(rectArray, SIZE);

    return 0;
}