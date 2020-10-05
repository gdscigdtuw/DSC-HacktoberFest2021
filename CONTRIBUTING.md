# How to Contribute


- Fork this repository - [How to fork a repository](https://services.github.com/on-demand/intro-to-github/create-pull-request)
- Clone the forked repository into local space.
- Add your info in the `addInfo.json` file in code folder
- Add and commit the changes.
- Don't forget to add your name, image url and country in contributors table in the README.md file.
- Generate a Pull Request.
- That's it, you have successfully completed your first PR.

# How to Sync Forked Repo from Upstream Repo

1. Add the original repository as an upstream repository
```javascript
$ git remote add upstream https://github.com/[Original Owner Username]/[Original Repository].git
```

2. Fetch all the changes from the repository. Note that commits to the original repository will be stored in a local branch called, upstream/master
```javascript
$ git fetch upstream
```

3. Make sure that you are on your fork's master or working branch
```javascript
$ git checkout [working branch]
```
For example,
```javascript
$ git checkout master
```

4. Merge the changes from the upstream/master into  your local master or working branch. This will sync the fork's master branch with the upstream repository without losing your local changes. If you have made any changes that create conflict, you will have to resolve the conflict before you can complete the merge
```javascript
$ git merge upstream/master
```

5. At this point, your local branch is synced with the upstream/master branch. In order to update the remote branch in Github, you need to push your changes
```javascript
$ git push origin master
```

