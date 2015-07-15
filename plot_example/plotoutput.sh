#!/usr/bin/gnuplot


set terminal push
set terminal png
set output "output.png"
plot "output.txt" with boxes
set output
set terminal pop

