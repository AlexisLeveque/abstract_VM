//
// Created by PC on 01/07/2018.
//

#include <string>
#include <cstdint>
#include "IOperand.hpp"

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

IOperand const * createInt8( std::string const & value ) const {
	if (checkOverflow(value, std::to_string(INT8_MAX))) {
	//trow except
	}
	if (checkUnderflow(value, std::to_string(INT8_MIN))) {
		//trow except
	}
}

IOperand const * createInt16( std::string const & value ) const {
	if (checkOverflow(value, std::to_string(INT16_MAX))) {
		//trow except
	}
	if (checkUnderflow(value, std::to_string(INT16_MIN))) {
		//trow except
	}
}

IOperand const * createInt32( std::string const & value ) const {
	if (checkOverflow(value, std::to_string(INT32_MAX))) {
		//trow except
	}
	if (checkUnderflow(value, std::to_string(INT32_MIN))) {
		//trow except
	}
}

IOperand const * createFloat( std::string const & value ) const {
	try {
		std::stof(value);
	}
	catch (std::exception & e) {

	}

}

IOperand const * createDouble( std::string const & value ) const {
	try {
		std::stod(value);
	}
	catch (std::exception & e) {

	}
}

IOperand const * createOperand( eOperandType type, std::string const & value ) const {
	IOperand const * (*tab[5])(std::string const & value) = {&createInt8, &createInt16, &createInt32, &createFloat, &createDouble};
	return tab[type](value);
}