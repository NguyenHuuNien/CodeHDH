#!/bin/bash
ps -a
read -p "Nhap pip: " readPip

echo "== Chung toi se tat tien trinh con =="
kill -9 $readPip

echo "== Chuong trinh ket thuc  =="
