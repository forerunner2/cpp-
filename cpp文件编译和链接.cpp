/*
(1)编译
普通编译：
g++ 文件名.cpp
指定标准：
g++ 文件名.cpp --std=c++11
指定输出文件名：
g++ 文件名.cpp -o 输出文件名(默认a.out,windows下为a.exe)
完整的编译：
g++ 文件名.cpp -- std=c++11 -o 输出文件名
运行：
./输出文件名

当然，编译时，文件名.cpp、 -o 输出文件名、--std=c++11 的顺序可以随意调换

(2)上面所讲的编译应该是：编译并链接(生成可执行文件)
如果要仅编译：
g++ -c 文件名.cpp
如果要仅链接：
g++ 文件名.o -o 输出文件名
当然，可以一次性连接好几个文件，生成一个可执行文件(这种主要是一个程序的实现需要调用外部文件中定义的函数时用到的。但需要注意的是，需要声明函数 放在 文件名.hpp文件中)：
g++ 文件名1.o 文件名2.o -o 输出文件名
这种方式，需要在编译时，将文件名.hpp文件也编译进去。


如下例子：
//文件名：main.cpp
#include <iostream>
#include "mul.hpp"

using namespace std;
int main()
{
    int a = 0, b = 0;
    int result = 0;

    cout << "Pick two integers:";
    cin >> a;
    cin >> b;

    result = mul(a, b);

    cout << "The result is " << result << endl;
    return 0;
}



//文件名：mul.cpp
#include "mul.hpp"

int mul(int a, int b)
{
    int c = a / b;
    return c;
}


//文件名：mul.hpp
#pragma once

int mul(int a, int b);



(4)预处理指令
预处理指令以#开头，并且必须是该行上的第一个非空字符，当编译器发现一个预处理指令时，它会忽略该行中#号之后的部分。预处理指令不是C++语句，所以它们不会以分号;结尾，并且它们的执行是在编译之前，不是在编译期间。
预处理可以用图1来表示：预处理器处理预处理指令，然后编译器进行编译和链接。

*/


//C++ example in C++11
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    vector<string> msg {"Hello", "C++", "World", "!"};
    
    for (const string& word : msg)
    {
        cout << word << " ";
    }
    cout << endl;
    return 0;
}
