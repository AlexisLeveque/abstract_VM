//
// Created by PC on 01/07/2018.
//

#include "OpDouble.hpp"

OpDouble::OpDouble(void) {}

OpDouble::OpDouble(std::string str) : _nbr(str) {
}

OpDouble::OpDouble(OpDouble const &src) {
	this->_nbr = src.toString();
}

OpDouble &OpDouble::operator=(OpDouble const &rhs) {
	this->_nbr = rhs.toString();
	return *this;
}

OpDouble::~OpDouble(void) {}

int OpDouble::getPrecision() const {
	return _type;
}

eOperandType OpDouble::getType() const {
	return Double;
}

std::string const& OpDouble::toString() const {
	return _nbr;
}

IOperand const* OpDouble::operator+(IOperand const &rhs) const {}

IOperand const* OpDouble::operator-(IOperand const &rhs) const {}

IOperand const* OpDouble::operator*(IOperand const &rhs) const {}

IOperand const* OpDouble::operator/(IOperand const &rhs) const {}

IOperand const* OpDouble::operator%(IOperand const &rhs) const {}
