#pragma once

/*=======================变量======================
 *	❀定义：
 *		变量是指程序在运行时其值可改变的量。每个变量都有一个变量标识，每个变量又具有一定的数据类型。
 *		声明变量形式如下：
 *				[修饰符] 类型 变量名标识符	
 *
 *
 *
=================================================*/

#include <iostream>
using namespace std;

void Bianliang() {

	printf("---------------------整形变量----------------------\n");
	cout << "//[signed] 无符号  unsigned 有符号" << endl;
	cout << "int a\t" << "整型" << endl;
	cout << "short int b\t" << "短整型" << endl;
	cout << "long int c\t" << "长整型" << endl;

	printf("---------------------实型变量----------------------\n");
	cout << "float X\t" << "单精度" << endl;
	cout << "double y\t" << "双精度" << endl;
	cout << "long double z\t" << "长双精度" << endl;

	printf("---------------------字符变量----------------------\n");
	cout << "char ch1\t" << "字符变量" << endl;
	printf("---------------------变量赋值----------------------\n");

	cout << "变量名标识符 = 表达式" << endl;
	cout << "int i\t" <<"i = 1"<< endl;
	cout << "char ch\t" <<"ch = 'a'"<< endl;

}
