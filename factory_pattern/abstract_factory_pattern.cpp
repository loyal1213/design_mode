#include "abstract_factory_pattern.h"

BlackCoat::BlackCoat() :Coat(), m_strColor("Black Coat") {
}

const std::string& BlackCoat::color() {
	std::cout << m_strColor.data() << std::endl;
	return m_strColor;
}

WhiteCoat::WhiteCoat() :Coat(), m_strColor("White Coat") {
}

const std::string& WhiteCoat::color() {
	std::cout << m_strColor.data() << std::endl;
	return m_strColor;
}



BlackPants::BlackPants() : Pants(), m_strColor("Black Pants") {
}

const std::string& BlackPants::color() {
	std::cout << m_strColor.data() << std::endl;
	return m_strColor;
}

WhitePants::WhitePants() :Pants(), m_strColor("White Pants") {
}

const std::string& WhitePants::color() {
	std::cout << m_strColor.data() << std::endl;
	return m_strColor;
}

Coat* WhiteFactory::createCoat() {
	return new WhiteCoat();
}

Pants* WhiteFactory::createPants() {
	return new WhitePants();
}

Coat* BlackFactory::createCoat() {
	return new BlackCoat();
}

Pants* BlackFactory::createPants() {
	return new BlackPants();
}


int test_abstract_factory_pattern() {

	ClothesFactory* p_white_clothes_factory = new WhiteFactory();
	Coat* p_white_coat = p_white_clothes_factory->createCoat();
	std::cout << "white_roat_ret: " << p_white_coat->color() << std::endl;

	Pants* p_white_pants = p_white_clothes_factory->createPants();
	std::cout << "white_pants_ret: " << p_white_pants->color() << std::endl;


	ClothesFactory* p_black_factory = new BlackFactory();
	Coat* p_black_coat = p_black_factory->createCoat();
	std::cout << "black_roat_ret: " << p_white_coat->color() << std::endl;

	Pants* p_black_pants = p_black_factory->createPants();
	std::cout << "black_pants_ret: " << p_black_pants->color() << std::endl;


	return 0;
}

