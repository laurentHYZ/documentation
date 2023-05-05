# -*- mode: org; -*-

#+NAME: init
#+begin_src shell :exports none
rm -rf .git
rm -f *.{html,md,txt}
#+end_src

#+NAME: hello
#+begin_src python :results output :exports none
print("nihao asdflkdj ", end='')
#+end_src


#+NAME: short_hash
#+BEGIN_SRC python :var line="shorthashhhh" :results output :exports none
print(line[:4], end='')
#+END_SRC

#+NAME: hash_to_dir
#+begin_src python :var line="somehash\n\n" :exports none :results output
print(f".git/objects/{line[:2]}/{line[2:]}".strip(), end='')
#+end_src

#+RESULTS: hash_to_dir
: .git/objects/so/mehash

#+NAME: strlen
#+begin_src python :var line="15 charact long" :exports none :results output
print(len(line), end='')
#+end_src
