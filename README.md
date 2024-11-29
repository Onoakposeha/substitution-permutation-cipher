# Substitution and Permutation Cipher

## Overview

This program implements a text-based encryption and decryption system using a combination of a substitution cipher and a permutation. 
It reads input text from a file `cipher_in.txt`, encrypts/decrypts it, and writes the output to another file `cipher_out.txt`. 

The program supports both **encryption** and **decryption** modes, with a user-defined numeric key for added security. 



## Features

1. **Encryption**: 
   - A substitution cipher is used to transform characters based on a predefined mapping.
   - Consecutive characters are swapped, and the word is reversed for added complexity.

2. **Decryption**: 
   - The reverse of the encryption process is applied to retrieve the original text.

3. **File-based input and output**:
   - Input is read from `cipher_in.txt`.
   - Output is written to `cipher_out.txt`.

4. **Flexible key**:
   - A numeric key defines the number of iterations for encryption or decryption, allowing for adjustable security levels.
    Choose a large prime number for better security

---

## Usage

### Prerequisites
1. **C++ Compiler**: Ensure you have a C++ compiler like GCC installed.
2. **Input File**: Create a file named `cipher_in.txt` and add the text to be encrypted or decrypted.
3. **Output File**: Ensure a writable `cipher_out.txt` exists in the same directory.

### Running the Program
compile the program using an appripriate C++ compiler and run the executable file