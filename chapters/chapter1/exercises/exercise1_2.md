## 1-2. Are the following definitions valid? Why or why not?

```cpp
const std::string exclam  = "!";
const std::string message = "Hello" + ", world" + exclam;
```

This is invalid, becuase the subexpression "Hello" + ", world" attempts to add two const char* pointers, and there is no overload for operator+ on two raw pointers. Because you must have at least one std::string operand in each concatenation, it ultimately fails to compile.
