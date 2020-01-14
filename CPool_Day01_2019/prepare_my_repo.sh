#!/bin/sh
blih -u jules.clerc@epitech.eu repository create $1
blih -u jules.clerc@epitech.eu repository setacl $1 ramassage-tek r
blih -u jules.clerc@epitech.eu repository getacl $1
git clone git@git.epitech.eu:/jules.clerc@epitech.eu/$1
cp -r repo/lib $1
cp -r repo/Makefile $1
mkdir $1/include

