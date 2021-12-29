#include <iostream>
#include <vector>
#include <list>
#include <stack>
#include <queue>

using namespace std;

// 이진 탐색 트리

// 이진 탐색 (binary search)
// 상황) 배열에 데이터가 정렬되어 있다.

// Q) 82라는 숫자가 배열에 있습니까?
// A)
// [1][8][15][23][32][44][56][63][81][91]

vector<int> numbers;

void BinarySearch(int N)
{
//	int left = 0;
//
//	// numbers 의 사이즈에서 -1을 해줘여 사이즈가 나온다.
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

	// -1 하는 이유는 인덱스가 9까지 인데 배열로 크기를 구하면 10으로 나온다. 갯수가 10개여서 때문에
	int end = len - 1;

	return true;
}

int main()
{
	numbers = vector<int>{ 1, 8, 15, 23, 32, 44, 56, 63, 81, 91 };
	int arr[10] = { 1, 8, 15, 23, 32, 44, 56, 63, 81, 91 };
	BinarySearch(82);
	
	// 배열의 크기
	int len = sizeof(arr) / sizeof(int);
	
	BinarySearch2(arr, len, 63);
}