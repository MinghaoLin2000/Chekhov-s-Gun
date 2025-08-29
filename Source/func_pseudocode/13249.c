-[SFUZipRecordInputStream dealloc]
void __cdecl -[SFUZipRecordInputStream dealloc](SFUZipRecordInputStream *self, SEL a2)
{
  objc_super v3; // [xsp+0h] [xbp-20h] BYREF

  objc_release(self->mInput);
  v3.receiver = self;
  v3.super_class = (Class)&OBJC_CLASS___SFUZipRecordInputStream;
  -[SFUZipRecordInputStream dealloc](&v3, "dealloc");
}