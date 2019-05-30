#!/bin/sh

echo "Please Input Directory Name"
echo "Current directory:" #for quick reference
pwd

read DIR_NAME
while [ "${DIR_NAME: -1}" == "/" ] #string formatting;
do
  DIR_NAME=${DIR_NAME%/}
done
echo "Input file name"
read FILE_NAME

mkdir "$DIR_NAME"
touch "$DIR_NAME/$FILE_NAME.cpp"
#writing the new .cpp marathon file:
echo "\
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{

}"\
>> "$DIR_NAME/$FILE_NAME.cpp" #write "string" >> PATH
