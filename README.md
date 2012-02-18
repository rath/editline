# What is this? 

This project is just a fork from libedit. 
More informations of libedit can be found on http://www.thrysoee.dk/editline/

# Differences with the original libedit 

* Change default EDITOR to *vi* rather than emacs.
* Add a function `void* xmalloc(size_t)` on common.c and expose it on *readline.h*.
