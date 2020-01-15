

:ramen: Guidelines :ramen:

1. Python 3 > Python 2

2. use PEP 8

3. Python 3 : bytes (8bit) , str (UTF-8)

4. Make helper functions instead of complicated expressions.

5. Slicing
```
list[begin:end]
...
__getitem__() , __setitem__()
```

6. Slicing with step value.
```
list[begin:end:step
```
When step is used, don't use begin and end.
Do it in 2 lines of code instead

```
b = a[::2] # ['a', 'c', 'e', 'g']
c = b[1:-1] # ['c', 'e']
```

7. List comprehension instead of map() or filter()

```
thenewlist = [x + 23 for x in theoldlist]
```
