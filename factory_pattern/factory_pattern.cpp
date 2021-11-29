﻿// 1、工厂模式
// 在工厂模式中，我们在创建对象时不会对客户端暴露创建逻辑，并且是通过使用一个共同的接口来指向新创建的对象。工厂模式作为一种创建模式，一般在创建复杂对象时，
// 考虑使用；在创建简单对象时，建议直接new完成一个实例对象的创建。


// 1.1 1.1、简单工厂模式
// 主要特点是需要在工厂类中做判断，从而创造相应的产品，当增加新产品时，需要修改工厂类。使用简单工厂模式，我们只需要知道具体的产品型号就可以创建一个产品。
// 缺点：工厂类集中了所有产品类的创建逻辑，如果产品量较大，会使得工厂类变的非常臃肿。


// 关键代码： 创建过程在工厂类中完成
#include <iostream>

// 定义产品类型信息
typedef enum {
	Tank_Type_56,
    Tank_Type_96,
    Tank_Type_Num,
}Tank_Type;


// 抽象产品类
class Tank {
public:
	virtual const std::string& type() = 0;
};

// 具体产品类
class Tank56 :public Tank {
public:
    Tank56():Tank(),m_strType("Tank56"){}

    const std::string& type() override {
        std::cout << m_strType.data() << std::endl;
		return m_strType;
    }
private:
    std::string m_strType;
};


// 具体产品类
class Tank96 :public Tank {

public:
    Tank96():Tank(),m_strType("Tank96") {}
	const std::string& type() override {
		std::cout << m_strType.data() << std::endl;
		return m_strType;
	}
private:
    std::string m_strType;
};


// 工厂类
class TankFactory {

public:
    // 根据产品信息创建具体的产品类实例，返回一个抽象产品类
    Tank* createTank(Tank_Type type) {
		switch (type) {
        case Tank_Type::Tank_Type_56:return new Tank56();
        case Tank_Type::Tank_Type_96: return new Tank96();
        default: return nullptr;
        }
    }


};



int main(){
    std::cout << "Hello World!\n";
    TankFactory* factory = new TankFactory();
    
	Tank* tank56 = factory->createTank(Tank_Type::Tank_Type_56);

    Tank* tank96 = factory->createTank(Tank_Type::Tank_Type_96);

    tank56->type();
    tank96->type();


    if (tank56!=nullptr){
        delete tank56;
        tank56 = nullptr;
    }

    if (tank96!=nullptr){
        delete tank96;
        tank96 = nullptr;
    }

    if (factory!=nullptr){
        delete factory;
        factory = nullptr;
    }



    return 0;
}
