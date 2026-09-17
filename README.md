# [Jokzi](https://youtu.be/E5XZ7Fupupc)Loco
The first self-proclaimed “Evil” fork of [OpenLoco](https://github.com/OpenLoco/OpenLoco) (see its README for more information about this software).
Recreational use of JokziLoco is not recommended:
there is **no guarantee** that saves/scenarios created in JokziLoco - and objects created for it - will work in OpenLoco nor future versions of OpenLoco,
and they could potentially even break in future versions of JokziLoco.

## What's new in JokziLoco v000000000000000000 ?

### Support for One-Sided Track Pieces

@LeeSpork has gone rogue and has reimplemented one-sided track pieces!
These pieces allow you to build dual railroad tracks, allowing trains to pass by each other on one tile.
This is a vanilla feature that was already fully-functional in the original Locomotion, aside from one-sided slopes being invisible,
and some minor issues like signals being placed in slightly the wrong place in a couple cases. <!-- Is this true? -->

It went unused however, as neither track object that shipped with the game had them enabled.
But it could easily be brought back by creating a track object with the one-sided track pieces flag enabled!
...And figuring out how to create & order all the necessary sprites for it to render correctly.

This feature was broken in OpenLoco however,
with the construction buttons for them not working correctly,
and their paint data not being implemented.
Thus, this version of “JokziLoco” has fixed it!

Cherry-picking these changes back to OpenLoco TBD.

<img width="1461" height="883" alt="Evil Gauge Track v12 screenshot" src="https://github.com/user-attachments/assets/73f57521-00bb-4a53-9887-14240f88298e" />
(Evil Gauge Track v12 not included due to copyright concerns.)

### UTF-8

This branch also includes my Input​Session changes that converts it to use UTF-8.
This means non-ASCII characters will no longer be silently mojibaked if used in the names of your save​games.
