bindump.c/h @ https://gist.github.com/wilsonloo/e0ee6b9c528c56abd4845c7e6d1ff025

# usage
```bash
make
```

```lua
local BinDump = require "bindump.c"

local data = "abcde"
BinDump.dump(data, #data, "this a title")
```
