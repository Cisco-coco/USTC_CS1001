files := file2 file1
some_file: $(files)
	echo "Look at this variable: " $(files)
	touch some_file
	echo $@

file1:
	touch file1
	echo "This is file1" > file1
file2:
	touch file2
	echo "This is file2" > file2

clean:
	rm -f file1 file2 some_file