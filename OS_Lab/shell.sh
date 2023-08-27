#!/bin/bash

# echo "enter the a vale"
# read a

# echo "enter b value"
# read b

# c=`expr $a + $b`
# echo "Sum: "$c

# c=`expr $a - $b`
# echo "Sub: "$c

# c=`expr $a \* $b`
# echo "Mul: "$c

# c=`expr $a / $b`
# echo "Div: "$c



# mkdir saad
# cd saad/
# touch hello.txt
# ls


# num="1 2 3 4 5 6 7 8"
# for n in $num
# do
#     q=`expr $n % 2`
#     if [ $q -eq 0 ]
#         then
#         echo "even number"
#         continue
#     fi
#         echo "odd number"
# done


# echo "Enter the number: " 
# read num

#     q=`expr $num % 2`
#     if [ $q -eq 0 ]
#         then
#         echo "even number"
#         else
#         echo "odd number"
#     fi


# echo " which table you want"
# read n
# for i in 1 2 3 4 5 6 7 8 9 10
#     do
#     echo $i "*" $n "=" `expr $i \* $n`
# done


# echo " which table you want"
# read n

# list="1 2 3 4 5 6 7 8 9 10"

# for i in $list
#     do
#     echo $i "*" $n "=" `expr $i \* $n`
# done


# echo "Enter the number for fact:"
# read n

# fact=1

# while [ $n -ne 0 ]
# do
#     fact=`expr $fact \* $n`
#     n=`expr $n - 1`
# done

# echo "$fact"


# echo " what do you want"
# read n
# for i in $(ls)
# do
# gedit $i
# done


# a=1
# while [ $a -lt 11 ]
# # -ge -gt -lt -le -eq -ne
# #[ $a -ne 11 -a $a -ne 12 ]
# #[ $a -ne 11 -o $a -ne 12 ]
# do
# echo "$a"
# a=`expr $a + 1`
# done



# for var1 in 1 2 3
# do
# for var2 in 0 5
# do
# if [ $var1 -eq 2 -a $var2 -eq 0 ]
# then
# continue
# else
# echo "$var1 $var2"
# fi
# done
# done


# for var1 in 1 2 3
# do
# for var2 in 0 5
# do
# if [ $var1 -eq 2 -a $var2 -eq 0 ]
# then
# continue
# else if [ $var1 -eq 4 -a $var2 -eq 1 ]
# then
# echo "$var1"
# else
# echo "$var1 $var2"
# fi
# fi
# done
# done


# add()
# {
# c=`expr $1 + $2`
# echo "addition = $c"
# }
# add 5 10

# add()
# {
# c=`expr $1 + $2 + $3`
# echo "addition = $c"
# }
# add 5 10 15


# add()
# {
# c=`expr $1 + $2 + $3`
# return $c
# }
# add 5 10 15
# # echo $?
# var=$?

# echo $var

# ch='y'
# while [ $ch = 'y' ]
# do
# echo "enter your choice"
# echo "1 no of user loged on"
# echo "2 print calender"
# echo "3 print date"
# read d
# case $d in
# 1) who;;
# 2) cal 22;;
# 3) date;;
# *) break;;
# esac
# echo "do you wish to continue (y/n)"
# read ch
# done

