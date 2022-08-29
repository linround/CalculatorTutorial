// CalculatorTutorial.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//


/*
有时，文件名使用尖括号 (<>) 括起来；其他情况下，使用引号 (" ") 括起来。
通常，引用 C++ 标准库时使用尖括号，引用其他文件时使用引号。
*/


#include <iostream>
#include "Calculator.h"
/*
using namespace std; 行提示编译器期望在此文件中使用 C++ 标准库中的内容。
如果没有此行，库中的每个关键字都必须以 std:: 开头，以表示其范围。
例如，如果没有该行，则对 cout 的每个引用都必须写为 std::cout。
using 语句的使用是为了使代码看起来更干净。
*/
using namespace std;


/*
所有 C++ 语句都必须以分号结尾，所有 C++ 应用程序都必须包含 main() 函数。
该函数是程序开始运行时运行的函数。 
若要使用所有代码，必须可从 main() 访问所有代码
*/
int main()
{
    double x = 0.0;
    double y = 0.0;
    double result = 0.0;
    char oper = '+';
    /*
    cout 关键字用于在 C++ 中打印到标准输出。 
    这个<< 运算符提示编译器将其右侧的任何内容发送到标准输出

    “endl”关键字与 Enter 键类似；用于结束该行并将光标移动到下一行 。 
    如果要执行相同的操作，最好在字符串中使用 \n用 "" 包含），
    因为使用 endl 会始终刷新缓冲，进而可能影响程序的性能，
    但由于这是一个非常小的应用，所以改为使用 endl 以提高可读性。
    */
    cout << "Hello World!\n";
    cout << "application console \n \n";
    cout << "Please enter the operation to perform. Format: a+b | a-b\n";

    Calculator c;
    while (true)
    {
        cin >> x >> oper >> y;
        cout << "X is:" << x << endl;

        cout << "Oper is:" << oper << endl;

        cout << "Y is:" << y << endl;

        if (oper == '/' && y == 0) {
            cout << "输入错误：\n";
            continue;
        }
        result = c.Calculate(x, oper, y);
        cout << "Result is:" << result << endl;
    }


    return 0;
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
