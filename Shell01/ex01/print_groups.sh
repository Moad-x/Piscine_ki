#!/usr/bin/bash

id -Gn "$FT_USER" | sed -e "s/ /,/g" -e "s/daemon/daemon.bin/" | tr -d '\n' 
