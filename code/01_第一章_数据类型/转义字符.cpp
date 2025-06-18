//
// Created by MKING on 2025/6/18.
//
#include <iostream>
using namespace std;

int main()
{
    // 转义字符  \t 制表符
    cout << "hellohhhhh\tyourworld" << endl;
    cout << "hello\tmyworld" << endl;

    // 转义字符  \n 换行符
    cout << "hello\nmyworld" << endl;

    // 转义字符  \r 回车符
    cout << "hello\rmyworld" << endl;

    // 转义字符  \b 退格符
    cout << "hello\bmyworld" << endl;

    // \\表示一个 反斜杠
    cout << "hello\\myworld" << endl;

    // 转义字符  \" 双引号
    cout << "hello\"myworld" << endl;

    // 转义字符  \' 单引号
    cout << "hello\'myworld" << endl;
    system("pause");
    return 0;
}