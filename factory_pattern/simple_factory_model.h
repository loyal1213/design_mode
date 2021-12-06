#pragma once
// 1������ģʽ
// �ڹ���ģʽ�У������ڴ�������ʱ����Կͻ��˱�¶�����߼���������ͨ��ʹ��һ����ͬ�Ľӿ���ָ���´����Ķ��󡣹���ģʽ��Ϊһ�ִ���ģʽ��һ���ڴ������Ӷ���ʱ��
// ����ʹ�ã��ڴ����򵥶���ʱ������ֱ��new���һ��ʵ������Ĵ�����

// 1.1 1.1���򵥹���ģʽ
// ��Ҫ�ص�����Ҫ�ڹ����������жϣ��Ӷ�������Ӧ�Ĳ�Ʒ���������²�Ʒʱ����Ҫ�޸Ĺ����ࡣʹ�ü򵥹���ģʽ������ֻ��Ҫ֪������Ĳ�Ʒ�ͺžͿ��Դ���һ����Ʒ��
// ȱ�㣺�����༯�������в�Ʒ��Ĵ����߼��������Ʒ���ϴ󣬻�ʹ�ù������ķǳ�ӷ�ס�

// �ؼ����룺 ���������ڹ����������
#include <iostream>

// �����Ʒ������Ϣ
typedef enum {
	Tank_Type_56,
	Tank_Type_96,
	Tank_Type_Num,
}Tank_Type;


// �����Ʒ��
class Tank {
public:
	virtual const std::string& type() = 0;
};

// �����Ʒ��
class Tank56 :public Tank {
public:
	Tank56();
	const std::string& type() override;
private:
	std::string m_strType;
};


// �����Ʒ��
class Tank96 :public Tank {
public:
	Tank96();
	const std::string& type() override;
private:
	std::string m_strType;
};


// ������
class TankFactory {
public:
	// ���ݲ�Ʒ��Ϣ��������Ĳ�Ʒ��ʵ��������һ�������Ʒ��
	Tank* createTank(Tank_Type type);
};

int test_simple_factory_pattern();