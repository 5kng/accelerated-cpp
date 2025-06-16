// 0-4. Write a program that prints its own “Hello, world!” source.
// A simple (non-quine) approach hard-codes the lines:

#include <iostream>
int main() {
    std::cout
      << "// a small C++ program\n"
      << "#include <iostream>\n\n"
      << "int main() {\n"
      << "    std::cout << \"Hello, world!\" << std::endl;\n"
      << "    return 0;\n"
      << "}\n";
    return 0;
}


// When run, it spits out exactly the source of the basic Hello, world! program.