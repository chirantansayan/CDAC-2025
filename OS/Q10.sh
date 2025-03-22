#!/bin/bash
concat_strings() {
    echo "$1$2"
}
string_length() {
    echo "${#1}"
}
compare_strings() {
    if [ "$1" = "$2" ]; then
        echo "Strings are equal"
    else
        echo "Strings are different"
    fi
}
is_palindrome() {
    rev=$(echo "$1" | rev)
    if [ "$1" = "$rev" ]; then
        echo "Palindrome"
    else
        echo "Not a palindrome"
    fi
}
reverse_string() {
    echo "$1" | rev
}

concat_strings "James " "Bond"
string_length "Batman"
compare_strings "Clark" "Kent"
is_palindrome "MOM"
reverse_string "Watchmen"

