<p align="center">
  <div align="center">
   <img style="border-radius: 20px; box-shadow: 1px 8px 14px rgba(0, 0, 0, 0.4);" src="./assets/libft_path.png" width="425px"</img><br><br>
    <em><small><i>Your first libary...</i></small></em>
  </div>
</p>

# Libft 2.0

This is a revision of my first project in the [42 Silicon Valley](http://42.us.org) curriculum. As incoming students, we were tasked with re-coding a set of standard `libc` functions, as defined by their man pages as well as other useful functions from a given set of descriptions.

This project allows students to focus on learning the fundamentals of the C programming language in order to better utilize these tools in future projects.

Per the project, all of our functions must begin with `ft_` for, _Forty-Two_.

**Project Documents:**

[Libft.pdf](https://github.com/micriver/docs/libft.en%20.pdf)

All functions were written according to 42's coding standard,
[the Norm](https://github.com/micriver/docs/norme.en%20.pdf).

### To-do's:

- [ ] add ft_printf project as a submodule

## Installation

Download the repository by copying and pasting the commands below.

```bash
git clone https://github.com/micriver/libft-2.0.git
cd libft-2.0
```

You can compile the library using the Makefile:

| Command       | Action                               |
| :------------ | :----------------------------------- |
| `make`        | Compile the library.                 |
| `make clean`  | Remove object files.                 |
| `make fclean` | Remove object files and the library. |
| `make re`     | Re-compile the library.              |

## Usage

After compilation, the library can be used alongside your C programs with the following command:

```bash
gcc libft.a -I ./header <your_file.c> -o <output_name>
```
