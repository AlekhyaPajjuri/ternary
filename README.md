#Ternary Programming Language
Ternary is a programming language consisting of the ASCII characters 0, 1, and 2. It is based on the concepts of the *BF* (1993), *Ook!* (2009), and *P''* (1964) programming languages. It can be considered a trivial BF command substitution and has similarities with the Rule 110 elementary cellular automaton (which uses 3 bits to represent 8 states).

**hello world**
```binary
11111111111111110201111111110201111101111111011111110111000000001012011101110110010111020012
00101201012001101010201111111111111120201111112001012000102000201111112010101010101020101010
1010101010200101112001111120
```

**cat** 
```binary
2102200210122112 (a program that echoes its input [this is a comment])
```

** Fibonacci sequence **
```binary
1111111111111111111111 <--- increment how many numbers to count
01110101010111111111111111111111111111111111111111111111111111111111111111111111111111111111
11111111011111111111111111111111111111111111111111111111111111111111111111000000000000020102
01010101010111011100000000000000101201010101010101020000000000000011010101010101011012000201
11111111111111111111021000100201011101110000001012010101020000001101010110121100020102101200
02101212010200000201010111000000101201010210121200001201010102010111011100000010120101010200
00001101010110121100020102101200021012120102000011010102101212000000000000001201010101010211
11111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111
11200210121211111111111111111111000210011000120111111111111111111111111111111111111111111111
11111111111111111111111111111111111111111111111111112002101200000000000000000000000002010101
11011100000000101201010101020000000011010101011012001002010120012000000002101212000002010111
01110000001012010101020000001101010110120000020011011012010200110110120000001012
```

![Ternary](http://i.imgur.com/0lKtL2X.jpg)

The language is Turing-complete, making it theoretically capable of computing any computable function or simulating any other computational model, if given access to an unlimited amount of memory.

The standard library consists of an I/O byte-stream, and the language supports memory read/write operations, conditional statements, and loops.

### Usage
```
root@box:~/ternary# g++ -std=c++11 ternary.cpp -o ternary
root@box:~/ternary# ./ternary < hello.ter
Hello World!
```

### Interpreter
The main interpreter is written in under 30 lines of C++11. It reads instructions from standard input and then executes the sequence. There is no hard-coded limit on memory for tape frames. Faster, smaller, and less memory-intensive implementations are far more than likely possible.

Ternary is able to become self-hosted (or self-reproducing), meaning that a Ternary interpreter can be written in Ternary itself.

### Compiler
To create a compiler, jump tables can be added to existing BF implementations. One that creates Linux ELF files should be possible to accomplish in ~150 bytes of x86.

### Converter
There is a Python script which can be used to convert existing BF code into Ternary. The behavior of ill-formed code to the default interpreter is undefined (see common BF implementation issues). There is an *examples* folder in the project root.

|         | left | right | dec | inc | bjmp | fjmp | out | in |
|---------|------|-------|-----|-----|------|------|-----|----|
| **BF OP**   | <    | >     | -   | +   | ]    | [    | .   | ,  |
| **Ternary** | 00   | 01    | 10  | 11  | 12   | 02   | 20  | 21 |

### Todo
* Self-hosted interpreter (based on dbfi)
* Linux ELF compiler
* Non-ASCII implementation, opcodes stored within a single byte, in the high and low bits

### Acknowledgements
Ternary would not be possible without work by the following people:
* *Corrado Böhm*, for creating the P'' language in 1964.
* *Urban Müller*, for creating the BF language in 1993.
* *Oleg Mazonka and Daniel B. Cristofani*, for dbfi and the dbfi-BF interpreter in 2003.
* *David Morgan-Mar*, for creating the Ook! language in 2009.
