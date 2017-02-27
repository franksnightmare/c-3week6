#ifndef POLYTYPE_H
#define POLYTYPE_H

#include <memory>

struct BaseType
{
	virtual std::shared_ptr<BaseType> &operator()() {return std::shared_ptr<BaseType>(this)}
};

class IntType : public BaseType
{
	int d_value = 0;
	std::shared_ptr<BaseType> d_ptr;
	
	public:
		IntType(int value) : d_value(value), d_ptr(std::shared_ptr<BaseType>(this)) {}
		
		std::shared_ptr<BaseType> &operator()() override
		{
			return d_ptr;
		}
		
		int value() {return d_value;}
};

class StringType : public BaseType
{
	std::string d_value = 0;
	std::shared_ptr<BaseType> d_ptr;
	
	public:
		StringType(std::string value) : d_value(value), d_ptr(std::shared_ptr<BaseType>(this) {}
		
		std::shared_ptr<BaseType> &operator()() override
		{
			return d_ptr;
		}
		
		std::string value() {return d_value;}
};

class DoubleType : public BaseType
{
	double d_value = 0;
	std::shared_ptr<BaseType> d_ptr;
	
	public:
		DoubleType(double value) : d_value(value), d_ptr(std::shared_ptr<BaseType>(this) {}
		
		std::shared_ptr<BaseType> &operator()() override
		{
			return d_ptr;
		}
		
		double value() {return d_value;}
};

#endif
