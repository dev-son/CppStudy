#include <iostream>
#include <vector>
#include <list>
#include <stack>
#include <queue>

using namespace std;

// ���� Ž�� Ʈ��

// ���� Ž�� (binary search)
// ��Ȳ) �迭�� �����Ͱ� ���ĵǾ� �ִ�.

// Q) 82��� ���ڰ� �迭�� �ֽ��ϱ�?
// A)
// [1][8][15][23][32][44][56][63][81][91]

vector<int> numbers;

void BinarySearch(int N)
{
//	int left = 0;
//
//	// numbers �� ������� -1�� ���࿩ ����� ���´�.
//	int right = (int)numbers.size() - 1;
//
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//
//		if (N < numbers[mid])
//		{
//			mid += 1;
//		}
//		else if (N > numbers[mid])
//		{
//			mid -= 1;
//		}
//		else
//		{
//			;
//		}
//	}
}

bool BinarySearch2(int* arr, int len, int key)
{
	int start = 0;

	// -1 �ϴ� ������ �ε����� 9���� �ε� �迭�� ũ�⸦ ���ϸ� 10���� ���´�. ������ 10������ ������
	int end = len - 1;

	return true;
}

int main()
{
	numbers = vector<int>{ 1, 8, 15, 23, 32, 44, 56, 63, 81, 91 };
	int arr[10] = { 1, 8, 15, 23, 32, 44, 56, 63, 81, 91 };
	BinarySearch(82);
	
	// �迭�� ũ��
	int len = sizeof(arr) / sizeof(int);
	
	BinarySearch2(arr, len, 63);
}