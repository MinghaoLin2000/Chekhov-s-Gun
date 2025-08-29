-[SFUZipArchive dealloc]
void __cdecl -[SFUZipArchive dealloc](SFUZipArchive *self, SEL a2)
{
  objc_super v3; // [xsp+0h] [xbp-20h] BYREF

  objc_release(self->mEntries);
  objc_release(self->mDataRepresentation);
  objc_release(self->mPassphraseVerifier);
  objc_release(self->mPassphraseHint);
  objc_release(self->mEncryptedDocumentUuid);
  v3.receiver = self;
  v3.super_class = (Class)&OBJC_CLASS___SFUZipArchive;
  -[SFUZipArchive dealloc](&v3, "dealloc");
}