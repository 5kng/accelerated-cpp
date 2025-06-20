// 1-5. Is this program valid? If so, what does it do? If not, say why not, and rewrite it to be valid.

#include <iostream>
#include <string>

/*
int main() {
    { std::string s = "a string";
      { std::string x = s + ", really";
        std::cout << s << std::endl;
      }
      std::cout << x << std::endl;
    }
    return 0;
}
*/

/* This is invalid because x is declared inside the inner block and thus goes out of scope before
the std::cout << x line. To fix it, you must declare x in the same scope where you use it, for example: */

#include <iostream>
#include <string>

int main() {
    {
        std::string s = "a string";
        std::string x = s + ", really";  // x lives in this scope
        std::cout << s << std::endl;
        std::cout << x << std::endl;     // now valid
    }
    return 0;
}

