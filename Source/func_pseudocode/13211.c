-[SFUFileOutputStream initWithPath:]
SFUFileOutputStream *__cdecl -[SFUFileOutputStream initWithPath:](SFUFileOutputStream *self, SEL a2, id a3)
{
  SFUFileOutputStream *v4; // x19

  v4 = -[SFUFileOutputStream init](self, "init");
  if ( v4 )
  {
    unlink((const char *)objc_msgSend(a3, "fileSystemRepresentation"));
    v4->mFile = SFUFileOpen(a3, "w");
    v4->mPath = (NSString *)objc_msgSend(a3, "copy");
  }
  return v4;
}