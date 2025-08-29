-[SFUZipArchive setCryptoKey:]
void __cdecl -[SFUZipArchive setCryptoKey:](SFUZipArchive *self, SEL a2, id a3)
{
  id v5; // x0
  void *v6; // x0
  SFUCryptoKey *mCryptoKey; // x3
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v5 = objc_retain(a3);
  objc_release(self->mCryptoKey);
  self->mCryptoKey = (SFUCryptoKey *)a3;
  v6 = -[NSMutableDictionary allValues](self->mEntries, "allValues");
  mCryptoKey = self->mCryptoKey;
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  _objc_msgSend(v6, "makeObjectsPerformSelector:withObject:", "setCryptoKey:", mCryptoKey);
}