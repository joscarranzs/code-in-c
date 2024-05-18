### Solved exercises in C

#### Reminder: You need a compiler

To compile and run the C programs in this repository, you will need a C compiler. The `g++` compiler is a popular choice and can be installed on both Windows and Linux.

#### Installation guide for `g++` compiler

##### Windows
To install the `g++` compiler on Windows using MSYS2, follow these steps:

1. **Download and Install MSYS2**:
   - Visit the [MSYS2 website](https://www.msys2.org/).
   - Download the installer and run it.
   - Follow the installation instructions on the website.

2. **Update Package Database and Core System Packages**:
   - Open the MSYS2 MSYS terminal from the Start menu.
   - Update the package database and core system packages with the following commands:
     ```bash
     pacman -Syu
     ```

3. **Install the Development Tools**:
   - Install the `gcc` and `g++` compilers with the following command:
     ```bash
     pacman -S mingw-w64-x86_64-gcc
     ```

4. **Set Environment Variables**:
   - Add the MSYS2 `bin` directory to your system `Path`. Typically, this directory is located at `C:\msys64\mingw64\bin`.
   - Go to Control Panel -> System and Security -> System -> Advanced system settings.
   - Click on "Environment Variables".
   - In the "System variables" section, find the `Path` variable and click "Edit".
   - Add the path to the MSYS2 `bin` directory.

5. **Verify Installation**:
   - Open a new Command Prompt.
   - Type `g++ --version` to check if the installation was successful.

##### Linux

1. **Update package list**:
   
   ```bash
   sudo apt update
   
2. **Install `g++`**:
   ```bash
   sudo apt install g++
   ```

3. **Verify installation**:
   
   ```bash
   g++ --version
   ```
