"""
Assignment 7
Name:曾千芸
Student Number:109504501
Course:2021-CE1003-B
"""

class Solution(object):
   def letterCombinations(self, digits):
      if len(digits) == 0:
         return []
      characters = {2:"abc",3:"def",4:"ghi",5:"jkl",6:"mno",7:"pqrs",8:"tuv",9:"wxyz"}
      result = []
      self.solve(digits,characters,result)
      return result
   def solve(self, digits, characters, result, current_string="", current_level = 0):
      if current_level == len(digits):
         result.append(current_string)
         return
      for i in characters[int(digits[current_level])]:
         self.solve(digits,characters,result,current_string+i,current_level+1)

with open("109504501.txt", "w") as f:
    with open("digit.txt", "r") as file:
        num = file.read()
        number = Solution()
        f.write(" ".join(number.letterCombinations(num)) + "\n")
        f.write("109504501曾千芸")



