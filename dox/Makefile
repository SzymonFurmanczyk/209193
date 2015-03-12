DOXYGEN = doxygen

__start__:
	rm -f html/* latex/* latex/Makefile
	$(DOXYGEN) Doxyfile
	$(MAKE) latex/Makefile

clean:
	rm -f html/* latex/* latex/Makefile
