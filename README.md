# accelerated-cpp

This repository contains my journey through **_Accelerated C++: Practical Programming by Example_** by Andrew Koenig and Barbara E. Moo. It includes all book examples, my exercise solutions, notes, and simple test harnesses to help reinforce each concept.

---

## 📂 Repository Structure

```
accelerated-cpp/
├── README.md
├── .gitignore
├── LICENSE
├── chapters/
│   ├── chapter1/
│   │   ├── examples/
│   │   └── exercises/
│   ├── chapter2/
│   └── …
├── docs/
│   ├── chapter1-summary.md
│   └── diagrams/
├── tests/
│   └── chapter1_tests.cpp
└── scripts/
    └── build.sh
```

- **`chapters/`**  
  - One folder per chapter.  
  - `examples/`: verbatim code snippets from the book (with attribution).  
  - `exercises/`: my own solutions, clearly named (e.g. `ex1_2.cpp`).

- **`docs/`**  
  - Markdown notes, key takeaways, common pitfalls, mini–cheat sheets.  
  - Optional UML or ASCII diagrams to visualize concepts.

- **`tests/`**  
  - Simple unit tests (using your preferred framework) to verify exercise correctness.

- **`scripts/`**  
  - Helper scripts:  
    - `build.sh` – compile all chapters’ code with one command.  
    - CI config (GitHub Actions workflows, if you want to auto–build on push).

