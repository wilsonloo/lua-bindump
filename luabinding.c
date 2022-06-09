#include <stdint.h>
#include <stdlib.h>

#include "lua.h"
#include "lauxlib.h"

#include "bindump.h"

static int
ldump(lua_State * L) {
    const char * data = lua_tostring(L, 1);
    uint32_t len = lua_tointeger (L, 2);
    const char* title = lua_tostring(L, 3);

    dump(NULL, data, len, title);

    return 0;
}

int
luaopen_bindump_c(lua_State *L) {
    luaL_checkversion(L);

luaL_Reg l[] = {
    { "dump", ldump },
    { NULL, NULL },
  };
  luaL_newlib(L,l);

   return 1;
}
