-[NSFileHandle uarpSeekToEndReturningOffset:error:]
// attributes: thunk
bool __cdecl -[NSFileHandle uarpSeekToEndReturningOffset:error:](
        NSFileHandle *self,
        SEL a2,
        unsigned __int64 *a3,
        id *a4)
{
  return -[NSFileHandle seekToEndReturningOffset:error:](self, "seekToEndReturningOffset:error:", a3, a4);
}