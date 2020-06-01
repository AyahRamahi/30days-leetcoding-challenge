# Week 3

* ### Day 1: []()

[*Solution*]()

* ### Day 2: [Odd Even Linked List](https://leetcode.com/explore/featured/card/may-leetcoding-challenge/536/week-3-may-15th-may-21st/3331/)
The idea is to remove each odd node from its place and place it at the end of the linked list. (continue)
[*Solution*](odd_even_linked_list.c++)

* ### Day 3: [Find All Anagrams in a String](https://leetcode.com/explore/featured/card/may-leetcoding-challenge/536/week-3-may-15th-may-21st/3332/)
(continue) corner cases (does not exceed means it can be zero)
[*Solution*](find_all_anagrams_in_a_string.c++)

* ### Day 4: [Permutation in String](https://leetcode.com/explore/featured/card/may-leetcoding-challenge/536/week-3-may-15th-may-21st/3333/)
(continue)
[*Solution*](permutaion_in_string.c++)

* ### Day 5: [Online Stock Span](https://leetcode.com/explore/featured/card/may-leetcoding-challenge/536/week-3-may-15th-may-21st/3334)
(continue)
[*Solution*](online_stock_span.c++)

* ### Day 6: []()

[*Solution*]()

* ### Day 7: [Count Square Submatrices with All Ones](https://leetcode.com/explore/featured/card/may-leetcoding-challenge/536/week-3-may-15th-may-21st/3336/)
Square matrices have same height and width. In this question you want to find all square submatrices and check if they have all ones (sum of all values equals height * width). You start by converting the matrix you have to contain cumulative sum. After that, you loop over the matrix and for each cell you have, you find all suitable square matrices that have this cell as the bottom right corner, you then find the cumulative sum of the submatrix and check if it has all ones or not.
[*Solution*](count_square_submatrices_with_all_ones.c++)
