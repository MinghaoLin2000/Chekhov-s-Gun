-[NSFileHandle uarpReadDataUpToLength:error:]
// attributes: thunk
id __cdecl -[NSFileHandle uarpReadDataUpToLength:error:](NSFileHandle *self, SEL a2, unsigned __int64 a3, id *a4)
{
  return -[NSFileHandle readDataUpToLength:error:](self, "readDataUpToLength:error:", a3, a4);
}