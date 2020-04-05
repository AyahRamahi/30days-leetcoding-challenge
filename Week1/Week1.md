# Week 1

* ### Day 1: [Single Number]([https://leetcode.com/explore/other/card/30-day-leetcoding-challenge/528/week-1/3283/](https://leetcode.com/explore/other/card/30-day-leetcoding-challenge/528/week-1/3283/))
This question uses the fact that A XOR A = 0. So, if you take cummulative XOR of all number in the array you can find the unqiue number.
[*Solution*](single_number.c++)

* ### Day 2: [Happy Number]([https://leetcode.com/explore/other/card/30-day-leetcoding-challenge/528/week-1/3284/](https://leetcode.com/explore/other/card/30-day-leetcoding-challenge/528/week-1/3284/))
Digit sum is adding the digits of a number. It is mathematically proven that digit sums once they reach one of these numbers [145,42,30,4,16,37,58,89] they keep infinitly repeating. So, you solve this question by repeatedly calculating the square digit sum and once you reach one of these numbers you know the number is not Happy :sob:, or until you reach one. Another solution would be to use a visiting map, and if you reach a number once, you know you are stuck in a loop and you return false.
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