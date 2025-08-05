# APR BOT TEST REPO

this repository is designed to test the APR (automated program repair) bot functionality for our project

## structure

```
test-project-apr/
├── .github/
│   └── workflows/
│       └── ci.yml
├── src/
│   ├── calculator.cpp
│   └── calculator.h
├── tests/
│   └── test_calculator.cpp
├── CMakeLists.txt
└── README.md
```

## purpose

this repository contains intentional bugs in the calculator implementation to test the APR bot's ability to:

1. detect CI workflow failures
2. download test artifacts
3. run APR engine
4. create PRs with automated fixes

## known bugs here

- `add()` function subtracts instead of adding
- `multiply()` function adds instead of multiplying
- `divide()` function has no division by zero protection
