def is_palindrome(num):
    return (str(num) == str(num)[::-1] )


#driver code
print(is_palindrome(101))