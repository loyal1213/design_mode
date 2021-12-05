#include "factory_method_pattern.h"

Missile56::Missile56() {
}

const std::string& Missile56::type() {
	// TODO: 在此处插入 return 语句
	std::cout << m_strtype.data() << std::endl;
	return m_strtype;
}

Missile96::Missile96() {
}

const std::string& Missile96::type() {
	// TODO: 在此处插入 return 语句
	std::cout << m_strtype.data() << std::endl;
	return m_strtype;
}

Missile* Missile56Factory::createMissile() {
	return new Missile56();
}

Missile* Missile96Factory::createMissile() {
	return new Missile96();
}


int test_factory_method(){
	MissileFactory* factory56 = new Missile56Factory();
	Missile* Missile56 = factory56->createMissile();
	Missile56->type();

	MissileFactory* factory96 = new Missile96Factory();
	Missile* Missile96 = factory96->createMissile();
	Missile96->type();

	delete Missile96;
	Missile96 = nullptr;
	delete factory96;
	factory96 = nullptr;

	delete Missile56;
	Missile56 = nullptr;
	delete factory56;
	factory56 = nullptr;

	return 0;
}

