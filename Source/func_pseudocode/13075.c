-[SFUZipArchiveFileDataRepresentation initWithPath:]
SFUZipArchiveFileDataRepresentation *__cdecl -[SFUZipArchiveFileDataRepresentation initWithPath:](
        SFUZipArchiveFileDataRepresentation *self,
        SEL a2,
        id a3)
{
  SFUZipArchiveFileDataRepresentation *v4; // x0
  SFUZipArchiveFileDataRepresentation *v5; // x19
  int v6; // w0
  SFUFileDataRepresentation *v7; // x0
  objc_super v9; // [xsp+0h] [xbp-30h] BYREF

  v9.receiver = self;
  v9.super_class = (Class)&OBJC_CLASS___SFUZipArchiveFileDataRepresentation;
  v4 = -[SFUZipArchiveFileDataRepresentation init](&v9, "init");
  v5 = v4;
  if ( v4 )
  {
    v4->mFd = -1;
    v6 = SFUOpen(a3, 0, 0);
    v5->mFd = v6;
    if ( v6 == -1 || pread(v6, 0LL, 0LL, 0LL) == -1 )
      v7 = -[SFUFileDataRepresentation initWithPath:](
             objc_alloc(&OBJC_CLASS___SFUFileDataRepresentation),
             "initWithPath:",
             a3);
    else
      v7 = -[SFUFileDataRepresentation initWithPath:sharedFileDescriptor:](
             objc_alloc(&OBJC_CLASS___SFUFileDataRepresentation),
             "initWithPath:sharedFileDescriptor:",
             a3,
             (unsigned int)v5->mFd);
    v5->mFileRepresentation = v7;
  }
  return v5;
}