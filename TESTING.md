#Part 3 for SDMT Group

#Group Members
Becky Robb, Brian Sullivan, Dylan Cole, and Jessica Delaney

#Title of Project
GoodReels

#Vision
To offer an easy, accessible and customizable way for people to track, rate and share the movies and shows they love with everyone.

#Automated Tests

Required: Firefox Web Browser, Selenium IDE Add-On for Firefox

1. Open a Firefox web browser.

2. Download the Selenium IDE Add-On for Firefox. Once downloaded a square icon with a pencil and (Se) will show up in your browser tools. Found here: https://addons.mozilla.org/en-US/firefox/addon/selenium-ide/

3. Download the following files from the GroupGrouplessProject repository:
  - GoodReelsAutoTestv2 test suite
  - MenuTraversal.html
  - CommentTest.html

4. Open the Selenium IDE and open the GoodReelsAutoTestv2 test suite.

5. Run the test suite.  If successful, the tests will run and complete with all green steps.

#User Acceptance Tests

Test #1: Logging in and signing out

1. Visit http://goodreels.github.io/.

2. Click the "Login" link under the page's header picture.

3. Click "Sign in with Google" at the top of the page.

4. A new window should appear. Follow the prompts to sign in using your Google account.

5. The window should now say "GoodReels would like to:" followed by some permissions. Click "Allow" at the bottom right. The GoodReels login page should now say "Signed in with Google".

6. To sign out, click the "Sign out" link under the Google logo. You should now be signed out.

*************************************************

Test #2: Using the movie index to sort and open movies

1. Visit http://goodreels.github.io/.

2. Click on "Go to Movie Index" under the Movie Index near the bottom.

3. Click the "Movie Title" header on the table. The movies should now be sorted alphabetically by title. Clicking it again will do so in the reverse order.

4. Click the "Director" header on the table. The movies should now be sorted alphabetically by director. Clicking it again will do so in the reverse order.

5. Click the "Release Date" header on the table. The movies should now be sorted chronologically. Clicking it again will do so in the reverse order.

6. Click "2001 A Space Odyssey' in the 'Movie Title' column. You should now see the information page for this movie.

*************************************************

Test #3: Finding a movie and commenting on it

1. Visit http://goodreels.github.io/

2. Click on "Go to Movie Index" under the Movie Index near the bottom.

3. Click "The Godfather" in the 'Movie Title' column. You should now see the information page for this movie.

4. Scroll down to the "Comments" section, so that you can see the "Name" and "Enter your comment here" fields.

5. Enter your name in the "Name" field and a comment of your choice in the "Enter your comment here" field.

6. Click the "Comment" button at the bottom. Your comment should now be posted.
