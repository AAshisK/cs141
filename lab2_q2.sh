echo "What is your name?"
read yourname
echo "your name is $yourname"
mkdir $yourname
cd $yourname
for x in {1..5};do touch $yourname$x.cpp;
done



