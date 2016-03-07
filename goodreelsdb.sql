create table if not exists `movie` (
`id` int(1) not null auto_increment,
`name` varchar(100) not null,
`release_year`int(1) not null,
`director` varchar(100) not null,
`mpaa_rating` varchar(5) not null,
`duration` int(1) not null,
primary key (`id`)
) AUTO_INCREMENT=7;

insert into `movie` (`id`, `name`, `release_year`, `director`, `mpaa_rating`, `duration`) values
  (1, 'Star Wars', 1977, 'George Lucas', 'PG', 121),
  (2, 'The Godfather', 1972, 'Francis Ford Coppola', 'R', 175),
  (3, 'Citizen Kane', 1941, 'Orson Welles', 'N/A', '119'),
  (4, 'Casablanca', 1942, 'Michael Curtiz', 'PG', 102),
  (5, 'Raging Bull', 1980, 'Martin Scorsese', 'R', 129);
