-[SFUZipArchiveMemoryDataRepresentation hasSameLocationAs:]
bool __cdecl -[SFUZipArchiveMemoryDataRepresentation hasSameLocationAs:](
        SFUZipArchiveMemoryDataRepresentation *self,
        SEL a2,
        id a3)
{
  __int64 v5; // x0
  id v6; // x20

  v5 = objc_opt_class(&OBJC_CLASS___SFUZipArchiveMemoryDataRepresentation);
  if ( (objc_opt_isKindOfClass(a3, v5) & 1) == 0 )
    return 0;
  v6 = -[SFUZipArchiveMemoryDataRepresentation data](self, "data");
  return v6 == objc_msgSend(a3, "data");
}