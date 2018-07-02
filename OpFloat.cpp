//
// Created by PC on 01/07/2018.
//

#include "OpFloat.hpp"

OpFloat::OpFloat(void) {}

OpFloat::OpFloat(std::string str) : _nbr(str) {
}

OpFloat::OpFloat(OpFloat const &src) {
	this->_nbr = src.toString();
}

OpFloat &OpFloat::operator=(OpFloat const &rhs) {
	this->_nbr = rhs.toString();
	return *this;
}

OpFloat::~OpFloat(void) {}

int OpFloat::getPrecision() const {
	return _type;
}

eOperandType OpFloat::getType() const {
	return Float;
}

std::string const& OpFloat::toString() const {
	return _nbr;
}

IOperand const* OpFloat::operator+(IOperand const &rhs) const {}

IOperand const* OpFloat::operator-(IOperand const &rhs) const {}

IOperand const* OpFloat::operator*(IOperand const &rhs) const {}

IOperand const* OpFloat::operator/(IOperand const &rhs) const {}

IOperand const* OpFloat::operator%(IOperand const &rhs) const {}
