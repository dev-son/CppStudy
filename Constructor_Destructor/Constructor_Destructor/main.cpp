#include <iostream>
using namespace std;

// ������ ���� : �����ڿ� �Ҹ���

// [������ (Constructor) �� �Ҹ��� (Destructor)
// Ŭ������ '�Ҽ�' �� �Լ����� ��� �Լ���� ��.
// �� �߿��� ������ Ư���� �Լ� 2���� �ִµ�, �ٷ�[����] �� [��]�� �˸��� �Լ���
// - ����(ź��) ->������(������ ���� ����)
// - ��(�Ҹ�) -> �Ҹ���(���� 1����)

// class �� ������ ���赵


// [�Ͻ���(Implicit) ������]
// �����ڸ� ��������� ������ ������, 
// �ƹ� ���ڵ� ���� �ʴ� [�⺻������]�� �����Ϸ��� ���� �ڵ����� �������.
// -> �׷��� �츮�� �����(Explicit)���� �ƹ� ������ �ϳ� �����,
// �ڵ����� ��������� [�⺻ ������]�� �� �̻� ��������� ����.
class Knight
{
public:
	// [1] �⺻ ������ (���ڰ� ����)
	// ź���� ��� ȣ���� �ǰ��ִ�.
	Knight()
	{
		cout << "Knight() �⺻������ ȣ�� " << endl;
		m_Hp = 100;
		m_Attack = 10;
		m_PosY = 0;
		m_PosX = 0;
	}

	// [2] ���� ������. (�ڱ� �ڽ��� Ŭ���� ���� Ÿ���� ���ڷ� ����)
	// � �ٸ� ��ü�� �̿��ؼ� �����ؼ� ����ڴ�.
	// �Ϲ������� '�Ȱ���' �����͸� ���� ��ü�� �����Ǳ� ����Ѵ�.
	Knight(const Knight& knight)
	{
		m_Hp = knight.m_Hp;
		m_Attack = knight.m_Attack;
		m_PosX = knight.m_PosX;
		m_PosY = knight.m_PosY;
	}

	// [��Ÿ ������.]
	// �� �߿��� ���ڸ� 1���� �޴� [��Ÿ ������]��
	// [Ÿ�� ��ȯ ������]��� �θ��⵵ ��.
	Knight(int hp)
	{
		cout << "Knight(int) ������ ȣ��" << endl;

		m_Hp = hp;
		m_Attack = 10;
		m_PosY = 0;
		m_PosX = 0;
	}

	/*
	* ������� �뵵�θ� ����Ұ�! �׷��ϱ� Ÿ�Ժ�ȯ �̷��� ���µ� ���°Ŵ�!
	explicit Knight(int hp)
	{
		cout << "Knight(int) ������ ȣ��" << endl;

		m_Hp = hp;
		m_Attack = 10;
		m_PosY = 0;
		m_PosX = 0;
	}*/

	

	// �Ҹ��ڴ� ���� 1���� ���� �� �� �ִ�.
	~Knight()
	{
		cout << "~Knight() �Ҹ��� ȣ��" << endl;
	}

	// ��� �Լ� ����
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


	// ���� ������ ���. 
	Knight k3(k1);	// ���� ������

	Knight k4 = k1; // ���� ������

	Knight k5;	//	������
	k5 = k1;	//	����

	k1.Move(2, 2);
	k1.Attack();
	k1.Die();

	// �Ͻ��� �� ��ȯ -> �����Ϸ��� �˾Ƽ� �ٲ�ġ��
	int num = 1;

	float f = (float)num;	// ����� < �츮�� �ڵ�� num�� float �ٱ��Ͽ� ������� �ֹ� �ϰ� ����.
	double d = num; // �Ͻ���

	return 0;
}