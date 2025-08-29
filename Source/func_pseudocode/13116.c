-[SFUFileDataRepresentation readFileAttributes]
void __cdecl -[SFUFileDataRepresentation readFileAttributes](SFUFileDataRepresentation *self, SEL a2)
{
  NSDictionary *v3; // x0
  NSDictionary *v4; // x20
  id v5; // x0
  id v6; // x0
  __int64 vars8; // [xsp+28h] [xbp+8h]

  if ( !self->mHasFileAttributes )
  {
    objc_sync_enter(self);
    if ( !self->mHasFileAttributes )
    {
      v3 = -[NSFileManager attributesOfItemAtPath:error:](
             +[NSFileManager defaultManager](&OBJC_CLASS___NSFileManager, "defaultManager"),
             "attributesOfItemAtPath:error:",
             -[SFUFileDataRepresentation path](self, "path"),
             0LL);
      v4 = v3;
      if ( v3 )
      {
        v5 = -[NSDictionary objectForKey:](v3, "objectForKey:", NSFileSize);
        if ( v5 )
          self->mFileLength = (signed __int64)objc_msgSend(v5, "unsignedLongLongValue");
        v6 = -[NSDictionary objectForKey:](v4, "objectForKey:", NSFileHFSTypeCode);
        if ( v6 )
          self->mFileType = (unsigned int)objc_msgSend(v6, "unsignedIntValue");
        __dmb(0xBu);
        self->mHasFileAttributes = 1;
      }
    }
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    objc_sync_exit(self);
  }
}