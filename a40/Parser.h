// Generated by Bisonc++ V4.05.00 on Thu, 02 Mar 2017 12:10:57 +0100

#ifndef Parser_h_included
#define Parser_h_included

// $insert baseclass
#include "Parserbase.h"
// $insert scanner.h
#include "Scanner.h"

#undef Parser
class Parser: public ParserBase
{
    // $insert scannerobject
    Scanner d_scanner;
        
    public:
        int parse();

    private:
        void error(char const *msg);    // called on (syntax) errors
        int lex();                      // returns the next token from the
                                        // lexical scanner. 
        void print();                   // use, e.g., d_token, d_loc

    // support functions for parse():
        void executeAction(int ruleNr);
        void errorRecovery();
        int lookup(bool recovery);
        void nextToken();
        void print__();
        void exceptionHandler__(std::exception const &exc);
    
    // my own functions:
		STYPE__ getInt();
		STYPE__ getString();
		STYPE__ getDouble();
		
		void showInt(STYPE__ &ptr);
		void showString(STYPE__ &ptr);
		void showDouble(STYPE__ &ptr);
		void quit();
};


#endif
