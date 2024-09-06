# SEI CERT C++ Coding Standard samples

This repo contains unaltered\* copies of all sample code from the _rules_ outlined in the [SEI CERT C++ Coding Standard](https://wiki.sei.cmu.edu/confluence/pages/viewpage.action?pageId=88046682). Sample code for the standard's various _recommendations_ have not been included and there is no outstanding plan to do so. These source code files are not guaranteed to compile cleanly, or even at all. They are meant for use in gauging the effectiveness of static analyzers against CERT's rules for the C++ programming language.

\* A single, one-line comment has been added to the top of each code sample to help associate it with its parent rule and, if available, provide some context.

## Nomenclature

Sample source files are found within the various subdirectories of the `rules` directory:

- `nc*.cpp` are non-compliant code samples
- `c*.cpp` are compliant code samples
- `ex*.cpp` are exception code samples

Code samples follow an origin 0 numbering scheme, _e.g._, the first non-compliant sample for a given rule is named `nc0.cpp`, the second `nc1.cpp`, and so forth. Code samples are numbered in the order they appear within the body of a rule. Occasionally, a sample is multipart, in which case its parts follow the form, `nc0-a.cpp`, `nc0-b.cpp`, and so on.

## Legal statement

All of the C++ source code files in the `rules` directory have been copied directly from the SEI CERT C++ Coding Standard. Accordingly, all of these source files are _Copyright © Carnegie Mellon University. All Rights Reserved._
