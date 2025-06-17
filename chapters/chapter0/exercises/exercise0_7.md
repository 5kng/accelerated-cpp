0-7. How about this one?

#include <iostream>
int main() {
/* This is a comment that extends over several lines
   because it uses /* and */ as its starting and ending delimiters */
    std::cout << "Does this work?" << std::endl;
    return 0;
}

Valid. C-style comments /* … */ are not nestable: the first /* opens, and the first subsequent */ closes. The inner /* in the comment body is just text. After that you get a normal std::cout statement and return.