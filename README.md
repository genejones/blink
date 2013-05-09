##Blink

This is a sample, easy Arduino sketch based upon the Blink sketch.

It demonstrates the necessary Ino framework and Git pre-commit hooks.

Here's how to get started:
+ Install the Ino framework. This is easy: ```pip install ino```. Only possible on Unix systems for now, sorry.
+ Start a new project with Ino, using ```ino init``` in a new folder
+ Start tracking the project with git by executing ```git init```
+ Enable a pre-commit hook, so that you compile before pushing to Github.  
This is done by making ```project_folder/.git/hooks/pre-commit```, then copying the example code used here
+ Create a repository on Github for this project.
+ Setup Rascal to watch the project repository on Github
+ Add Github as an origin: ```git add remote origin git@github.com:username/projectname.git```
+ Add all of our files: ```git add *```
+ Make our initial commit: ```git commit -m "Hello World! Initial commit```
+ Make sure the Arduino and Imp are on, and that Imp is running Rascal.
+ Push the commit to Github: ```git push origin```
+ Done!

Subsequent commits are much easier:
+ Alter code like a boss.
+ Include changes ```git add sketch/sketch.ino```
+ Commit changes ```git commit -m "Just made an awesome revision"```
+ Push changes ```git push origin```

Firmware changes can take up to 30 seconds to progegate, but they are usually much faster (it depends on how speedy Github is at sending Rascal a notification).
