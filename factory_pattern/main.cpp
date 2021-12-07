#include <iostream>
#include "simple_factory_model.h"
#include "factory_method_pattern.h"
#include "abstract_factory_pattern.h"
int main() {
	// std::cout << "this is sample example ..." << std::endl;

	// 1. 测试简单工厂模式
	test_simple_factory_pattern();

	// 2. 测试工厂方法模式
	test_factory_method_pattern();

	// 3. 测试抽象工厂模式
	test_abstract_factory_pattern();

}