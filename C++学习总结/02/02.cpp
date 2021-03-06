// 02.cpp: 定义控制台应用程序的入口点。
//

/*==================学习途中的其他知识积累===========================
	1、system("color f0"); 改变控制台背景颜色
	2、SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN);		//设置控制台字体颜色颜色
*/

#include "stdafx.h"			//头文件引用
#include <iostream>
#include "windows.h"
#include "00.h"				//引用常量及符号头文件
#include "01.h"				//引用变量头文件
#include "02.h"				//引用数据输入与输出文件


using namespace std;		//命名空间

void main() {				//主函数


	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN);		//设置控制台字体颜色
	printf("====================== 00 常量及符号相关内容 =====================\n");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY);
	Changliang();

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN);
	printf("======================== 01 变量相关内容 =========================\n");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY);
	Bianliang();

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN);
	printf("======================= 02 数据输入与输出  =======================\n");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY);
	ShujvYuShuchu();
}
