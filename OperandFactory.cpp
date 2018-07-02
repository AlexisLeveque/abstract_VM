//
// Created by PC on 02/07/2018.
//

#include "OperandFactory.hpp"

bool checkOverflow(std::string s1, std::string s2){
	if(s1.size() > s2.size()) return true;
	else if(s1.size() < s2.size()) return false;
	else{
		size_t siz=0;
		while (s1.size() < siz) {
			if ( s1[siz] > s2[siz] ) return true;
			else if ( s1[siz] > s2[siz] ) return false;
			++siz;
		}
	}
	return false;
}
// add code for 0 at begining
bool checkUnderflow(std::string s1, std::string s2){
	if (s1[0] != '-') return false;
	if(s1.size() > s2.size()) return true;
	else if(s1.size() < s2.size()) return false;
	else{
		size_t siz=1;
		while (s1.size() < siz) {
			if ( s1[siz] > s2[siz] ) return true;
			else if ( s1[siz] < s2[siz] ) return false;
			++siz;
		}
	}
	return false;
}

OperandFactory::OperandFactory(void) {}

OperandFactory::OperandFactory(OperandFactory const &src) {}

OperandFactory &OperandFactory::operator=(OperandFactory const &rhs) {
	return *this;
}

OperandFactory::~OperandFactory(void) {}


IOperand const * OperandFactory::createInt8( std::string const & value ) const {
	if (checkOverflow(value, std::to_string(INT8_MAX))) {
		//trow except
	}
	if (checkUnderflow(value, std::to_string(INT8_MIN))) {
		//trow except
	}
}

IOperand const * OperandFactory::createInt16( std::string const & value ) const {
	if (checkOverflow(value, std::to_string(INT16_MAX))) {
		//trow except
	}
	if (checkUnderflow(value, std::to_string(INT16_MIN))) {
		//trow except
	}
}

IOperand const * OperandFactory::createInt32( std::string const & value ) const {
	if (checkOverflow(value, std::to_string(INT32_MAX))) {
		//trow except
	}
	if (checkUnderflow(value, std::to_string(INT32_MIN))) {
		//trow except
	}
}

IOperand const * OperandFactory::createFloat( std::string const & value ) const {
	try {
		std::stof(value);
	}
	catch (std::exception & e) {

	}

}

IOperand const * OperandFactory::createDouble( std::string const & value ) const {
	try {
		std::stod(value);
	}
	catch (std::exception & e) {

	}
}



IOperand const* OperandFactory::createOperand( eOperandType type, std::string const & value ) const {
	IOperand const * (OperandFactory::*tab[5])(std::string const & value) const = {&OperandFactory::createInt8,
											  &OperandFactory::createInt16, &OperandFactory::createInt32,
											 &OperandFactory::createFloat, &OperandFactory::createDouble};
	IOperand const * operand = ((*this).*(tab[type]))(value);
	return (operand);
}