#!/usr/bin/env python3

from hashlib import md5

i = 1
while True:
    hash = md5(b'bgvyzdsv' + str.encode(str(i))).hexdigest()
    if hash.startswith("000000"):
        print(i, hash)
        break

    i += 1
