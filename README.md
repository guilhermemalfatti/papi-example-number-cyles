# papi-example-number-cyles
that repository is an example how to use the library PAPI, in this example I'm only print the number of cycles

More info here:
http://icl.cs.utk.edu/papi/software/


*****************************************************************************
HOW TO INSTALL PAPI ONTO YOUR SYSTEM
*****************************************************************************

On some of the systems that PAPI supports, you can install PAPI right 
out of the box without any additional setup. Others require drivers or 
patches to be installed first.

The general installation steps are below, but first find your particular 
Operating System's section for any additional steps that may be necessary.
NOTE: the configure and make files are located in the papi/src directory.

General Installation

1.	% ./configure
	% make

2.	Check for errors. 

	a) Run a simple test case: (This will run ctests/zero)

	% make test

	If you get good counts, you can optionally run all the test programs
	with the included test harness. This will run the tests in quiet mode, 
	which will print PASSED, FAILED, or SKIPPED. Tests are SKIPPED if the
	functionality being tested is not supported by that platform.

	% make fulltest (This will run ./run_tests.sh)

	To run the tests in verbose mode:

	% ./run_tests.sh -v

3.	Create a PAPI binary distribution or install PAPI directly.

	a) To install PAPI libraries and header files from the build tree:

	% make install

	b) To install PAPI manual pages from the build tree:

	% make install-man

	c) To install PAPI test programs from the build tree:

	% make install-tests

	d) To install all of the above in one step from the build tree:

	% make install-all

	e) To create a binary kit, papi-<arch>.tgz:

	% make dist
