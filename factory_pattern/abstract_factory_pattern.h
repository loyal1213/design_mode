#pragma once
/*
* �ؼ����룺��һ��������ۺ϶��ͬ���Ʒ��
* ���´����԰�ɫ�·��ͺ�ɫ�·�Ϊ������ɫ�·�Ϊһ����Ʒϵ�У���ɫ�·�Ϊһ����Ʒϵ�С�
* ��ɫ���´����ɫ����,��ɫ���´����ɫ���֡�
* ÿ��ϵ�е��·���һ����Ӧ�Ĺ�������������һ�������������·��ܱ�֤�·�Ϊͬһ��ϵ�С�
*/

//����������
#include <iostream>
class Coat
{
public:
	virtual const std::string& color() = 0;
};
//��ɫ������
class BlackCoat : public Coat
{
public:
	BlackCoat();
	const std::string& color() override;
private:
	std::string m_strColor;
};
//��ɫ������
class WhiteCoat : public Coat
{
public:
	WhiteCoat();
	const std::string& color() override;
private:
	std::string m_strColor;
};

//���������
class Pants {
public:
	virtual const std::string& color() = 0;
};
//��ɫ������
class BlackPants : public Pants {
public:
	BlackPants();
	const std::string& color() override;
private:
	std::string m_strColor;
};
//��ɫ������
class WhitePants : public Pants {
public:
	WhitePants();
	const std::string& color() override;
private:
	std::string m_strColor;
};

//���󹤳��࣬�ṩ�·������ӿ�
class ClothesFactory {
public:
	//���´����ӿڣ����س���������
	virtual Coat* createCoat() = 0;
	//���Ӵ����ӿڣ����س��������
	virtual Pants* createPants() = 0;
};

//������ɫ�·��Ĺ����࣬����ʵ�ִ�����ɫ���ºͰ�ɫ���ӵĽӿ�
class WhiteFactory : public ClothesFactory {
public:
	Coat* createCoat() override;
	Pants* createPants() override;
};
//������ɫ�·��Ĺ����࣬����ʵ�ִ�����ɫ���ºͰ�ɫ���ӵĽӿ�
class BlackFactory : public ClothesFactory {
	Coat* createCoat() override;
	Pants* createPants() override;
};

int test_abstract_factory_pattern();