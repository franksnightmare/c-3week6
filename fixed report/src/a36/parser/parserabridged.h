...
#include <vector>
#include <unordered_map>
#include <string>
...

...
    std::vector<double> d_value;
    std::unordered_map
        <std::string, unsigned> d_symtab;
...

...
    // added functions for the calculator:
        void display(RuleValue &e);
        void done();
        void prompt();

        RuleValue &add(RuleValue &lvalue,
            RuleValue &rvalue);
        RuleValue &assign(RuleValue &lvalue,
            RuleValue &rvalue);
        RuleValue &negate(RuleValue &e);
        RuleValue &sub(RuleValue &lvalue,
            RuleValue &rvalue);
        RuleValue value();
        RuleValue variable();
		
        double valueOf(RuleValue const &e);
		
        void quit();
        void list();
};


#endif
