/*==========================================

第三題-stringstream & insert

==========================================*/

#include <iostream>
#include <sstream> // 會用到 stringstream
#include <string>  // 會用到 string
using namespace std;
// 印出字串陣函式
void printStringArray(string word[], int size)
{
    cout << word[size] << endl;
}
// 主程式
int main()
{
    string text;           // 宣告一變數為欲輸入的字串
    getline(cin, text);    // 使用getline輸入方可輸入空白字元
    stringstream ss(text); // 將字串轉換為字串串流
    // 宣告一個大小為10的字串陣列
    string word[10];
    // 利用迴圈處理字串至字串結束
    for (int i = 0; !ss.eof(); i++)
    {
        ss >> word[i];             // 將字串切割後依序放至陣列中
        printStringArray(word, i); // 透過函式輸出陣列中的字串
    }
    // 插入兩個驚嘆號於字串尾部
    text.insert(text.length(), "!!");
    // 輸出字串
    cout << text << endl;

    return 0;
}