-[NSFileHandle uarpCloseAndReturnError:]
// attributes: thunk
bool __cdecl -[NSFileHandle uarpCloseAndReturnError:](NSFileHandle *self, SEL a2, id *a3)
{
  return -[NSFileHandle closeAndReturnError:](self, "closeAndReturnError:", a3);
}