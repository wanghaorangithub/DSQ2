// DSQ2.cpp : �������̨Ӧ�ó������ڵ㡣
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

