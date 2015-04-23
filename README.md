#Ternary Programming Language
Ternary is a programming language consisting of the ASCII characters 0, 1, and 2. It is based on the concepts of the BF, Ook!, and P'' programming languages. Here is the Hello World:

```binary
11111111111111110201111111110201111101111111011111110111000000001012011101110110010111020012001012010120011010102011111111111111202011111120010120001020002011111120101010101010201010101010101010200101112001111120
```

The language is Turing-complete, making it theoretically capable of computing any computable function or simulating any other computational model, if given access to an unlimited amount of memory.

## Interpreter
The main interpreter is written in under 30 lines of C++11. It reads instructions from standard input and then executes the sequence. There is no hard-coded limit on memory for tape frames. Faster, smaller, and less memory-intensive implementations are far more than likely possible.

Ternary is able to become self-hosted (or self-reproducing), meaning that a Ternary interpreter can be written in Ternary itself.

## Compiler
To create a compiler, jump tables can be added to existing BF implementations. One that creates Linux ELF files should be possible to accomplish in ~150 bytes of x86.

## Usage
```
root@box:~/ternary# g++ -std=c++11 ternary.cpp -o ternary
root@box:~/ternary# ./ternary < hello.ter
Hello World!
```

## Todo
* Self-hosted interpreter (based on dbfi)
* Linux ELF compiler
* Non-ASCII implementation, opcodes stored within a single byte, in the high and low bits

## Acknowledgements
Ternary would not be possible without work by the following people:
* Corrado Böhm, for creating the P'' language in 1964.
* Urban Mueller, for creating the BF language in 1993.
* Oleg Mazonka and Daniel B. Cristofani, for discovering dbfi and writing the dbfi-BF interpreter in 2003.
* David Morgan-Mar, for creating the Ook! language in 2009.
