#ifndef POLYTYPE_H
#define POLYTYPE_H

#include <iostream>
#include <memory>

struct BaseType
{
	virtual std::ostream &print(std::ostream &out) = 0;
};

class IntType : public BaseType
{
	int d_value = 0;
	
	public:
		IntType(int value);
		
		std::ostream &print(std::ostream &out) override;
};

class StringType : public BaseType
{
	std::string d_value;
	
	public:
		StringType(std::string value);
		
		std::ostream &print(std::ostream &out) override;
};

class DoubleType : public BaseType
{
	double d_value = 0;
	
	public:
		DoubleType(double value);
		
		std::ostream &print(std::ostream &out) override;
};

#endif
