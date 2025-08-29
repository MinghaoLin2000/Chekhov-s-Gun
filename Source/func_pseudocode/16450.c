-[NSFileHandle uarpSeekToOffset:error:]
// attributes: thunk
bool __cdecl -[NSFileHandle uarpSeekToOffset:error:](NSFileHandle *self, SEL a2, unsigned __int64 a3, id *a4)
{
  return -[NSFileHandle seekToOffset:error:](self, "seekToOffset:error:", a3, a4);
}