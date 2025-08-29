-[SFUFileDataRepresentation dealloc]
void __cdecl -[SFUFileDataRepresentation dealloc](SFUFileDataRepresentation *self, SEL a2)
{
  objc_super v3; // [xsp+0h] [xbp-20h] BYREF

  if ( self->mDeleteFileWhenDone && self->mPath )
    -[NSFileManager removeItemAtPath:error:](
      +[NSFileManager defaultManager](&OBJC_CLASS___NSFileManager, "defaultManager"),
      "removeItemAtPath:error:",
      self->mPath,
      0LL);
  objc_release(self->mPath);
  objc_release(self->mInputStream);
  objc_release(self->mCryptoKey);
  v3.receiver = self;
  v3.super_class = (Class)&OBJC_CLASS___SFUFileDataRepresentation;
  -[SFUFileDataRepresentation dealloc](&v3, "dealloc");
}