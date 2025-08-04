# CN LAB - Computer Networks Laboratory

This repository contains all the C programs written during the Computer Networks laboratory sessions. The programs demonstrate various networking concepts, data structures, and system-level programming techniques.

## 📁 Project Structure

```
CN LAB/
├── Day 1/
│   ├── 1.c          # Command-line argument swapping
│   ├── 2.c          # Structure demonstration (call by value/address)
│   ├── 3.c          # Byte extraction from unsigned integer
│   ├── 4.c          # Packet structure with byte manipulation
│   ├── 5.c          # Endianness detection and conversion
│   └── swap.exe     # Additional swap utility
└── README.md
```

## 🚀 Programs Overview

### Day 1 Programs

#### 1. **Command-Line Argument Swapping** (`1.c`)
- **Purpose**: Demonstrates command-line argument handling and pointer-based swapping
- **Features**:
  - Converts string arguments to integers
  - Implements swap function using pointers
  - Shows before/after swapping results
- **Usage**: `./1.exe <num1> <num2>`

#### 2. **Structure Demonstration** (`2.c`)
- **Purpose**: Demonstrates structures, nested structures, and function parameter passing
- **Features**:
  - Student information structure with nested DOB structure
  - Call by value vs call by address demonstration
  - Student data display with formatted output
- **Usage**: `./2.exe`

#### 3. **Byte Extraction** (`3.c`)
- **Purpose**: Extracts individual bytes from a 4-byte unsigned integer
- **Features**:
  - Bitwise operations for byte extraction
  - Shows LSB to MSB byte order
  - Demonstrates bit manipulation techniques
- **Usage**: `./3.exe`

#### 4. **Packet Structure** (`4.c`)
- **Purpose**: Demonstrates packet structure and byte-level data manipulation
- **Features**:
  - Structure-based packet representation
  - Byte-level data extraction and reconstruction
  - Shows how data can be packed/unpacked in structures
- **Usage**: `./4.exe`

#### 5. **Endianness Detection & Conversion** (`5.c`)
- **Purpose**: Detects system endianness and converts between endian formats
- **Features**:
  - System endianness detection
  - Byte-by-byte number representation
  - Endianness conversion function
  - Comprehensive byte analysis
- **Usage**: `./5.exe`

## 🛠️ Compilation Instructions

### For Windows (using GCC):
```bash
# Navigate to Day 1 directory
cd "Day 1"

# Compile individual programs
gcc -o 1.exe 1.c
gcc -o 2.exe 2.c
gcc -o 3.exe 3.c
gcc -o 4.exe 4.c
gcc -o 5.exe 5.c
```

### For Linux/Mac:
```bash
# Navigate to Day 1 directory
cd "Day 1"

# Compile individual programs
gcc -o 1 1.c
gcc -o 2 2.c
gcc -o 3 3.c
gcc -o 4 4.c
gcc -o 5 5.c
```

## 📋 Prerequisites

- **C Compiler**: GCC (GNU Compiler Collection) or any C compiler
- **Operating System**: Windows, Linux, or macOS
- **Basic Knowledge**: Understanding of C programming fundamentals

## 🎯 Learning Objectives

These programs cover essential concepts in computer networks and systems programming:

1. **Command-Line Programming**: Argument parsing and validation
2. **Data Structures**: Structures, nested structures, and memory layout
3. **Pointers**: Call by value vs call by address
4. **Bit Manipulation**: Byte extraction, bitwise operations
5. **System Architecture**: Endianness, byte order
6. **Memory Management**: Understanding data representation in memory

## 🔧 Key Concepts Demonstrated

- **Command-line argument handling**
- **Pointer arithmetic and dereferencing**
- **Structure memory layout**
- **Bitwise operations and masking**
- **Byte-level data manipulation**
- **System endianness detection**
- **Data packing and unpacking**

## 📝 Notes

- All programs are written in standard C (C89/C90 compatible)
- Programs include proper error handling and user input validation
- Each program demonstrates specific networking and systems programming concepts
- Executable files are provided for Windows (.exe format)

## 🤝 Contributing

Feel free to contribute by:
- Adding more programs
- Improving existing code
- Adding comments and documentation
- Reporting bugs or issues

## 📄 License

This project is for educational purposes as part of the Computer Networks laboratory coursework.

---

**Author**: Shriyans Mukherjee  
**Course**: Computer Networks Laboratory  
**Institution**: Kalinga Institute Of Industrial Technology
