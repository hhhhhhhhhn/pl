# pl - print lines

a simple utility which reads a range of lines from file. in practice, it also works as a replacement for `head`, `tail`.

## usage

for printing the 9th line of file:
```
<file pl 9
```

for printing from the 9th to the 15th line of file:
```
<file pl 9-15
```

for printing until the 20th line of file:
```
<file pl -20
```

for printing from the 20th line of file:
```
<file pl 20-
```
