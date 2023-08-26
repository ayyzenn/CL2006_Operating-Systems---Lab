#!/bin/bash

echo "Enter Subject1 Marks:"
read a

echo "Enter Subject2 Marks:"
read b

echo "Enter Subject3 Marks:"
read c

echo "Enter Subject4 Marks:"
read d

echo "Enter Subject5 Marks:"
read e

grade1=10       # A
grade2=9        # B
grade3=8        # C
grade4=7        # D
grade5=6        # F

points1=4
points2=3
points3=2
points4=1
points5=0

get_grade()
{
    FinalGrad=$1
    if [ $FinalGrad -ge 80 -a $FinalGrad -le 100 ] ; then
        return 10
    elif [ $FinalGrad -ge 70 -a $FinalGrad -le 79 ] ; then
        return 9
    elif [ $FinalGrad -ge 60 -a $FinalGrad -le 69 ] ; then
        return 8
    elif [ $FinalGrad -ge 50 -a $FinalGrad -le 59 ] ; then
        return 7
    elif [ $FinalGrad -ge 1 -a $FinalGrad -le 49 ] ; then
        return 6
    else
        echo "no result"
    fi
}

calculate_points()
{
    grade=$1
    if [ $grade -eq $grade1 ] ; then
        return $points1
    elif [ $grade -eq $grade2 ] ; then
        return $points2
    elif [ $grade -eq $grade3 ] ; then
        return $points3
    elif [ $grade -eq $grade4 ] ; then
        return $points4
    elif [ $grade -eq $grade5 ] ; then
        return $points5
    else 
        echo "no result"
    fi  
}

echo "-------------------------------------"

get_grade $a 
v=$?
if [ $v -eq $grade1 ] ; then
    echo "Course#1 grade: A"
elif [ $v -eq $grade2 ] ; then
    echo "Course#1 grade:B"
elif [ $v -eq $grade3 ] ; then
    echo "Course#1 grade: C"
elif [ $v -eq $grade4 ] ; then
    echo "Course#1 grade: D"
else 
    echo "Course#1 grade: F"
fi
calculate_points $v 
w=$?
echo "Course#1 points: $w"

echo ""

get_grade $b 
v=$?
if [ $v -eq $grade1 ] ; then
    echo "Course#2 grade: A"
elif [ $v -eq $grade2 ] ; then
    echo "Course#2 grade:B"
elif [ $v -eq $grade3 ] ; then
    echo "Course#2 grade: C"
elif [ $v -eq $grade4 ] ; then
    echo "Course#2 grade: D"
else 
    echo "Course#2 grade: F"
fi
calculate_points $v 
w=$?
echo "Course#2 points: $w"

echo ""

get_grade $c
v=$?
if [ $v -eq $grade1 ] ; then
    echo "Course#3 grade: A"
elif [ $v -eq $grade2 ] ; then
    echo "Course#3 grade:B"
elif [ $v -eq $grade3 ] ; then
    echo "Course#3 grade: C"
elif [ $v -eq $grade4 ] ; then
    echo "Course#3 grade: D"
else 
    echo "Course#3 grade: F"
fi
calculate_points $v 
w=$?
echo "Course#3 points: $w"

echo ""

get_grade $d
v=$?
if [ $v -eq $grade1 ] ; then
    echo "Course#4 grade: A"
elif [ $v -eq $grade2 ] ; then
    echo "Course#4 grade:B"
elif [ $v -eq $grade3 ] ; then
    echo "Course#4 grade: C"
elif [ $v -eq $grade4 ] ; then
    echo "Course#4 grade: D"
else 
    echo "Course#4 grade: F"
fi
calculate_points $v 
w=$?
echo "Course#4 points: $w"

echo ""

get_grade $e
v=$?
if [ $v -eq $grade1 ] ; then
    echo "Course#5 grade: A"
elif [ $v -eq $grade2 ] ; then
    echo "Course#5 grade:B"
elif [ $v -eq $grade3 ] ; then
    echo "Course#5 grade: C"
elif [ $v -eq $grade4 ] ; then
    echo "Course#5 grade: D"
else 
    echo "Course#5 grade: F"
fi
calculate_points $v 
w=$?
echo "Course#5 points: $w"
echo "-------------------------------------"