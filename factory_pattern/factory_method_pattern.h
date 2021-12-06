#pragma once

/*
1.2、工厂方法模式
定义一个创建对象的接口，其子类去具体现实这个接口以完成具体的创建工作。如果需要增加新的产品类，只需要扩展一个相应的工厂类即可。

缺点：产品类数据较多时，需要实现大量的工厂类，这无疑增加了代码量。
*/

/*
关键代码： 创建过程在其子类中执行
*/
#include <iostream>

// 产品抽象类
class Missile {
public:
	virtual const std::string& type() = 0;
};

// 具体的产品类
class Missile56 :public Missile {
public:
	Missile56();

	// 通过 Missile 继承
	virtual const std::string& type() override;
private:
	std::string m_strtype;
};


// 具体的产品类
class Missile96 :public Missile {
public:
	Missile96();

	// 通过 Missile 继承
	virtual const std::string& type() override;
private:
	std::string m_strtype;
};

// 抽象工厂类，提供一个创建接口
class MissileFactory {
public:
	// 提供创建产品实例的接口，返回抽象产品类
	virtual Missile* createMissile() = 0;
};

//具体的创建工厂类，使用抽象工厂类提供的接口，去创建具体的产品实例
class Missile56Factory : public MissileFactory {
public:
	Missile* createMissile() override;
};

//具体的创建工厂类，使用抽象工厂类提供的接口，去创建具体的产品实例
class Missile96Factory : public MissileFactory {
public:
	Missile* createMissile() override;
};


int test_factory_method_pattern();