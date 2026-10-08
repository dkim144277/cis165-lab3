# cis165-lab3

# tests
## diamond:
test run 1:  
3 spaces 1 star  
2 spaces 3 stars  
1 space 5 stars  
7 stars  
subsequent lines are the same as above but in reverse order  
## game_time
lvl 1 time = 78 minutes i.e 1h 18m  
lvl 2 time = 144 minutes i.e 2h 24m  
therefore difference should be 1h 6m  
test run 1: result is 1h 6m, looks good  
  
**NEW VALUES**  
lvl 1 now 67 (1h7m)  
lvl 2 now 128 (2h8m)  
difference should be 1h1m  
test run 1: result is 1h1m, also looks fine
# code explanations
For `diamond.cpp`, I used a single `cout` statement to print a string line by line. Each part of the diamond had the proper spaces preceding each set of stars as I copied directly from the lab prompt. I checked the spaces by selecting the empty spaces and counting them.  

For `game_time.cpp`, I defined two constants for level 1's time taken in minutes as well as level 2's. Then I made a new variable `diff_time` and set it to the value of `TIME_LVL_2 - TIME_LVL_1`. Then I used integer division to divide `TIME_LVL_1` and `TIME_LVL_2` by 60 to convert the minutes into hours. I also used the modulo operator `%` to calculate the remainder of the the minutes divided by 60 to get the amount of minutes that could not be converted to hours. My final variables were more or less the same thing but I converted `diff_time` into hours and minutes so I could display it in the upcoming `cout` line.  

I made 3 cout statements, the first one displaying level 1's hours and minutes. I did the same for the second and third, using level 2's time and the total difference in time respectively. This made for a fairly clean cout section of my code, which is why the assignment asks to not do any calculations in the cout function itself.
