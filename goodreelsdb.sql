create table if not exists `movie` (
`id` int(1) not null auto_increment,
`name` varchar(100) not null,
`release_year` int(1) not null,
`director` varchar(100) not null,
`mpaa_rating` varchar(5) not null,
`duration` int(1) not null,
primary key (`id`)
) AUTO_INCREMENT=7;

load data local infile 'MovieTestDB.csv' into table `movie` fields
terminated by ','
enclosed by '"'
lines terminated by '\r'
ignore 1 rows
(`name`, `release_year`, `director`, `mpaa_rating`, `duration`);
