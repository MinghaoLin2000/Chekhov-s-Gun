-[SFUZipEntry encodedLength]
// attributes: thunk
signed __int64 __cdecl -[SFUZipEntry encodedLength](SFUZipEntry *self, SEL a2)
{
  return -[SFUZipEntry calculateEncodedLength](self, "calculateEncodedLength");
}