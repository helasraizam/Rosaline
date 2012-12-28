echo -n "">files.h; # erase file contents.
for file in CODE/*.cpp; do
	echo "#include \"$file\"">>files.h;
done;
