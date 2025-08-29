+[TSUFileIOChannel setShouldFullFsyncOnClose:]
void __cdecl +[TSUFileIOChannel setShouldFullFsyncOnClose:](id a1, SEL a2, bool a3)
{
  atomic_store(a3, byte_1001F7FE0);
}