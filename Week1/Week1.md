# Week 1

* ### Day 1: [Single Number]([https://leetcode.com/explore/other/card/30-day-leetcoding-challenge/528/week-1/3283/](https://leetcode.com/explore/other/card/30-day-leetcoding-challenge/528/week-1/3283/))
This question uses the fact that A XOR A = 0. So, if you take cummulative XOR of all number in the array you can find the unqiue number.
[*Solution*](single_number.c++)

* ### Day 2: [Happy Number]([https://leetcode.com/explore/other/card/30-day-leetcoding-challenge/528/week-1/3284/](https://leetcode.com/explore/other/card/30-day-leetcoding-challenge/528/week-1/3284/))
Digit sum is adding the digits of a number. It is mathematically proven that digit sums once they reach one of these numbers [145,42,30,4,16,37,58,89] they keep infinitely repeating. So, you solve this question by repeatedly calculating the square digit sum and once you reach one of these numbers you know the number is not Happy :sob:, or until you reach 1 and find that it is happy. Another solution would be to use a visiting map, and if you reach a number once, you know you are stuck in a loop and you return false.
[*Solution*](happy_number.c++)

* ### Day 3: [Maximum Subarray]([https://leetcode.com/explore/other/card/30-day-leetcoding-challenge/528/week-1/3285/](https://leetcode.com/explore/other/card/30-day-leetcoding-challenge/528/week-1/3285/))
This question uses the idea of looking for a local_max and global_max. (continue)
[*Solution*](maximum_subarray.c++)

* ### Day 4: [Move Zeros]([https://leetcode.com/explore/other/card/30-day-leetcoding-challenge/528/week-1/3286/](https://leetcode.com/explore/other/card/30-day-leetcoding-challenge/528/week-1/3286/))
In this question, you keep a pointer on the last zero you find, and when you find a non zero number after it you swap them. (continue)
[*Solution*](move_zeros.c++)

* ### Day 5: [Best time to buy and sell 2]([https://leetcode.com/explore/other/card/30-day-leetcoding-challenge/528/week-1/3287/](https://leetcode.com/explore/other/card/30-day-leetcoding-challenge/528/week-1/3287/))
Here you can observe that you want to look for local_min and local_max to add the difference between them. Moreover, if you realize that you can only take the difference between the numbers as long as they are increasing, this would give you a cleaner code.
[*Solution*](best_time_to_buy_sell_2.c++)

*  ### Day 6: [Group Anagrams](https://leetcode.com/explore/other/card/30-day-leetcoding-challenge/528/week-1/3288/)
An anagram is a string with the same letters ordered differently. The solution here sorts each string to get all letters ordered then checks if another string with these letters exists, if yes you take its index and add it to its vector, if not you create a new vector and put it in it.
*Complexity*: `O(N K Log K)` (K is string size, N is vector size).
[*Solution*](group_anagrams_sol_1.c++)
A faster solution would be to remove the sort and create a vector to count letters in each string, then create a string out of this vector by separating each count of a letter by a #, then using the map on this created string to find out if you have a previous anagram or not.
*Complexity*: `O(N K)` (K is string size, N is vector size).
[*Solution*](group_anagrams_sol_2.c++)

* ### Day 7: [Counting Elements](https://leetcode.com/explore/other/card/30-day-leetcoding-challenge/528/week-1/3289/)
You can use an extra array to know if a number exists or not. Then you loop over your array and if the number+1 exists then you add 1 to the result;
[*Solution*](counting_elements.c++)