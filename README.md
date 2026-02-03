# Compiler Design Practicals

This repository contains my university Compiler Design practical programs (C).

**Repository layout**

| Practical | Topic | Files | Status |
| --- | --- | --- | --- |
| 01 | Lexical analysis (keywords/identifiers/operators/separators) | `practical-01/Lex.c`, `practical-01/laxcode.txt` | Complete |
| 02 | Count digits, vowels, consonants, symbols in a line | `practical-02/practical_2.c` | Complete |
| 03 | Simple username/password validation | `practical-03/practical_3.c` | Complete |
| 04 | Predictive parsing table (LL(1)) | `practical-04/practical_4.c` | Complete |
| 05 | Recursive descent parsing | `practical-05/practical_5.c` | Complete |
| 06 | Operator precedence parsing | `practical-06/practical_6.c` | Complete |
| 07 | - | - | Planned |
| 08 | - | - | Planned |
| 09 | - | - | Planned |
| 10 | - | - | Planned |

**Requirements**

- A C compiler (GCC/Clang/MSVC). Examples below use GCC on Windows (MinGW).

**Build & run**

General pattern:

```powershell
gcc path\to\file.c -o path\to\program
path\to\program
```

Examples:

```powershell
gcc practical-02\practical_2.c -o practical-02\practical_2
practical-02\practical_2
```

```powershell
gcc practical-05\practical_5.c -o practical-05\practical_5
practical-05\practical_5
```

**Notes**

- Practical 01 reads `Laxcode.txt` from the current working directory. Run it from `practical-01` (the file is `practical-01/laxcode.txt`). On Windows, the case difference is fine.
- Practical 04 uses `conio.h` for `getch()`; if your compiler doesn’t support it, you can remove the `getch()` call or compile with a Windows-compatible toolchain.
