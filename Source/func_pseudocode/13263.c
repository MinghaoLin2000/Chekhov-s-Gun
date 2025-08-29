+[TSUFileIOChannel shouldFullFsyncOnClose]
bool __cdecl +[TSUFileIOChannel shouldFullFsyncOnClose](id a1, SEL a2)
{
  unsigned __int8 v2; // w8

  v2 = atomic_load(byte_1001F7FE0);
  return v2 & 1;
}