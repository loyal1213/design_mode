#pragma once
/*
* 关键代码：在一个工厂里聚合多个同类产品。
* 以下代码以白色衣服和黑色衣服为例，白色衣服为一个产品系列，黑色衣服为一个产品系列。
* 白色上衣搭配白色裤子,黑色上衣搭配黑色裤字。
* 每个系列的衣服由一个对应的工厂创建，这样一个工厂创建的衣服能保证衣服为同一个系列。
*/

//抽象上衣类
#include <iostream>
class Coat
{
public:
	virtual const std::string& color() = 0;
};
//黑色上衣类
class BlackCoat : public Coat
{
public:
	BlackCoat();
	const std::string& color() override;
private:
	std::string m_strColor;
};
//白色上衣类
class WhiteCoat : public Coat
{
public:
	WhiteCoat();
	const std::string& color() override;
private:
	std::string m_strColor;
};

//抽象裤子类
class Pants {
public:
	virtual const std::string& color() = 0;
};
//黑色裤子类
class BlackPants : public Pants {
public:
	BlackPants();
	const std::string& color() override;
private:
	std::string m_strColor;
};
//白色裤子类
class WhitePants : public Pants {
public:
	WhitePants();
	const std::string& color() override;
private:
	std::string m_strColor;
};

//抽象工厂类，提供衣服创建接口
class ClothesFactory {
public:
	//上衣创建接口，返回抽象上衣类
	virtual Coat* createCoat() = 0;
	//裤子创建接口，返回抽象裤子类
	virtual Pants* createPants() = 0;
};

//创建白色衣服的工厂类，具体实现创建白色上衣和白色裤子的接口
class WhiteFactory : public ClothesFactory {
public:
	Coat* createCoat() override;
	Pants* createPants() override;
};
//创建黑色衣服的工厂类，具体实现创建黑色上衣和白色裤子的接口
class BlackFactory : public ClothesFactory {
	Coat* createCoat() override;
	Pants* createPants() override;
};

int test_abstract_factory_pattern();