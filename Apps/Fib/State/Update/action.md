action includes:
- EntityID (12 bits)
- Command  (4 bits)
- Data     (8 bits)

Direction - 02 bits 
Data      - 06 bits 

Walk = 
- Player ID   (12 bits)
- Walk - 0000 (4 bits)

- Delta X and y
- 4 bits for each, with the last bit being used to determine direction
- 0011 1001 -
  This corresponds to
  x = -1
  y = +3

Skill
- Player ID (12 bits)
- Skill     (4 bits )
  0010 - Skill00
  0011 - Skill01
  0100 - Skill02
  0101 - Skill03
  0110 - Skill04
  0111 - Skill05

- Delta X and y
- 4 bits for each, with the last bit being used to determine direction
- 0011 1001 -
  This corresponds to
  x = -1
  y = +3

Spawn
- Player ID   (12 bits)
- 1111        (4 bits )
- spawn point (8 bits )
- 00000000 = Top Left 
- 00000001 = Top Right 
- 00000010 = Bot Right  
- 00000011 = Bot Left 
