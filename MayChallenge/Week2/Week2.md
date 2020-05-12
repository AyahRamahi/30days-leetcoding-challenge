# Week 2

* ### Day 1: [Check If It Is a Straight Line](https://leetcode.com/explore/featured/card/may-leetcoding-challenge/535/week-2-may-8th-may-14th/3323/)
Create the line equation which is `y = m * (x - x1) + y1`, where m is the slope, and (x1,y1) is a point on this line. The slope is `(y2-y1)/(x2-x1)` which you can calculate using the first two points you have. After that, just check that each point applies to this equation, and return false if not.
[*Solution*](check_if_it_is_a_straight_line.c++)

* ### Day 2: [Valid Perfect Square](https://leetcode.com/explore/featured/card/may-leetcoding-challenge/535/week-2-may-8th-may-14th/3324/)
A perfect square is a number that is made be squaring a whole number. The solution is to take only the integer part of the sqrt of the number and squaring it, and check if it gives you the original number or not.
[*Solution*](valid_perfect_square.c++)

* ### Day 3: [Find the Town Judge](https://leetcode.com/explore/featured/card/may-leetcoding-challenge/535/week-2-may-8th-may-14th/3325/)
You want to find the person who is trusted by `N-1` others, and trusts `0`. You can have 2 arrays, one to count the number of trusted people for each person, and the other to find the number of people trusted by them. Also, you can save space and use one array only, you add 1 when the person is trusted, and subtract 1 when the person trusts another one.
[*Solution*](find_the_town_judge.c++)

* ### Day 4: [Flood Fill](https://leetcode.com/explore/featured/card/may-leetcoding-challenge/535/week-2-may-8th-may-14th/3326/)
This question can be solved using DFS, where you find out what is the oldColor you have, and look for every cell your current cell is connected to (4 directions only) that has the same color, and change it to newColor. Note that you should only do that if oldColor and newColor are not equal, because if they are, you will be stuck in an infinite loop and you already don't have to change anything.
[*Solution*](flood_fill.c++)

* ### Day 5: []()

[*Solution*]()

* ### Day 6: []()

[*Solution*]()

* ### Day 7: []()

[*Solution*]()
