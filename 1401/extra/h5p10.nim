import std/[strutils, sequtils]

stdin
.readLine
.split(" ")
.mapIt(if it.len == 4: "LOVE" else: it)
.join(" ")
.echo
