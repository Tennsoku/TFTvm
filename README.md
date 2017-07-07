# TFTvm
An exploration project to Instruction Set Architecture(ISA) simulation. The goal is to create a universal engine that supports a variety of user-defined ISAs.

TFT stands for Three-Forty-Two(342), which refers to ECE342 - COMPUTER HARDWARE @ University of Toronto, a really deep pain in the ass. The architecture used in this project is a simple processor that is implemented in one of the labs in this course. 

# Coding Style
Follow the style of the current codebase, but a few non-obvious convention will be introduced below.
## Names
Use Camel Case in general.
### Variable Name
* All variables should be scoped. (No variable allowed in global namespace)
* Boolean: isLegal
* Class Private Data Member: myVar_
* Pointer: Add "_ptr" if unclear
### Class/Enum/Namespace/Struct/type Name
* Data type/Enum type (used as data type): data_t/enum_e
* Class/Struct (used as object): MyClass
* Pimpl Idiom Struct or Class: IMPL
* Namespace: TURING_MACHINE
* Enum Enumerator With Implicit Primitive Type Value Conversion: ENUMERATOR_APPLE
* Enum Enumerator Without Implicit Primitive Type Value Conversion: enumeratorApple
### File Name
* namespace/class_a.(cpp/h/tpp)
* Only the Namespace header file can have the same name as the namespace.
### Function Name
* Mutator: setGender()
* Accessor of Class: getTelephone()
* Accessor of Data type: size()
## Rules
* Use namespace at all times
* Enum Enumerator must be scoped, either via Enum Class or Namespace
* Accessor Function must have const
* Mutator Function must not have const
* #include the header file if and only if a symbol's declaration is inside that header file
* Use forward declaration whenever possible in the header file
* Never use "using namespace xxx" in a header file
* The #include order is as following (in alphabetical order in each category)
  - (Declaration file of this Implementation file or Namespace header file)
  - Standard Library, Standard Template Library
  - Other
