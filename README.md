# Group Groupless Project
The Software Dev Methods and Tools semester-long project repository for Group Groupless:

Dylan Cole (dylanlcole), Jessica Delaney (jede5031), Rebecca Robb (tabularasa7), and Brian T. Sullivan (SlayerWatcher6)

#Title
GoodReels

#Project Description
The goal of this project is to make a website similar to GoodReads that compiles info about movies / TV shows based on user reviews from sites, and making viewing lists, check to see where videos are available, etc.
Website URL: goodreels.webs.com

#Vision Statement
To offer an easy, accessible and customizable way for people to track, rate and share the movies and shows they love with everyone.

#Motivation
People love sharing the things they enjoy with others. With GoodReels, we want to be able to allow people to create a personal, customizable space where they can rate films and TV series, as well as comment, provide feedback, make viewing diaries, track their progress watching shows on their watch-lists, and share with their friends.  We want people to be able to do this all in one place, so that all the information they add or look for can be found in one convenient location.

#Risks
-The four of us have little / no experience working with one another

-Limited / inter-dispersed knowledge relevant to completing a project of this scale

-Potential lack of resources to handle scope of service

-Varying schedules between group members may make in-person meetings difficult to schedule

#Mitigation to Handle Risks
-The four of us have little / no experience working with one another

         Mitigation: working together, getting to know each other, keeping communication
         
-Limited / inter-dispersed knowledge relevant to completing a project of this scale

         Mitigation: specialization in certain areas and task division based on these specializations for every sprint
         
-Varying schedules between group members may make meetings

       Mitigation:  utilizing calendaring software to see when we can meet and using project management software when we can't
       
-Limited resources

       Mitigation:  utilize as many free resources and intelligent development strategies as possible
       

#Requirements
User Requirements:

U01: As a User, I want to be able to track my viewing history so that I can share with my friends. - 3

U02: As a User, I want to be able to login so that I can track my information using my account. - 1

U03: As a User, I want to be able to recommend movies so that I can share what I like with friends. - 3

U04: As a User, I want to be able to rate movies that I've seen so that I know which ones I want to watch again. - 3

U05: As a User, I want to be able to comment on shows so that my friends can see what I think of a show. - 2

U06: As a User, I want to be able to create a watch-list so that I can keep track of shows I want to see. - 2

U07: As a User, I want to be able to see where my favorite shows are available to watch, so that I can watch them easily. - 5

Functional Requirements:

F01: As a Developer, I want to be able to create a movie database so that we can consolidate user information. - 6

F02: As a Developer, I want to be able to pull updated list information from video web services regularly so that I can keep the database up to date on films and movies. - 6 

F03: As a Developer, I want to be able to build an easy to use website so that people can track their favorite movies. - 4

Non-Functional Requirements:

N01: As a Developer, I want to be able to update the database frequently so that I can stay up to date on where shows are available. - 3

#Methodology
Agile

#Project Tracking Software
We will be using Trello as our project tracker. The URL for the project board is https://trello.com/b/cJTjfLF5/project-board	
![Blerg](http://i.imgur.com/DAx7LuO.jpg)

#Repo Organization

-public_html/web: the html, css, img, and js files for the website

-Capabilities.txt: an outline for website capability documentation

-CommentTest.html: a tester for adding comments on our old comment system

-D&DTest.cpp: NOT RELEVANT TO PROJECT. The program I wrote to introduce some (very basic) concepts of D&D. Download this CPP file, and compile and run it using "g++ -std=c++11" and "./a.out" (both without the quotes) to run it

-GoodReels-slides.pdf: the PDF of our final presentation slides

-GoodReelsAutoTestv2: the test suite for our automated tests

-goodreelsdb.sql: SQL used to set up database 

-MenuTraversal.html: a tester for traversing the website

-MovieTestDB.csv: A CSV file containing an (unordered) list of the American Film Institute's top 20 films. Ratings of "N/A" is for films made prior to the MPAA creation of its current rating system that have not since been rated. This file will be used to help work with the database.

-project_breakdown.txt: a text file with ideas for the project plan to add to the Trello

-Test1.png, Test2.png, Test3.png: automated test images

-UAT 1.pdf, UAT 2.pdf, UAT 3.pdf: user acceptance test documentation

-WeekGoals.txt: outline for weekly goal discussions

All other information relevant to the site can be found on https://github.com/GoodReels/GoodReels.github.io

#Where to find and/or how to build the docs
Autodocumentation for sorttable.js performed using JSDoc.
Run by typing "jsdoc sorttable.js". The result is index.html under the out/ directory.

#Describe how to build/run/test/etc code
To run tests, install the Selenium IDE as an add-on to FIREFOX. Then open the Selenium IDE and select GoodReelsAutoTestv2 and MenuTraversal.html. Then click the green button and run the test.

(NOTE: Tests for commenting will currently fail, because we have not updated the tests for our current commenting system that works via Google+.)


#Website Address
-Changed website due to lack of custom HTML on previous site.  New website is goodreels.github.io
