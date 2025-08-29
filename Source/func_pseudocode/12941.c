-[SFUZipEntry setCryptoKey:]
void __cdecl -[SFUZipEntry setCryptoKey:](SFUZipEntry *self, SEL a2, id a3)
{
  id v5; // x0

  v5 = objc_retain(a3);
  objc_release(self->mCryptoKey);
  self->mCryptoKey = (SFUCryptoKey *)a3;
}