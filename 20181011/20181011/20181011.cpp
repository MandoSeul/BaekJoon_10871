// 20181011.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include "pch.h"
#include <iostream>
#include<vector>
using namespace std;

int main()
{
	int n,x,temp;
	vector<int> v;
	cin >> n >> x;
	for (int i = 0; i < n; i++) {
		cin >> temp;
		if(temp < x) v.push_back(temp);
	}
	for(int j=0; j<v.size(); j++)
	cout << v[j] << " ";
}
