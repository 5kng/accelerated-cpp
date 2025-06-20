## 1-1. Are the following definitions valid? Why or why not?

```cpp
const std::string hello   = "Hello";
const std::string message = hello + ", world" + "!";
```

This is valid. The first operator+ takes a std::string (hello) and a string literal, producing a std::string; the second operator+ likewise takes that std::string and another literal, yielding the final message.