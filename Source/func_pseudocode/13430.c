-[SFUZipArchiveMemoryDataRepresentation dealloc]
void __cdecl -[SFUZipArchiveMemoryDataRepresentation dealloc](SFUZipArchiveMemoryDataRepresentation *self, SEL a2)
{
  objc_super v3; // [xsp+0h] [xbp-20h] BYREF

  objc_release(self->mData);
  v3.receiver = self;
  v3.super_class = (Class)&OBJC_CLASS___SFUZipArchiveMemoryDataRepresentation;
  -[SFUZipArchiveMemoryDataRepresentation dealloc](&v3, "dealloc");
}