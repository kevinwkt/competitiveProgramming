#!/bin/python3

import re

print(re.sub(r'\b[a-z][0-9][0-9]\b',"***",input()))
