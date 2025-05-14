# Owon XDM1041 Control Software

This application provides a graphical interface for controlling and retrieving measurements from the Owon XDM1041 digital multimeter.

## Features

- Connect to the Owon XDM1041 via serial port
- Control all measurement functions (Voltage, Current, Resistance, etc.)
- Cycle through measurement ranges including auto-range
- Display real-time measurements
- Graph measurement data over time
- Dual measurement display
- Save and load measurement sessions
- Menu functionality for additional features

## Screenshots

(Screenshots will be added here)

## Running the Application

### Pre-built Executable (No Building Required)

This repository includes a pre-built executable that you can run directly without having to build the application yourself:

1. Clone or download this repository
2. Double-click the `Owon1041.lnk` shortcut in the root directory
   - This shortcut points to the pre-built executable in the `build/Release` directory

The application is ready to use immediately with all necessary dependencies included.

## Repository Structure

This repository has two main branches:

- `source-code-only`: Contains only the source code files needed for compilation
- `main`: Contains the full project including the pre-built application

The `main` branch includes:

- Complete source code
- Pre-built executable in the `build/Release` directory
- All necessary Qt DLLs and dependencies
- A shortcut (`Owon1041.lnk`) for easy access to the application

You can run the application directly without building it, or build it yourself from the source code.

## Building from Source

**Note:** Building from source is optional. You can run the pre-built executable directly as described in the [Running the Application](#running-the-application) section.

### Prerequisites

- Qt 5 (tested with Qt 5.15)
- CMake 3.10 or higher
- C++ compiler with C++11 support (GCC, MSVC, Clang)

### Build Instructions

#### Windows

1. Clone the repository:

   ```bash
   git clone https://github.com/RepairYourTech/Owon1041.git
   cd Owon1041
   ```

2. Create a build directory:

   ```bash
   mkdir build
   cd build
   ```

3. Configure with CMake:

   ```bash
   cmake .. -DQt5_DIR="C:/Qt5/5.15.2/msvc2019_64/lib/cmake/Qt5"
   ```

   Note: Adjust the Qt path according to your installation. Make sure you have the Qt Charts module installed.

4. Build the project:

   ```bash
   cmake --build . --config Release
   ```

5. The executable will be created in the `build/Release` directory.

6. Deploy Qt dependencies:

   ```bash
   C:/Qt5/5.15.2/msvc2019_64/bin/windeployqt.exe --release build/Release/Owon1041.exe
   ```

   This will copy all necessary Qt DLLs and plugins to the build directory.

#### Linux

1. Clone the repository:

   ```bash
   git clone https://github.com/RepairYourTech/Owon1041.git
   cd Owon1041
   ```

2. Create a build directory:

   ```bash
   mkdir build
   cd build
   ```

3. Configure with CMake:

   ```bash
   cmake .. -DCMAKE_PREFIX_PATH=/path/to/qt5
   ```

   Note: Adjust the Qt path according to your installation. Make sure you have the Qt Charts module installed.

4. Build the project:

   ```bash
   make
   ```

5. The executable will be created in the `build` directory.

6. Deploy Qt dependencies:

   ```bash
   /path/to/qt5/bin/linuxdeployqt Owon1041
   ```

   Note: You may need to install the `linuxdeployqt` tool separately.

### Dependencies

- Qt Core
- Qt Widgets
- Qt SerialPort
- Qt Charts (for graphing functionality)

## Usage

1. Connect your Owon XDM1041 to your computer via USB
2. Launch the application
3. Select the correct COM port from the connection dialog
4. Click "Connect"
5. Use the buttons to select measurement functions and ranges

## Recent Changes

- Fixed range cycling logic to properly cycle through all available ranges
- Implemented menu functionality
- Added dual measurement display toggle
- Improved graph scaling

## License

This project is licensed under the MIT License - see the LICENSE file for details.

## Acknowledgments

- Original code by Thomas Lamy (tlamy)
- Improvements by RepairYourTech
- Based on the Owon XDM1041 Programming Guide
