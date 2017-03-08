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
		
		double constant();
		
		void display(double &value);
        void done();
        void prompt();
		double exp(double &value);
		double ln(double &value);
		double sin(double &value);
		double asin(double &value);
		double sqrt(double &value);
		double abs(double &value);
		
		void deg();		
		void grad();
		void rad();
		
		double const pi = 3.14159;
		double const e = 2.71828;
		double constant();
};

#endif
