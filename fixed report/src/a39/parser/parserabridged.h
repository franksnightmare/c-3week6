...
	// arithmetic functions:
        void display(double &value);
        void done();
        void prompt();
		RuleValue &exp(RuleValue &value);
		RuleValue &ln(RuleValue &value);
		RuleValue &sin(RuleValue &value);
		RuleValue &asin(RuleValue &value);
		RuleValue &sqrt(RuleValue &value);
		RuleValue &abs(RuleValue &value);
		
		RuleValue &deg(RuleValue &value);		
		RuleValue &grad(RuleValue &value);
		RuleValue &rad(RuleValue &deg);
		RuleValue &rad(RuleValue &grad);
		
		double const pi = 3.14159;
		double const e = 2.71828;
};

#endif
