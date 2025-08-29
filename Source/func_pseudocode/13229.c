-[SFUZipArchive entryWithName:dataLength:]
id __cdecl -[SFUZipArchive entryWithName:dataLength:](SFUZipArchive *self, SEL a2, id a3, signed __int64 a4)
{
  id v5; // x0
  void *v6; // x20

  v5 = -[SFUZipArchive entryWithName:](self, "entryWithName:", a3);
  v6 = v5;
  if ( v5 )
    objc_msgSend(v5, "setDataLength:", a4);
  return v6;
}