# *This project has been created as part of the 42 curriculum by mrazakam*

## Description
ft_printf is a 42 school project that consists of recreating the C standard library function printf. It handles formatted output, supports multiple format specifiers, and uses variadic functions to print data to standard output while returning the number of characters printed.

## Instructions
#### 1. Compile the ft_printf project:
Got to the ft_printf project, open a terminal and type:
<pre style="padding:10px;">make</pre>

#### 2. Copy the resources (`libftprintf.a`, `ft_printf.h`) to the root of your project
#### 3. Include the ft_printf header:
<pre style="background:#1E1E1E; padding:10px;">
<span style="color:#C586C0">#include</span> <span style="color:#CE9178">"ft_printf.h"</span>
</pre>

#### 4. Now, you can call the function ft_printf:
<pre style="background:#1E1E1E; padding:10px;">
<span style="color:#C586C0">int</span> <span style="color:#D4D4D4">printed_characters</span> <span style="color:#D4D4D4">=</span> <span style="color:#DCDCAA">ft_printf</span><span style="color:#D4D4D4">(</span><span style="color:#CE9178">"Made by: <span style="color:#3ffcfc">%s</span>"<span style="color:#D4D4D4">,</span> "mrazakam"</span><span style="color:#D4D4D4">);</span>
</pre>

#### Finally: To compile this project, run the following command at the root of the project:
<pre style="padding:10px;">cc your_program.c libftprintf.a</pre>

## Resources
- https://42-cursus.gitbook.io/guide/1-rank-01/ft_printf
- https://stackoverflow.com/questions/7055882/return-value-of-printf-function-in-c

#### AI USAGE:
I mainly used AI as a writing assistant to help with the redaction of the README.md.

## Code explanation
#### The algorithm:
- Iterate in the str.
- If the next two string is a flag, we take a variable from the `va_args`, convert it and add it to the final result.
- Once the iteration finished, we display the final string and return the length of displayed string

Here is a brief description of what each function does:
#### 1. get_formated_str:
Get the string to display. This function replaces the flags %c, %s, %d, %p, %i, %u, %x, %X, %% with their values.
#### 2. get_variable_str:
Get the value of a flag
#### 3. is_variable:
Check if we are in a variable
#### 4. cat_string_and_free:
Concatenate str1, and str2 then free str1
#### 5. cat_string_and_free_all:
Concatenate str1, and str2 then free both
#### 6. cat_char_and_free:
Concatenate str, and c then free str1
#### 7. reverse_string:
Reverse a string
#### 8. str_upper:
Converts a string to uppercase
#### 9. ft_uitoa:
Converts an unsigned int variable to ascii
#### 10. ft_tohexadecimal:
Converts a number to hexadecimal
#### 11. char_converter:
Converts a char to a string
#### 12. pointer_converter:
Converts a pointer to a string, if the pointer is a null pointer, the function return `(nil)`
#### 13. string_converter:
Duplicate the string to print, if the string is a null pointer, the function return `(null)`