The substring() method extracts the characters from a string, between two specified indices, and returns the new sub string.

This method extracts the characters in a string between "start" and "end", not including "end" itself.

If "start" is greater than "end", this method will swap the two arguments, meaning str.substring(1, 4) == str.substring(4, 1).

If either "start" or "stop" is less than 0, it is treated as if it were 0.

Note: The substring() method does not change the original string.

var str = "Hello world!";
var res = str.substring(1, 4);
The result of res will be:
ell

var str = "Hello world!";
var res = str.substring(2);
The result of res will be:
llo world!

Many JavaScript environments (including most modern web browsers) also implement a variant of substring called substr (Section B.2.3). However, the parameters for substr are the start character position and the numbers of characters to be extracted, respectively. This is shown in the following fragment:

ar b = 'The Three Musketeers';
b.substr(4, 9);     'Three Mus'
b.substr(9, 4);     ' Mus'
