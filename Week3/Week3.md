# Week 3

* ### Day 1: [Product of Array Except Self](https://leetcode.com/explore/other/card/30-day-leetcoding-challenge/530/week-3/3300/)
Because you want the product of all number except self, you may need to think of finding the product of all numbers left to a number, and product of all numbers right to a number, then multiplying both of these for each numbers to find the result. The solution does this without using 2 extra arrays, first you loop from left to right to find the product of numbers left to each one (the number left to index 0 is assumed 1), then you loop from right to left to multiply the values already in the array with the product of numbers to the right of each number (the number calculated in the temp variable) and result is put in the same array (the number right to index n-1 is assumed 1).
[*Solution*](product_of_array_except_self.c++)

* ### Day 2: []()

[*Solution*]()

* ### Day 3: [Number of Islands](https://leetcode.com/explore/other/card/30-day-leetcoding-challenge/530/week-3/3302/)
This question can be solved using the idea of finding the number of disjoint sets, you keep looking for any island (1) that you call DFS on to mark all its blocks as visited (convert them to 0).
[*Solution*](number_of_islands.c++)

* ### Day 4: [Minimum Path Sum](https://leetcode.com/explore/other/card/30-day-leetcoding-challenge/530/week-3/3303/)
This question can be solved using two approaches, the first is using Dijkstra to find the path with minimum sum from cell (0,0) until cell (m,n). The second one is to use a 2D array, loop over all cells and choose the minimum path for each one of them from the 2 allowed (top, or left), then the result would be inside the right bottom corner of your array.
[*Solution*](minimum_path_sum_1.c++)
[*Solution*](minimum_path_sum_2.c++)

* ### Day 5: []()

[*Solution*]()

* ### Day 6: []()

[*Solution*]()

* ### Day 7: []()

[*Solution*]()
