DAY 3
Delete branch : git branch -d branch_name
Do git pull before push -> to keep local repo up to date
Original repo - > is upstream
Forked repo - > is origin

git checkout -b branch_name -> create and switch to branch in single command

When you want to push from local repo to github without cloning, we need to use :
git remote add origin <url>
Run the above command before pushing if you didn't clone.

HEAD - > Points to the current commit
git log displays all commits made in the project

Removing a file
git rm -f file_name

DIFFERENCE BETWEEN git reset and git revert :

https://www.pixelstech.net/article/1549115148-git-reset-vs-git-revert
