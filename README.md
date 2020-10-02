# Module-1

<b>Program-1</b>
In C, there are two types of comments:
1.	end-of-line comment : It starts with //. The content that follows the // and continues till the end of that line is a comment. It is also called as single-line comment.
2.	traditional comment : It starts with /* and ends with */. The content between /* and */ is the comment. It is also called as multi-line comment.
Given below are 3 important points regarding comments:
1.	There should not be any space between the two forward slashes in //, i.e., / / is incorrect. Similarly, there should not be any space between the slash and star characters in /* and */, i.e., / * and * / are incorrect.
2.	Comments do not nest, i.e., /* and */ comment has no special meaning inside a // comment.Similarly, a // comment has no special meaning inside a /* comment.
3.	One should not write comments inside character literals (i.e., characters enclosed between single-quotes). Comments inside String literals (i.e., text enclosed between double-quotes) are treated as part of the String's content.



<b>Program-2</b>
In C, the backslash character \ is used to mark an escape sequence. An Escape Sequence is an escape character \ followed by a normal character. For example: \n or \t.
The presence of the escape character changes the meaning of the character which follows it. For example, when the string literal "Hello\tWorld" is printed, the result is seen as
Hello	  World
In the string literal "Hello\tWorld", \t represents the TAB character.



<b>Program-3</b>
In any language, we start learning words after we learn its alphabet. We use words to name and identify different things. These names are nothing but Identifiers.
Identifiers are names used to refer to any entity in a program. (A program can contain many entities (or building blocks) such as data types, constants, variables, functions, arrays, etc. We shall learn about them in the later sections.)

An identifier is a sequence of characters. In C, identifiers can be formed by combining alphabets, digits and a special character underscore '_' 
Given below are the rules for creating a valid identifier in C:
•	The first character must always be an alphabet or an underscore. The remaining characters can be a combination of one or more alphabet, digits and underscores.
•	No special characters except the underscore are allowed in an identifier.
•	An identifier can be of any length. However, in old C (before C was standardized by ANSI), only the first 8 characters were considered by the compilers when the names were compared for equality. This limit was later changed to 31 characters as per the ANSI standard.
•	Keywords cannot be used as indentifiers.



<b>Program-4</b>
In C, main() can be written in such a way that it either returns a void or an int.
 Valid
#include <stdio.h>

void main() {
    printf("Sample main() function with void as return type!");
}

 Valid
#include <stdio.h>
int main() 
{
    printf("Sample main() function with int as return type!");
    return 0;// 0 value indicates that the execution is successful
}
If the programmer does not specify any return type, the return type is by default considered as int.
The return type of main() can also be void, which means that it does not return anything. We shall learn more about void and return type is in the ensuing sections.
The name of the main() function should always be in lowercase, i.e., if a function is written as Main(), it is not the main function which is called by the OS.
Read the code given below to familiarize yourself with the syntax of main() function. Retype in the space provided.



<b>Program-5</b>
For easier and efficient processing, data is classified into different types (data types) such as char, int, float, double, array, enum etc. These data types can be grouped as primitive and derived. (We shall learn more about data types in the later sections.)

As their names suggest, primitives form the primary building blocks (they usually have built-in support in the programming languages) and derived data types are usually made up of one or more primitive types.

The memory occupied by a variable depends on its data type.
Each data type determines:
1.	the meaning of the data that it represents
2.	the possible values that it can take
3.	the way or format in which the values of this type are stored
4.	the possible operations that can be performed on it
In C, we need to declare the type of a variable before using it.

For example, if we want to store a value 75 in a variable with name marks,
we cannot directly write
marks = 75;
We first have to declare the variable marks to be of int type, as given below:
int marks;
and then we can assign the values as follows:
marks = 75;
int marks;
marks = 75;
We can also declare and initialize the variable in a single step, as:
int marks = 75; 




<b>Program-6</b>
Finding the errors




<b>Program-7</b>
For an operation to take place, both the operands must be of the same type.
Type conversion is performed to convert one or both the operands to an appropriate data type before evaluation.

Type conversion means converting one data type value into another data type value.

There are two types of type conversions:
implicit conversion (also called type coercion) and
explicit conversion (also called type casting).

In case of implicit type conversion, the compiler automatically converts one data type value into another data type value.

Implicit type conversions can occur during assignment or while using any other operators. During assignment, the R-value is converted to the type of L-value.

For example, in the statement int a = 5.6; 5.6, which is the value on the right hand side, is automatically converted into an int type as 5.
The conversion order is char ⟹ short int ⟹ int ⟹ long ⟹ float ⟹ double ⟹ long double

For example, in the statement float a = 5 + 5.6;, integer type value 5 is automatically converted into a float type as 5.0 before the addition is performed.



<b>Program-8</b>
The scanf() function in the stdio.h header file is used to read data of any data type using format characters.

The scanf() function can be used to read multiple data items at a time into variables and it returns the total number of data items that have been read successfully in the end.

The general format of scanf() function is scanf("control_string", argument_list);br/> where control_string contains the required format specifiers enclosed within double quotes and argument_list contains the addresses of the memory locations where the input data is stored. They are separated by commas.

The control_string can contain different format characters (used for reading different data types). Each format character must be prefixed with a % character.


<b>Program-9</b>

Before going to the program first let us see what is Slope and Midpoint of a Line and how to calculate it?

Slope of a Line:

  The Slope of a Line is a number that describes both the direction and the steepness of the line.

Midpoint of a Line:

  The Midpoint of a Line is the middle point of a line segment. It is equidistant from both endpoints.

To calculate we should know the formulas.

So the formulas are:

Slope :

slope= y2-y1/ x2-x1

Midpoint:

Midpoint = ((x2+x1)/2), ((y2+y1)/2)


<b> Program-10</b>

It is common to encounter errors while writing programs in any programming language.

Errors can be broadly classified into three types as given below:
1.	Syntax Errors - Incorrect usage of syntax results in syntax errors. Since these errors are shown during compilation, they are also called compile-time errors.
2.	Logical Errors - Incorrect logic in the program which does not let the program to produce the correct output is called a logical error. These are found out during testing. These do not abruptly terminate or crash the program.
3.	Runtime Errors - The errors which occurs during the execution of the program leading to the abrupt termination of the program are called runtime-errors.
The runtime and logical errors are also known as bugs which prevent the program from producing the correct output.

The runtime and logical errors are also known as bugs which prevent the program from producing the correct output.



Consider the following example which contains two syntax errors:
#include <stdio.h>
void main() {
	int a = 10, b = 20, c	// statement-1
	a + b = c;				// statement-2
	printf("Result = %d", c);
}
Here, the line marked as statement-1 will trigger a compilation error, as the statement is not terminated by a semicolon (;).

Similarly, the statement-2 also triggers a compilation error, as the assignment is done incorrectly (where the RHS and LHS have been swapped).

Some of the most commonly occurring compile-time errors are:
1.	Missing semicolon ( ; ) at the end of statement.
2.	Missing any one of the matching separators in {, }, [, ], (, ), etc.
3.	Incorrect spelling of a keyword in C. Note that C is case-sensitive.
4.	Using a variable without declaration it before its first use.


