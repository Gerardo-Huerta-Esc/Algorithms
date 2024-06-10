'''
Example 1:

Input: x = 121
Output: true
Explanation: 121 reads as 121 from left to right and from right to left.


Example 2:

Input: x = -121
Output: false
Explanation: From left to right, it reads -121. From right to left, it becomes 121-. Therefore it is not a palindrome.
Example 3:

Input: x = 10
Output: false
Explanation: Reads 01 from right to left. Therefore it is not a palindrome.
 

Constraints:

-231 <= x <= 231 - 1
 

Follow up: Could you solve it without converting the integer to a string?
'''


        # """
        # :type x: int
        # :rtype: bool
        # """

class Solution():
    def __init__(self):
        pass

    def isPalindrome(self,x):
        booleano = True

        if x < 0:
            booleano = False
            print(booleano)
        
        else:
            digits = []
            while x > 0:
                digits.append(x % 10)  # Extraer el último dígito
                x = x // 10            # Remover el último dígito

            # Revertir la lista de dígitos para obtener el orden correcto
            digits.reverse()
            x_int_tuple = tuple(digits)

            # Leer la tupla al revés
            reversed_x_int_tuple = x_int_tuple[::-1]
            
            if x_int_tuple == reversed_x_int_tuple:
                print(booleano)
            else:
                booleano = False
                print(booleano)

def main():    
    num1 = Solution()
    print(num1.isPalindrome(-121))
    print(num1.isPalindrome(121)) 
    print(num1.isPalindrome(10)) 


if __name__ == '__main__':
    main() 

# ------------------- GPT lo hizo mejor -----------
class Solution:
    def __init__(self):
        pass

    def isPalindrome(self, x):
        if x < 0:
            return False
        

        digits = []

        while x > 0:
            digits.append(x % 10)  # Extraer el último dígito
            x = x // 10            # Remover el último dígito

        # Comparar los dígitos originales con los revertidos
        return digits == digits[::-1]