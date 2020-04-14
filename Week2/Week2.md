# Week 2

* ### Day 1: [Mddle of the Linked List](https://leetcode.com/explore/challenge/card/30-day-leetcoding-challenge/529/week-2/3290/)
If you use 2 pointers one slow and one fast. The slow one moves 1 step at a time, but the fast moves 2 steps at a time, when the slow one reaches the middle the fast one would be at the end. When the fast pointer reaches the end, you know that the slow pointer is at the middle.
[*Solution*](middle_of_the_linked_list.c++)

* ### Day 2: [Backspace String Compare](https://leetcode.com/explore/challenge/card/30-day-leetcoding-challenge/529/week-2/3291/)
In the first solution, you walk both strings starting from the end to the beginning, you create new strings the contain only the undeleted charachaters, then you see if both new strings are equal or not.
In the second solution, you save the space of creating new strings, you walk from the end of both strings and in each one of them, you look for a undeleted characher, then you check if they are not equal your return false, otherwise, you check if one of them is less than zero and the other is larger than or equal to zero(one of them finished and the other is not) then you return false, if not any of these cases you decrement both pointers and go again.
*Space Complexity*: `O(N + M)`
[*Solution*](middle_of_the_linked_list_1.c++)
*Space Complexity*: `O(1)`
[*Solution*](middle_of_the_linked_list_2.c++)

* ### Day 3: [Min Stack](https://leetcode.com/explore/challenge/card/30-day-leetcoding-challenge/529/week-2/3292/)
You create two stacks: main_stack that has the values added or removes, and min_value_stack which saves the min value for each value pushed to the main_stack, so you can always have the minimum value when asked for.(continue)
[*Solution*](min_stack.c++)

* ### Day 4: [Diameter of Binary Tree](https://leetcode.com/explore/challenge/card/30-day-leetcoding-challenge/529/week-2/3293/)
The idea is to realize that surely one node will be the connecting of two paths underneath it to get the max length. So, on each node you calculate the sum of lengths of the two paths(only two because it's a binary tree), then you maximize the output for all nodes. On each node, you want to give the parent that longest path you can walk underneath it, so you return the maximum of the right and left paths.
[*Solution*](diameter_of_binary_tree.c++)

* ### Day 5: [Last Stone Weight](https://leetcode.com/explore/challenge/card/30-day-leetcoding-challenge/529/week-2/3297/)
Use a priority queue to keep the values sorted, then each time take 2 numbers from it and push again the difference if not zero.(continue)
[*Solution*](last_stone_weight.c++)

* ### Day 6: [Last Stone Weight](https://leetcode.com/explore/challenge/card/30-day-leetcoding-challenge/529/week-2/3297/)

[*Solution*]()

* ### Day 7: [Perform String Shifts](https://leetcode.com/explore/challenge/card/30-day-leetcoding-challenge/529/week-2/3299/)
If you notice that 1 left shift cancels 1 right shift, so you want to find the sum of all shifts and know if it is to the right or to the left (skip full rotation by taking the mod). Then you can use the string rotation trick, where you add the string to itself (ex:`abc` becomes `abcabc`), and then return the result depending on the side of rotation (find the relation).
[*Solution*](perform_string_shifts.c++)