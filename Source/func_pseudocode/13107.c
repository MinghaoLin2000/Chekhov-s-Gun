-[SFUFileDataRepresentation setFileType:]
void __cdecl -[SFUFileDataRepresentation setFileType:](SFUFileDataRepresentation *self, SEL a2, unsigned int a3)
{
  id v5; // x21
  void *v6; // x22
  void *v7; // x23
  __int64 vars8; // [xsp+48h] [xbp+8h]

  v5 = -[SFUFileDataRepresentation path](self, "path");
  objc_sync_enter(self);
  if ( v5 )
  {
    v6 = objc_msgSend(objc_alloc((Class)&OBJC_CLASS___NSNumber), "initWithUnsignedLong:", a3);
    v7 = objc_msgSend(
           objc_alloc((Class)&OBJC_CLASS___NSMutableDictionary),
           "initWithObjectsAndKeys:",
           v6,
           NSFileHFSTypeCode,
           0LL);
    -[NSFileManager setAttributes:ofItemAtPath:error:](
      +[NSFileManager defaultManager](&OBJC_CLASS___NSFileManager, "defaultManager"),
      "setAttributes:ofItemAtPath:error:",
      v7,
      v5,
      0LL);
    objc_release(v7);
    objc_release(v6);
  }
  self->mFileType = a3;
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_sync_exit(self);
}