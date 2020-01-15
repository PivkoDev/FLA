

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

8. List comprehension : max 2 levels.

```
matrix = [[1, 2, 3], [4, 5, 6], [7, 8, 9]]
flat = [x for row in matrix for x in row]
squared = [[x**2 for x in row] for row in matrix]
```

9. Use generator expressions. Especially for big data.
```
>>> squares = (n ** 2 for n in numbers)
>>> squares
<generator object <genexpr> at 0x7f733d4f7e10>
```

10. Prefer enumerate() over range()

```
for i, item in enumerate(MANUFACTURERS):
  print ("{0} : {1}".format(i, item))
```

