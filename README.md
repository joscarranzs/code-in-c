### Solved exercises in C

#### Reminder: You need a compiler

To compile and run the C programs in this repository, you will need a C compiler. The `g++` compiler is a popular choice and can be installed on both Windows and Linux.

#### Installation guide for `g++` compiler

##### Windows

1. **Download and install MinGW**:
   - Visit the [MinGW website](http://www.mingw.org/).
   - Download the MinGW Installation Manager.
   - Run the installer and select the `gcc-g++` package.
   - Click "Apply Changes" to install.

2. **Set environment variables**:
   - Go to Control Panel -> System and Security -> System -> Advanced system settings.
   - Click on "Environment Variables".
   - In the "System variables" section, find the `Path` variable and click "Edit".
   - Add the path to the MinGW `bin` directory (e.g., `C:\MinGW\bin`).

3. **Verify installation**:
   - Open Command Prompt.
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
