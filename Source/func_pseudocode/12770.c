-[TSUZipArchive normalizeEntryName:]
id __cdecl -[TSUZipArchive normalizeEntryName:](TSUZipArchive *self, SEL a2, id a3)
{
  id v4; // x0
  void *v5; // x19
  void *v6; // x20
  void *v7; // x20
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v4 = objc_retain(a3);
  v5 = v4;
  if ( (self->_options & 2) != 0 )
  {
    v6 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "lowercaseString"));
    objc_release(v5);
    v5 = v6;
  }
  v7 = objc_retainAutoreleasedReturnValue(objc_msgSend(v5, "precomposedStringWithCanonicalMapping"));
  objc_release(v5);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v7);
}