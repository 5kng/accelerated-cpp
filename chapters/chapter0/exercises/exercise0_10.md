0-10. Rewrite the Hello, world! program so that a newline occurs everywhere whitespace is allowed.
Every spot you could put a space, instead put \n:

#include
<iostream>
int
main()
{
std::cout
<<
"Hello, world!"
<<
std::endl
;
return
0
;
}

Each token is on its own line; the compiler treats newlines like spaces (except in comments, #include, and string literals), so it still compiles and prints:

```bash
Hello, world!
```