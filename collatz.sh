# Hello World Program in Bash Shell
# Collatz Conjecture 
echo "type in a number: "
read number 
count=0

while [ $number -gt 1 ]
do
    ((count=count+1))
    if [ $((number%2)) -eq 0 ];
        then
        ((number=number/2))
    else
        ((number=number*3))
        ((number=number+1))
    fi
done
echo $count