# LochNess `cat` utility

## About

* * *

The cat (short for “concatenate“) command is one of
the most frequently used command in Linux/Unix like
operating systems. cat command allows us to create
single or multiple files, view contain of file,
concatenate files and redirect output in terminal or
files.

## Program Preview

* * *

Please add an image for the user to see.

## Tooling information

* * *

Targeted audience we are building for is LochLess OS users. This project uses
[Meson](https://mesonbuild.com/) `0.56.0` and newer.

## Setup, Compile and Install

* * *

Firstly the users should set up a project build directory before
compiling:

```console
meson setup builddir
```

The next step should be to compile the target of a configured
Meson project:

```console
meson compile -C builddir
```

Then we install the application like so:

```console
meson install -C builddir
```

And finally we run this cool application:

```console
cat <option> <command>
```

## Contact the developer

* * *

You may find that I have a number of ways that you can contact
me. All of these methods happen to be listed on my blogging platform
[Mike's virtual office](https://michaelbrockus.home.blog/contact/).

Lastly don't forget to have a cup of virtual coffee. Thanks.
