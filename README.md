# ft_printf ✨

## Introduction 📚

`ft_printf` is a custom implementation of the standard `printf` function in C. This project is a classic for learning string manipulation, variadic functions, and format handling. 💻

## Features 🚀

- Supports various format specifiers:
  - `%c` : Character
  - `%s` : String
  - `%d` / `%i` : Decimal integers
  - `%u` : Unsigned integers
  - `%x` / `%X` : Hexadecimal (lowercase/uppercase)
  - `%p` : Pointer
  - `%%` : Percentage sign
- Variadic argument handling for dynamic formatting.

## Compilation 🛠️

To compile the project, simply run:

```bash
make
```

This will generate the `libftprintf.a` library, which you can link to your C projects.

## Usage 📖

Include the header file and link the generated library:

```c
#include "ft_printf.h"

int main(void)
{
    ft_printf("Hello, %s! You have %d new messages.\n", "Amine", 5);
    return 0;
}
```

## Running Tests ✅

Test files are included to validate the `ft_printf` functionality. Run the tests with:

```bash
make tests
```

## Development Notes ✍️

This project adheres to the `Norme42` coding standard, which enforces strict rules on line length, indentation, and function complexity.

## Contributions 🤝

Feel free to propose changes or report issues! Fork the repository, make your updates, and open a pull request. Contributions are welcome. 💡

## Author 👨‍💻

- **Amine0385**

---

Enjoy coding and happy formatting! 🎉
