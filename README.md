# OpenLoco - _'Are you a helicopter?'_ branch

## Helicopter ??
The motivation behind this branch was to answer the question: _why is the Jinty (a steam locomotive) considered a helicopter??_ And to determine which other vanilla vehicles have the "isHelicopter" flag.

Through this branch, it can be discovered that the isHelicopter flag is used is and only if the vehicle is a helicopter, OR a steam engine.

The conclusion from this is that "isHelicopter" is clearly mis-named, as it is also used either for steam engines, or for some property that happens to be shared by all steam engines and no other non-aircraft vehicles.

## var_5E
In this branch, I also altered the vehicle status text to display the value of `var_5E` for the front bogey of train. This is related to the isHelicopter thing, as the function `shouldSetVar5E` only returns true if the vehicle has the isHelicopter flag, despite a comment mentioning that no aircraft can reach this code.

By doing this, it becomes visable that var_5E is used for wheel slipping. Accordingly, I have made this pull request to the main OpenLoco branch: https://github.com/OpenLoco/OpenLoco/pull/2784



---------------------




# 5 Licence
**OpenLoco** is licensed under the MIT License.

---

# 6 More information
- [GitHub](https://github.com/OpenLoco/OpenLoco)
- [TT-Forums](https://www.tt-forums.net)
- [Locomotion subreddit](https://www.reddit.com/r/locomotion/)
