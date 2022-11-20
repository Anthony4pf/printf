<h2>C Library implementation of the Printf function.</h2>
<h4>The function will format and produce output to the standard output.</h4>

Prototype: int _printf(const char *format, ...);

Returns: the number of characters printed (excluding the null byte used to end output to strings).

Write output to stdout, the standard output stream.

format is a character string. The format string is composed of zero or more directives. See man 3 printf for more detail. You need to handle the following conversion specifiers:
c
s
%
d
