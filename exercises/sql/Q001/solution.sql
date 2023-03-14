SELECT pid FROM pokemon WHERE pname = 'Pikachu';

SELECT tname FROM pokemon
  LEFT NATURAL JOIN ptype
  WHERE pname = 'Charmander';

SELECT pname FROM pokemon
  NATURAL JOIN ptype pt1 
  WHERE tname = 'Normal';

SELECT pname FROM pokemon
  NATURAL JOIN ptype pt1
  INNER JOIN ptype pt2 ON pokemon.pid = pt2.pid
  WHERE pt1.tname = 'Grass' AND pt2.tname = 'Poison';
