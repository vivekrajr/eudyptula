Things to do to build kernel
----------------------------
1. Get the source code.
2. Run `make localmodconfig` to create `.config` file based on active modules.
3. Run `make -j8` to build the kernel.
4. Run `sudo make modules_install install` to install the kernel.
