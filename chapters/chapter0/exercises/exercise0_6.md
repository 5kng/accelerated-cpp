0-6. Is this a valid program? Why or why not?

#include <iostream>
int main()   {{{{{{ std::cout << "Hello, world!" << std::endl; }}}}}}

Valid. It has six nested blocks { { { { { { … } } } } } } all containing the one std::cout expression and omitted return 0;, but in main that’s allowed; the end implies return 0.

