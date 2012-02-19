# What is this? 

This project is just a fork from libedit. 
More informations of libedit can be found on http://www.thrysoee.dk/editline/

# Differences with the original libedit 

* Change default EDITOR to *vi* rather than emacs.
* Support external memory alloc/free callbacks. `rl_set_mem_functions` on readline.h. It allows you to link with google-perftools.

