#pragma once

/*
1.2����������ģʽ
����һ����������Ľӿڣ�������ȥ������ʵ����ӿ�����ɾ���Ĵ��������������Ҫ�����µĲ�Ʒ�ֻ࣬��Ҫ��չһ����Ӧ�Ĺ����༴�ɡ�

ȱ�㣺��Ʒ�����ݽ϶�ʱ����Ҫʵ�ִ����Ĺ����࣬�����������˴�������
*/

/*
�ؼ����룺 ������������������ִ��
*/
#include <iostream>

// ��Ʒ������
class Missile {
public:
	virtual const std::string& type() = 0;
};

// ����Ĳ�Ʒ��
class Missile56 :public Missile {
public:
	Missile56();

	// ͨ�� Missile �̳�
	virtual const std::string& type() override;
private:
	std::string m_strtype;
};


// ����Ĳ�Ʒ��
class Missile96 :public Missile {
public:
	Missile96();

	// ͨ�� Missile �̳�
	virtual const std::string& type() override;
private:
	std::string m_strtype;
};

// ���󹤳��࣬�ṩһ�������ӿ�
class MissleFactory {
public:
	// �ṩ������Ʒʵ���Ľӿڣ����س����Ʒ��
	virtual Missile* createMissle() = 0;
};