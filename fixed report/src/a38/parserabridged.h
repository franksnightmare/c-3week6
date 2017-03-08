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
        RuleValue &div(RuleValue &lvalue,
            RuleValue &rvalue);
        RuleValue &lsh(RuleValue &lvalue,
            RuleValue &rvalue);
        RuleValue &mul(RuleValue &lvalue,
            RuleValue &rvalue);
        RuleValue &negate(RuleValue &e);
        RuleValue &rsh(RuleValue &lvalue,
            RuleValue &rvalue);
        RuleValue &sub(RuleValue &lvalue,
            RuleValue &rvalue);
        RuleValue value();
        RuleValue variable();

        double valueOf(RuleValue const &e);
        int toInt(RuleValue rv);

        void quit();
};


#endif
