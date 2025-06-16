// 0-5. Is this a valid program? Why or why not?

```cpp
#include <iostream>
int main()   std::cout << "Hello, world!" << std::endl;
```

Invalid. After int main() you must have a block (braces) or a single statement introduced by a block. 
Here there are no { } around the std::cout call, so the compiler will complain about a missing function body.