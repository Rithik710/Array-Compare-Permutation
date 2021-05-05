# Array-Compare-Permutation
Ques => For a given two strings, 'str1' and 'str2', check whether they are a permutation of each other or not.
Permutations of each other
Two strings are said to be a permutation of each other when either of the string's characters can be rearranged so that it becomes identical to the other one.

Example: 
str1= "sinrtg" 
str2 = "string"

The character of the first string(str1) can be rearranged to form str2 and hence we can say that the given strings are a permutation of each other.

# Forget all Approaches, Just follow an easy logic
# Just sort both the arrays (character arrays) and compare  each index with another (0 with 0, 1 with 1 ). if all match , it means ans is true
