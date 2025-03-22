#!/bin/bash
echo "------------------------Menu------------------------"
echo ""Select operation :-" 
echo "1.Addition"
echo "2.Substraction"
echo "3.Multiplication"
echo "4.Division"
echo "----------------------------------------------------"

read -p "Enter choice [1-4]: " choice
read -p "Enter number 1: " num1
read -p "Enter number 2: " num2



case $choice in
    1) echo "Sum: $((num1 + num2))" ;;
    2) echo "Difference: $((num1 - num2))" ;;
    3) echo "Product: $((num1 * num2))" ;;
    4) echo "Division: $((num1 / num2))" ;;
    *) echo "Invalid choice" ; exit 1;
esac
