BINARIES = $(basename $(wildcard *.c *.s))

.PHONNY: clean

clean:
	rm -f $(BINARIES)
