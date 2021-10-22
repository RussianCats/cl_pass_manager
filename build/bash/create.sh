#!/bin/bash
# 1 - где создать файл и его название 3 - пароль 2 - размер

veracrypt --text --create --random-source=/dev/urandom  << _EOF_
1
$1
$2
1
1
2
$3
yes
$3


_EOF_
