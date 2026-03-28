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
    int ret = lua_pcall(L, 0, 0, 0); // tell lua to run script
    if (ret) {
        fprintf(stderr, "%s\n", lua_tostring(L, -1));
        return 1;
    }

    lua_close(L);
    return 0;
}