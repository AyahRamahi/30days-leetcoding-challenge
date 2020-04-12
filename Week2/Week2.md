# Week 2

* ### Day 1: [Mddle of the Linked List](https://leetcode.com/explore/challenge/card/30-day-leetcoding-challenge/529/week-2/3290/)
If you use 2 pointers one slow and one fast. The slow one moves 1 step at a time, but the fast moves 2 steps at a time, when the slow one reaches the middle the fast one would be at the end. When the fast pointer reaches the end, you know that the slow pointer is at the middle.
[*Solution*](middle_of_the_linked_list.c++)

* ### Day 2: [Backspace String Compare](https://leetcode.com/explore/challenge/card/30-day-leetcoding-challenge/529/week-2/3291/)
You walk both strings starting from the end to the beginning, you create new strings the contain only the undeleted charachaters, then you see if both new strings are equal or not. (continue)
*Complexity*: `O(N)`
[*Solution*](middle_of_the_linked_list.c++)

* ### Day 3: [Min Stack](https://leetcode.com/explore/challenge/card/30-day-leetcoding-challenge/529/week-2/3292/)
You create two stacks: main_stack that has the values added or removes, and min_value_stack which saves the min value for each value pushed to the main_stack, so you can always have the minimum value when asked for.(continue)
[*Solution*](min_stack.c++)

* ### Day 4: [Diameter of Binary Tree](https://leetcode.com/explore/challenge/card/30-day-leetcoding-challenge/529/week-2/3293/)

[*Solution*]()

* ### Day 5: [Last Stone Weight](https://leetcode.com/explore/challenge/card/30-day-leetcoding-challenge/529/week-2/3297/)
Use a priority queue to keep the values sorted, then each time take 2 numbers from it and push again the difference if not zero.(continue)
[*Solution*](last_stone_weight.c++)