-[NSFileHandle uarpWriteData:error:]
// attributes: thunk
bool __cdecl -[NSFileHandle uarpWriteData:error:](NSFileHandle *self, SEL a2, id a3, id *a4)
{
  return -[NSFileHandle writeData:error:](self, "writeData:error:", a3, a4);
}