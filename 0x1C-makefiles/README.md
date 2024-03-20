### What are make, Makefiles?   
- *make* is a command-line tool used to automate the building (compiling, linking) of software projects.   
- *Makefiles* are text files with special instructions that tell make what to do and how to do it.   
***   
### When, why and how to use Makefiles?   
**when to use Makefiles**   
- you have a project with multiple source files that need to be compiled.   
**why to use Makefiles**   
- Saves time by only recompiling files that have changed.   
- Improves consistency in the build process.   
- Makes complex builds easier to manage.   
**How to use Makefiles**   
- Create a file named Makefile (or makefile) in your project directory.   
- Write rules in the Makefile that define how to build targets from source files.   
- Run the make command from the terminal.   
***   
### What are rules and how to set and use them?   
**Rules in a Makefile specify how to create a target (output file) from its prerequisites (source files).**   
- Structure:   
```
target: prerequisites
    tab   commands
```
- *target:* The file you want to create (your program's executable).
- *prerequisites:* Files the target depends on (source code files).
- *commands:* Instructions to create the target from the prerequisites.
- *Tabs:* separate prerequisites and commands.
***
### What are explicit and implicit rules?
- Explicit rules: You define them in the Makefile to specify exactly how to build a target.
- Implicit rules: make has built-in rules for common tasks like compiling C/C++ source files into object files.
***
### What are the most common / useful rules?
- Compiling source files into object files.
- Linking object files into an executable.
- Cleaning up temporary files.
- Running tests.
***
### What are variables and how to set and use them?
- Variables allow you to reuse values and make your Makefile more concise.
- Define variables with an assignment operator (=):
```
VARIABLE_NAME = value
```
- Use variables in targets, prerequisites, and commands:
```
$(TARGET) : $(SOURCES)
        $(CC) $(CFLAGS) -o $(TARGET) $(SOURCES)
```
   