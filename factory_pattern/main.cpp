#include <iostream>
#include "simple_factory_model.h"
#include "factory_method_pattern.h"
#include "abstract_factory_pattern.h"
int main() {
	// std::cout << "this is sample example ..." << std::endl;

	// 1. ���Լ򵥹���ģʽ
	test_simple_factory_pattern();

	// 2. ���Թ�������ģʽ
	test_factory_method_pattern();

	// 3. ���Գ��󹤳�ģʽ
	test_abstract_factory_pattern();

}