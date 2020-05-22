# Week 1

* ### Day 1: [First Bad Version](https://leetcode.com/explore/challenge/card/may-leetcoding-challenge/534/week-1-may-1st-may-7th/3316/)
Straight binary search looking for the bad version and using the API once each loop.
[*Solution*](first_bad_version.c++)

* ### Day 2: [Jewels and Stones](https://leetcode.com/explore/challenge/card/may-leetcoding-challenge/534/week-1-may-1st-may-7th/3317/)
Using a boolean array, mark all Jewels that you have, if you see any of them in the Stones, count them. Using a boolean array of size (`26 * 2 = 52`) is considered O(1) memory.
[*Solution*](jewels_and_stones.c++s)

* ### Day 3: [Ransom Note](https://leetcode.com/explore/featured/card/may-leetcoding-challenge/534/week-1-may-1st-may-7th/3318/)
Using O(1) memory (fixed size array) to count the number of available letters, then checking if you have enough letters to make the ransom note or  not.
[*Solution*](ransom_note.c++)

* ### Day 4: []()

[*Solution*]()

* ### Day 5: [First Unique Character in a String](https://leetcode.com/explore/featured/card/may-leetcoding-challenge/534/week-1-may-1st-may-7th/3320/)
Use a fixed size array to count the number of letters you have, the first one with frequency equals 1, return its index. Don't forget to return -1 if you don't find any.
[*Solution*](first_unique_character_in_a_string.c++)

* ### Day 6: [Majority Element](https://leetcode.com/explore/featured/card/may-leetcoding-challenge/534/week-1-may-1st-may-7th/3321/)
This question has several solutions. The first is to use a map (complexity = `O(log n)`) to count the frequency of each number and find the answer, this solution has complexity = `O(n log n)` with extra space because of using the map. Another solution would be to sort the numbers (complexity = `O(n log n)`), and find the length of each consecutive block with the same number to find the answer, this solution has complexity = `O(n log n)`. (continue)
[*Solution 1*](majority_element_1.c++)
[*Solution 2*](majority_element_2.c++)
[*Solution 3*]()

* ### Day 7: [Cousins in Binary Tree](https://leetcode.com/explore/featured/card/may-leetcoding-challenge/534/week-1-may-1st-may-7th/3322/)
In this question you should find the depth of each node and its parent, and they will be cousins only if they have same depth and different parents. (continue)
[*Solution*](cousins_in_binary_tree.c++)
