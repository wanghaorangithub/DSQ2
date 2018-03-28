// DSQ2.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include"mystack.h"
#include <string> 
using namespace std;
int main()
{
	MyStack <int> mystack;
	mystack.push(1);
	cout << mystack.getTop() << endl;
	cout << mystack.pop() << endl;
	cout << mystack.isEmpty();
    return 0;
}

