Dragon integer
================

## Understanding the problem

Cost: 30%

It seems that whenever we attack the dragon, the dragon attack us back with more damage, seems it's not the way.

## Figuring out the relationship between the attack and heal

Cost: 60%

When we try to heal, the dragon heal himself more than we do.

## Complete solution

As we figured out, the dragon deal more damage then we do, and also he heal himself more then we do, so what will happen if we "over heal" the dragon?
Because the dragon health is "integer", when he reach the max integer value, it will become negative, which in the terms of the game, "dead" and we win.
