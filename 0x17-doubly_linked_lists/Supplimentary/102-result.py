#!/usr/bin/python3

def is_palindrome(number):
    """Check if a number is a palindrome"""
    return str(number) == str(number)[::-1]

largest_palindrome = 0

# Iterate through all 3-digit number pairs
for i in range(999, 99, -1):
    for j in range(i, 99, -1):
        product = i * j
        if is_palindrome(product) and product > largest_palindrome:
            largest_palindrome = product

# Save the result in 102-result without a newline or extra space
with open("102-result", "w") as result_file:
    result_file.write(f"{largest_palindrome}")

