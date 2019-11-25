#!/bin/sh
find . -type f -name '*.sh' -execdir basename {} .sh ';'
