
echo -n "Enter no of rows: "
read row
i=1
while [ $i -ne `expr $row + 1` ]
do
	j=$row
	while [ $j -ge `expr $i` ]
	do
		echo -n " "
		j=`expr $j - 1`
	done
	j=1
	while [ $j -le `expr $i` ]
	do
		echo -n " *"
		j=`expr $j + 1`
	done
	echo ""
	i=`expr $i + 1`
done
