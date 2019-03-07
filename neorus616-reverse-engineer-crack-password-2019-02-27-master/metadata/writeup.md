Cracking password
========

## What to do?

Cost: 0%

Your task here is to find out the password for the file, which is the key of this challenge.

## Looking for the right tool

Cost: 10%

If you check the file, you will see it's an executable file, how can we see what's inside?

## Finding the right tool

Cost: 15%

To see how a file works in the machine language, we need to disassembly it, and to see how it works when it run we need to debug it, so we can use x64dbg for it or any other debugger.

## Magic word

Cost: 30%

If you open the file with x64dbg and look for strings, you will notice the string "password must be of 9 characters", and if you follow this string, you will find a "magicword", which is 9 characters long too.

## Magic word

Cost: 35%

Lets step in the debugging and see what happens to our input as we stepping inside the debug.

## Complete solution

To get the password, we need to debug our file, for an easy way to know when to put a breakpoint, we will search for string in our code.
After we found the string "password must be of 9 characters", we follow to the line in the disassembly, we can see few lines below a 'magicword', lets put a breakpoint on the first 'm' and run the code.
When we stop, we can see that our 9 character password didn't changed yet, but if we step in inside, we will notice our password begining to change, and at the end we have a cmp with a string "thesecret", and after that a jmp to an error message.
Now we understand what we are comparing to, but don't know why our password is changing, remember the 'magicword'? lets debug again to the point when our first char of the password begin to change, and we will notice a xor instruction, our password is xor'ing with the 'magicword', and then compared to 'thesecret', so all we need to do, is xor the word 'thesecret' with 'magicword' and it will be our password = "9)":&4=70".
