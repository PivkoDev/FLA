

:ramen: Guidelines :ramen:

look also : https://github.com/fabioperez/cheat-sheets/blob/master/python/Effective-Python-summary.md

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

11. use zip() / zip_longest()

Iterators should have same length.

12. Avoid else: after for: and while:

13. Use try-except-else-finally

```
try:
  data = handle.read() # may throw nicodeDecodeError.
  op = json.loads(data) # may throw ValueError.
  value = op['value']
except ZeroDivisionError as e:
  return UNDEFINED
else:
  op['result'] = value
  return value
finally:
  handle.close() # Zawsze wykonywane.
```

14. Don't return None - throw Exceptions.

15. Closures cooperation with variable scope.

```
def make_counter():
    count = 0
    def counter():
        nonlocal count
        count += 1
        return count
    return counter
```

16. Use generators, instead of return list

```
def index_words_iter(text):
  if text:
    yield 0
  for index, letter in enumerate(text):
    if letter == ' ':
    yield index + 1
...
result = list(index_words_iter(address))
```

17. If iterating, keep defensive.

- be aware of functions that use iterators for input data 
- iterator protocol : Iterable : iter() returns iterator, iterator __next__ returns next element until StopIteration 
- implement __iter__() to have own container that supports iteration

```
lass ReadData(object):
  def __init__(self):
    pass
  def __iter__(self):
    with open('test.dat') as file:
      for line in file:
        yield int(line)

def normalize(numbers):
  if iter(numbers) is iter(numbers):
    raise TypeError('Konieczne jest dostarczenie kontenera')
  total = sum(numbers)
  result = []
  #  for calls iter() on second parameter
  # special method foo.__iter() that returns get_iterator
  for value in numbers:
    percent = 100  * value / total
    result.append(percent)
  return result

percentages = normalize(ReadData())
```

18. Use varying positional arguments in functions (*args)

19. Use named arguments in function calls.
- always use named argument when it is optional
```
pounds_per_hour = flow_rate(weight_diff, time_diff,
period=3600, units_per_kg=2.2)
```

20. Use None for default argument when they need to by dynamic.
- default arguments are calculated once
- use None and add describing docstring

21. Force to use named arguments
(only in Python3)
```
def safe_division_c(number, divisor, *,
  ignore_overflow=False,
  ignore_zero_division=False):
```
(in Python 2)
```
def safe_division_d(number, divisor, **kwargs):
  ignore_overflow = kwargs.pop('ignore_overflow', False)
  ignore_zero_div = kwargs.pop('ignore_zero_division', False)
  if kwargs:
    raise TypeError('Nieoczekiwany **kwargs: %r' % kwargs)
```

22. Prefer helper classes than dicts or tuples.


