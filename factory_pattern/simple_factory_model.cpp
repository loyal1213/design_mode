#include "simple_factory_model.h"
#include "factory_method_pattern.h"

Tank56::Tank56() :Tank(), m_strType("Tank56") {
}

const std::string& Tank56::Type(){
	// TODO: 在此处插入 return 语句
}


Tank96::Tank96() :Tank(), m_strType("Tank96") {}

const std::string& Tank96::type() {
	// TODO: 在此处插入 return 语句
	std::cout << m_strType.data() << std::endl;
	return m_strType;
}

Tank* TankFactory::createTank(Tank_Type type) {
	switch (type) {
	case Tank_Type::Tank_Type_56:return new Tank56();
	case Tank_Type::Tank_Type_96: return new Tank96();
	default: return nullptr;
	}
}

int test_simple_factory() {
	std::cout << "Hello World!\n";
	TankFactory* factory = new TankFactory();

	Tank* tank56 = factory->createTank(Tank_Type::Tank_Type_56);

	Tank* tank96 = factory->createTank(Tank_Type::Tank_Type_96);

	tank56->type();
	tank96->type();


	if (tank56 != nullptr) {
		delete tank56;
		tank56 = nullptr;
	}

	if (tank96 != nullptr) {
		delete tank96;
		tank96 = nullptr;
	}

	if (factory != nullptr) {
		delete factory;
		factory = nullptr;
	}

	return 0;
}
