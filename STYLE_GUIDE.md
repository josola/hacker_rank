# Style Guide

Things may start simple but can get overly complicated if some restrictions aren't put into place. Please read through this document before contributing.

## Banners

Banners follow the average structure of a source file found in the Linux GitHub repository.

```c++
/* path_to_file/filename.cpp
 * A sentence that describes the
 * problem being solved.
 *
 * (c) year copyright_holder
 * Written by writer_name
 */
```

## Code Formatting

Blocks of code are formatted with the start-of-scope block and end-of-scope block on individual lines.

Yes:
```c++
Function ()
{
...
}
```

No:
```c++
Function () {
...
}
```
Add spaces within expressions. Don't bunch up information that doesn't need it.

Yes:
```c++
if (1 + 1 == 2)
{
...
}
```

No:
```c++
if(1+1==2)
{
...
}
```

Function names are capitalized, not *camelCase* or *lower_case* or *ALL_CAPS*.

```c++
int FunctionName()
{
...
}
```

Add line breaks between relevant blocks of code to increase readability for others.

Yes:
```c++
vector<int> triplet_a;

for (int i = 0; i < 3; i++)
{
    int hold = 0;
    cin >> hold;
    triplet_a.push_back(hold);
}

vector<int> triplet_b;

for (int i = 0; i < 3; i++)
{
    int hold = 0;
    cin >> hold;
    triplet_b.push_back(hold);
}
```

No:
```c++
vector<int> triplet_a;
for (int i = 0; i < 3; i++)
{
    int hold = 0;
    cin >> hold;
    triplet_a.push_back(hold);
}
vector<int> triplet_b;
for (int i = 0; i < 3; i++)
{
    int hold = 0;
    cin >> hold;
    triplet_b.push_back(hold);
}
```

## Best Practices

Practice: Always return a value at the closing of your main function.
Why: An explicit return allows other programmers to determine exactly when your algorithm has finished and how it has finished.

Yes:
```c++
int main()
{
...
return 0;
}
```

No:
```c++
int main()
{
...
}
```

Practice: Use the Standard Template Library (STL) where necessary. Don't rewrite something unless you can extend it well.
Why: Standardized algorithms allow programmers to speak the same language at an easier-to-understand level. Rather than them having to decipher a handwritten algorithm before any improvements can be made.

Yes:
```c++
#include <iostream> // std::cout std::endl
#include <numeric> // std::accumulate
#include <vector> // std::vector

using std::cout;
using std::endl;
using std::accumulate;
using std::vector;

int main()
{
    vector<int> lengths = {12, 34, 2, 45, 15, 82};

    int total_lengths = accumulate(lengths.begin(), lengths.end(), 0);

    cout << lengths << endl;

    return 0;
}
```

No:
```c++
#include <stdio.h>

int main()
{
    int lengths[6] = {12, 34, 2, 45, 15, 82};

    int total_lengths = 0;
    for (int i = 0; i < sizeof(lengths)/sizeof(lengths[0]); i++)
    {
        total_lengths += lengths[i];
    }

    printf("%d\n", lengths);
    
    return 0;
}
```

IMPORTANT: This one is not a guideline, this one is an immutable rule. Never use ``using namespace std``. Instead, use ``using`` statements for individual libraries included within your source file. This keeps code clean and adds granularity to namespace usage throughout the source.
Why: Using a blanket ``using namespace std`` obfuscates the code you have written in the eyes of future readers. The ``std`` namespace includes a lot of algorithms and methods within C++. It becomes extremely hard to identify whether a method is written by hand, and by you, or whether it is included in the Standard Template (STL) library.

Yes:
```c++
#include <iostream> // std::cout std::cin

using std::cout;
using std::cin;

int main()
{
...
return 0;
}
```

No:
```c++
#include <iostream>
#include <numeric>
#include <vector>
#include <string>

using namespace std;

int main()
{
...
    return 0;
}
```

Try to initialize your variables before they are used. Do not leave them holding garbage values within memory.

Yes:
```c++
int age = 0;
string name = "";
bool student = false;
float gpa = 0.0;
char grade_mark = 'z'; 
```

No:
```c++
int age;
string name;
bool student;
float gpa;
char grade_mark;
```

Always provide meaningful names for your variables, constants, structs, classes, objects, etc... Do not use single-letter variable names, this is confusing for other people to read later.

Yes:
```c++
float gpa = 2.3;
float deans_list_min = 3.5;
```

No:
```c++
float a = 2.3;
float min = 3.5;
```