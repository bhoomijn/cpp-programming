# 📚 Variables & Datatypes

This folder covers the **fundamental concepts** of C++ variables and data types.

## 📖 Topics Covered

### 1. **Basic Output & Variables** (`01_basic_output.cpp`)
- First C++ program structure
- Variable declaration and initialization
- Using `cout` for output
- `endl` for new lines

**Key Concepts:**
```cpp
int age = 17;
cout << "My age is " << age << endl;
```

### 2. **Variable Scope** (`02_variable_scope.cpp`)
- Local vs global scope
- Block scope
- Re-declaring variables with same name in different scopes
- How scope affects variable accessibility

**Key Concepts:**
```cpp
int age = 17;
{
    int age = 66;  // Different scope, same name
}
// Original age is still 17
```

### 3. **Data Types** (`03_data_types.cpp`)
- Integer types (`int`)
- Floating-point types (`float`, `double`)
- Character type (`char`)
- Boolean type (`bool`)
- Memory and range considerations

**Data Types Reference Table:**

| Type | Size (bytes) | Range | Example |
|------|-------------|-------|---------|
| `int` | 4 | -2,147,483,648 to 2,147,483,647 | `int x = 42;` |
| `float` | 4 | ±3.4×10^±38 | `float pi = 3.14;` |
| `double` | 8 | ±1.7×10^±308 | `double precise = 3.14159265;` |
| `char` | 1 | 0 to 255 (ASCII) | `char letter = 'A';` |
| `bool` | 1 | true (1) or false (0) | `bool flag = true;` |

## 🎯 Learning Outcomes

After studying these programs, you should understand:
- ✅ How to declare and initialize variables
- ✅ Different data types and when to use each
- ✅ Variable scope and its implications
- ✅ How to output values using `cout`
- ✅ The difference between precision in `float` vs `double`

## 🔧 How to Compile & Run

```bash
# Compile a single program
g++ -o program_name program_name.cpp

# Run the compiled program
./program_name

# Or compile and run in one command
g++ -o 01_basic_output 01_basic_output.cpp && ./01_basic_output
```

## 💡 Practice Exercises

1. **Modify `01_basic_output.cpp`**: Change the age value and add more output statements
2. **Experiment with `02_variable_scope.cpp`**: Add nested blocks and see how scope works
3. **Enhance `03_data_types.cpp`**: 
   - Add more data types like `long`, `short`
   - Print the size of each data type using `sizeof()` operator
   - Try different precision levels for `double`

## 📌 Important Notes

- `int` is used for whole numbers
- `float` uses single precision; `double` uses double precision (more accurate for calculations)
- `char` stores ASCII values; 'A' is stored as 65
- `bool` values are actually stored as 0 (false) or 1 (true)
- Always use meaningful variable names (e.g., `age` instead of `a`)

## 🚀 Next Steps

After mastering variables and data types, move on to:
- Input operations (`cin`)
- Operators (arithmetic, logical, comparison)
- Conditional statements (if-else)
- Loops (for, while)
