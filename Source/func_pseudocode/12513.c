-[NSURL tsu_fileSize]
unsigned __int64 __cdecl -[NSURL tsu_fileSize](NSURL *self, SEL a2)
{
  unsigned __int64 v3; // [xsp+8h] [xbp-8h] BYREF

  v3 = 0LL;
  -[NSURL tsu_fileSize:error:](self, "tsu_fileSize:error:", &v3, 0LL);
  return v3;
}