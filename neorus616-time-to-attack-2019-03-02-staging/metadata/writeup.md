Time to Attack
========

## What to do?

Cost: 0%

Your task here is to find out the password for the file, which is the key of this challenge.

## What kind of anti brute force?

Cost: 30%

Check out that for different passwords, it take different amount of time to verify, is it the new anti brute force mechanism?
For more "correct" password, it takes more time to verify.

## Finding the right tool

Cost: 60%

Let's try for every digit from 0 to 9 to see which of them took the most time to verify, does this apply also to the second digit and so on?


## Complete solution

To get the flag, you need to get the password of the file.
As you already understood, when ever your password match more, the longed it takes to verify, so all we need to do, is to measure time of execution for each digit.
A complete python solution to this may look something like this:

import subprocess, time

bestGuess = ""
for z in range(0, 16):
    longerTime = 0
    latestGuess = bestGuess
    for d in range(0, 10):
        x = str(d) + str(latestGuess)
        beginTime = time.time()
        ps = subprocess.Popen('./timeAttack',shell=False,stdin=subprocess.PIPE, stdout=subprocess.PIPE, stderr=subprocess.PIPE)
        ps.communicate(x)
        endTime = time.time()
        if endTime - beginTime > longerTime:
            longerTime = endTime - beginTime
            bestGuess = x
print "The password is: " + latestGuess
