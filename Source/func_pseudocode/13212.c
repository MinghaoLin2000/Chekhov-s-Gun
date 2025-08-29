-[SFUFileOutputStream dealloc]
void __cdecl -[SFUFileOutputStream dealloc](SFUFileOutputStream *self, SEL a2)
{
  FILE *mFile; // x0
  objc_super v4; // [xsp+0h] [xbp-20h] BYREF

  mFile = self->mFile;
  if ( mFile )
    fclose(mFile);
  objc_release(self->mPath);
  v4.receiver = self;
  v4.super_class = (Class)&OBJC_CLASS___SFUFileOutputStream;
  -[SFUFileOutputStream dealloc](&v4, "dealloc");
}