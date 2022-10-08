k: A Simple, Interpreted Slightly-OO Language With First-Class Continuations
======

## Overview

k is an interpreter for a simple, curly-brace language with first-class continuations and call/cc, written in C.

Fibonacci in k:

```
fun fib(n)
{
  if (n == 0) {
    return 1;
  } else {
    return n * fib(n-1);
  }
}

show fib(10);
```

```
$ k fib.k
Running fib.k
3628800
```

It supports simple classes (no inheritance):

```
class fvector
{
  public var x = nill;
  public var y = nill;
  public var z = nill;

  public fun fvector(_x, _y, _z) {
    x = _x;
    y = _y;
    z = _z;
  }
}

return fvector;
```

## Implementation

Excution of a k program goes through the following phases:

* [Parsing](#parser)
* Parse tree -> Semantic tree
* Semantic tree -> lambda calculus
* Continuation-passing-style conversion
* Lambda calculus interpreter

All internal representations, from the parse tree to the final cps-style executable expression, are based on a rich [S-expression data structure](src/sexp.c).

All scoping is lexical, and even the object-level field/method scoping is done entirely with lambda scoping constructs.

## Parser

The parser uses Flex and Bison. The [grammar](src/kp.ccc) is written in a custom grammar langauge.

```
lex identifier atom ([a-zA-Z_])([a-zA-Z_0-9])*
lex integer atom ([0-9]+)
lex float atom ([0-9]+)\.([0-9]+)
...
parse while:while -"while" -"(" expression -")" block
parse for:for -"for" -"(" expression -";" expression -";" expression -")" block
parse for:forwithdecl -"for" -"(" fordecls -";" expression -";" expression -")" block
parse fordecls -"var" decllist
parse do:do -"do" block -"while" -"(" expression -")" -";"
```

The grammar is then compiled to Flex and Bison source by a tool called [ccc (The Compiler-Compiler-Compiler)](src/ccc).

(A later version of k has its own [Packrat Parser](https://bford.info/packrat/) generator with a more thorough [grammar definition language](https://github.com/GregoryTravis/k-new/blob/main/basegrammar.k).)

## Prototype Unreal Engine integration

The implementation includes a [library useful for embedding k in other binaries](src/kembed.cpp), which is used in [kActor, a prototype integration with Unreal Engine](https://github.com/GregoryTravis/kActor).

## TODO

So many things, including

* Inheritance
* A debugger
* Garbage collection \[**in progress**\]
