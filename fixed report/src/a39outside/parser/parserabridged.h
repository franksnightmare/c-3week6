...
enum AngleMode
{
	DEGREES,
	RADIANS,
	GRAD
};

#undef Parser
class Parser: public ParserBase
{
    // $insert scannerobject
    Scanner d_scanner;
    
    AngleMode d_angleMode = RADIANS;
...

...
	// arithmetic functions:
		double angleTransform();
		
		void display(RuleValue &value);
        void done();
        void prompt();
		RuleValue exp(RuleValue &value);
		RuleValue ln(RuleValue &value);
		RuleValue sin(RuleValue &value);
		RuleValue asin(RuleValue &value);
		RuleValue sqrt(RuleValue &value);
		RuleValue abs(RuleValue &value);
		
		void deg();		
		void grad();
		void rad();
		
		double const pi = 3.14159;
		double const e = 2.71828;
		RuleValue constant();
};

#endif
