// 1-3. Is the following program valid? If so, what does it do? If not, why not?

#include <iostream>
#include <string>

int main() {
    { const std::string s = "a string";
      std::cout << s << std::endl;
    }
    { const std::string s = "another string";
      std::cout << s << std::endl;
    }
    return 0;
}

// It is valid. Each pair of braces creates its own scope and its own s variable; when run it prints exactly