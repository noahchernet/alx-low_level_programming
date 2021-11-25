#!/usr/bin/python3

# FInd the biggest palindrome made from the product of two 3-digit numbers
biggest_palindrome = 0
for x, y in zip(range(100, 1000), range(100, 1000)):
	if str(x * y)[::-1] == str(x * y):
		biggest_palindrome = x * y

print("Biggest palindrome is:", biggest_palindrome)
