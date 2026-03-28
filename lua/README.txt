Run (headers live in this diretory)
``` 
ls /usr/include/lua5.2
```

```
lauxlib.h  luaconf.h  lua.h  lua.hpp  lualib.h
```

compiling:
```
gcc main.c -o main -llua5.4
```
ref- 
https://www.lua.org/pil/26.1.html
https://github.com/klgraham/lua-c-embedding/blob/master/hello-world/hello.c