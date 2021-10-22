#!/bin/bash
# 1 - от куда монтировать 2 - куда монтировать 3 - пароль crypt 4 - пароль user
veracrypt -t $1 $2 << _EOF_
$3



$4
_EOF_