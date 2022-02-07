#!/bin/sh
ifconfig | awk '/ether/' | sed 's/.*ether\s//'