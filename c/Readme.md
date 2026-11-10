# C/C++ Project Workspace Guide

This guide contains the exact steps to spin up a new mini-project from scratch, mix C and C++ code together, and compile it seamlessly using PowerShell, MSYS2, and CMake.

---

## 🚀 How to Create a New Mini-Project from Scratch

Follow these exact steps inside your PowerShell terminal to create a new project called `my-new-app`:

### Step 1: Create the Project Directory
Navigate to your main workspace directory and create a new folder:
```powershell
cd C:\(\Users\thomasmuller\Documents\projects\c-\)cpp-python
mkdir my-new-app
cd my-new-app
```

### Step 2: Create Your Source Files
Create your C++ main file, your C file, and your shared header file right in that directory.

1. **`main.cpp`** (C++ Entry Point)
   ```cpp
   #include <iostream>
   #include "c_backend.h" // Note the use of double quotes "" for local headers

   int main() {
       std::cout << "Starting C++ Interface..." << std::endl;
       run_c_code();
       return 0;
   }
   ```

2. **`c_backend.h`** (The Bridge Header)
   *You must wrap declarations in `extern "C"` so the C++ compiler understands them.*
   ```c
   #ifndef C_BACKEND_H
   #define C_BACKEND_H

   #ifdef __cplusplus
   extern "C" {
   #endif

   void run_c_code();

   #ifdef __cplusplus
   }
   #endif

   #endif
   ```

3. **`c_backend.c`** (The C Engine)
   ```c
   #include <stdio.h>
   #include "c_backend.h"

   void run_c_code() {
       printf("Hello safely from the C Engine!\n");
   }
   ```

### Step 3: Create the `CMakeLists.txt` File
Create a text file named exactly `CMakeLists.txt` in your project folder and paste the blueprint details:
```cmake
cmake_minimum_required(VERSION 3.15)

# 1. Name the project and activate both C and C++ (CXX) compilers
project(MiniProject LANGUAGES C CXX)

set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 17)

# 2. Add all your source files to the executable target
add_executable(app_binary
    main.cpp
    c_backend.c
    c_backend.h
)
```

---

## 🛠️ The Two-Step Compilation Workflow

Once your code files and `CMakeLists.txt` are ready in your folder, run these commands:

### 1. The Planning Phase (Run ONCE per project)
Create a temporary `build` folder to keep your directory clean, step inside it, and tell CMake to generate your MinGW build blueprint files:
```powershell
mkdir build
cd build
cmake -G "MinGW Makefiles" ..
```

### 2. The Construction Phase (Run EVERY TIME you change code)
Tell CMake to look at the blueprint in your current folder (`.`) and run the underlying compilers to generate your binary program:
```powershell
cmake --build .
```

### 3. Run It!
Launch your executable directly in PowerShell:
```powershell
.\app_binary.exe
```

---

## 💡 Quick Rules of Thumb
* **Use Quotes `""`**: For your own header files (`#include "my_file.h"`).
* **Use Brackets `<>`**: For system library files (`#include <iostream>`).
* **Only Rebuild (`cmake --build .`)**: You do **not** need to keep re-running the `cmake -G ...` command unless you add a brand-new `.c` or `.cpp` file to your `CMakeLists.txt` list.
