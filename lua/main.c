#include <stdio.h>
#include <string.h>
#include <lua5.4/lua.h>
#include <lua5.4/lauxlib.h>
#include <lua5.4/lualib.h>

int main(void) {
    lua_State *L = luaL_newstate();
    luaL_openlibs(L);

    if(!L ) {
      return -1;// check lua started up or not
    }
    int status = luaL_loadfile(L, "hello.lua"); // load lua file

    int ret = lua_pcall(L, 0, 0, 0); // calll function
    
    if (ret) {
        fprintf(stderr, "%s\n", lua_tostring(L, -1));
        return 1;
    }

    lua_getglobal(L, "hello");     // push function
    if (lua_pcall(L, 0, 1, 0) != 0) {
        fprintf(stderr, "%s\n", lua_tostring(L, -1));
        return 1;
    }
    const char *res = lua_tostring(L, -1);
    printf("%s\n", res);
    lua_close(L);
    return 0;
}