#include <iostream>
using namespace std;

// 오늘의 주제 : 생성자와 소멸자

// [생성자 (Constructor) 와 소멸자 (Destructor)
// 클래스에 '소속' 된 함수들을 멤버 함수라고 함.
// 이 중에서 굉장히 특별한 함수 2종이 있는데, 바로[시작] 과 [끝]을 알리는 함수들
// - 시작(탄생) ->생성자(여러개 존재 가능)
// - 끝(소멸) -> 소멸자(오직 1개만)

// class 는 일종의 설계도


// [암시적(Implicit) 생성자]
// 생성자를 명시적으로 만들지 않으면, 
// 아무 인자도 받지 않는 [기본생성자]가 컴파일러에 의해 자동으로 만들어짐.
// -> 그러나 우리가 명시적(Explicit)으로 아무 생성자 하나 만들면,
// 자동으로 만들어지던 [기본 생성자]는 더 이상 만들어지지 않음.
class Knight
{
public:
	// [1] 기본 생성자 (인자가 없음)
	// 탄생과 즉시 호출이 되고있다.
	Knight()
	{
		cout << "Knight() 기본생성자 호출 " << endl;
		m_Hp = 100;
		m_Attack = 10;
		m_PosY = 0;
		m_PosX = 0;
	}

	// [2] 복사 생성자. (자기 자신의 클래스 참조 타입을 인자로 받음)
	// 어떤 다른 객체를 이용해서 복사해서 만들겠다.
	// 일반적으로 '똑같은' 데이터를 지닌 객체가 생성되길 기대한다.
	Knight(const Knight& knight)
	{
		m_Hp = knight.m_Hp;
		m_Attack = knight.m_Attack;
		m_PosX = knight.m_PosX;
		m_PosY = knight.m_PosY;
	}

	// [기타 생성자.]
	// 이 중에서 인자를 1개만 받는 [기타 생성자]를
	// [타입 변환 생성자]라고 부르기도 함.
	Knight(int hp)
	{
		cout << "Knight(int) 생성자 호출" << endl;

		m_Hp = hp;
		m_Attack = 10;
		m_PosY = 0;
		m_PosX = 0;
	}

	/*
	* 명시적인 용도로만 사용할것! 그러니까 타입변환 이런걸 막는데 쓰는거다!
	explicit Knight(int hp)
	{
		cout << "Knight(int) 생성자 호출" << endl;

		m_Hp = hp;
		m_Attack = 10;
		m_PosY = 0;
		m_PosX = 0;
	}*/

	

	// 소멸자는 오직 1개만 존재 할 수 있다.
	~Knight()
	{
		cout << "~Knight() 소멸자 호출" << endl;
	}

	// 멤버 함수 선언
	void Move(int y, int x);
	void Attack();
	void Die()
	{
		m_Hp = 0; 
		cout << "Die" << endl;
	}
public:
	int m_Hp;
	int m_Attack;
	int m_PosY;
	int m_PosX;
};

void Knight::Move(int y, int x)
{
	m_PosY = y;
	m_PosX = x;
	cout << "Move" << endl;
}

void Knight::Attack()
{
	cout << "Attack : " << endl;
}

int main()
{
	Knight k1;
	k1.m_Hp = 100;
	k1.m_Attack = 10;
	k1.m_PosY = 0;
	k1.m_PosX = 0;

	Knight k2(190);


	// 복사 생성자 사용. 
	Knight k3(k1);	// 복사 생성자

	Knight k4 = k1; // 복사 생성자

	Knight k5;	//	생성자
	k5 = k1;	//	복사

	k1.Move(2, 2);
	k1.Attack();
	k1.Die();

	// 암시적 형 변환 -> 컴파일러가 알아서 바꿔치기
	int num = 1;

	float f = (float)num;	// 명시적 < 우리가 코드로 num을 float 바구니에 넣으라고 주문 하고 있음.
	double d = num; // 암시적

	return 0;
}