#!/bin/bash
echo "Enter the length of password to be generated"
read length
password=$(< /dev/urandom tr -dc 'A-Za-z-0-9!-=' | head -c $length)

echo "PASSWORD generated is: $password"
