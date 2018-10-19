#pragma once

/*=================数据输入与输出====================
	C++的流通过重载运算符“<<”和“>>”执行输入和输出操作。在流操作中，输出操作是从流中提取一个字符序列，所以将左移运算符“<<”称为插入运算符。输入操作是从流中提取一个字符序列，所有将右移运算符“>>”称为提取运算符。
	1、cout语句一般格式：
		cout<<表达式1<<表达式2<<表达式n
	2、cin语句一般格式：
		cin>>变量1>>变量2>>变量n		
		(cin代表键盘，cin>>x相当于把键盘输入的数据赋值给变量)
==================================================*/

#include <iostream>
using namespace std;

void ShujvYuShuchu()
{
	cout << "cout的案例"<<endl;
	char ch = 'a';
	bool bl = false;
	cout <<"cout的案例"<< ch << bl << endl;
	
	cout << "cin的案例"<<endl;
	int input;
	printf("请输入一个正整数！！\n");
	cin >> input;
	cout << "输入的值为：" << input << endl;
}