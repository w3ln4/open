# open
I create this project to learn some TDD principles and do something useful as a side effect.

So let's start from the beginning. I want to construct some non-trivial graph functionality described as below:
1. The graph nodes represent some teritories.
2. There are two kinds of nodes: land and naval teritories. (actually there might be a third kind but don't complicate it right now)
3. There are also land and naval units that can be placed only on corresponding types of teritories.
4. There are players that own their own set of units.
5. Move rules:
	- naval units only move from currently occupied naval teritory to chosen adjacent naval teritory
	- if for chosen naval unit there is an adjacent naval teritory that is occupied by another unit belonging to the same player they create a joint set of naval teritories.
	- land units may move from currently occupied land teritory to the chosen adjacent land teritory
	- land units may also use naval transportion - if currently occupied teritory has at least one adjacent naval teritory occupied by a unit belonging to the same player, land unit may move to every adjacent land teritory of the joint set of this naval teritory
6. There is also already mentioned a third kind of 'teritory': a port that lies between one land and one naval teritory with the following rules:
	- port belongs to the owner of this land teritory
	- for the owner of the port it behaves like a normal naval teritory
	- for other players port is inaccesible from naval teritory
	- if other player conquers the port's land teritory they may become the owner of all naval units from the port

These rules are not actually coincidental. They are taken from a board game of my choice. Anyway, if I get some fancy pictures of these rules I might place it here but for now let's have some coding!

I choose C as a language as I do not see many projects written in C with TDD metodology.
