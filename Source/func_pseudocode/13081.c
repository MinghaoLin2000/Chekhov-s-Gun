-[SFUZipArchiveFileDataRepresentation hasSameLocationAs:]
bool __cdecl -[SFUZipArchiveFileDataRepresentation hasSameLocationAs:](
        SFUZipArchiveFileDataRepresentation *self,
        SEL a2,
        id a3)
{
  __int64 v5; // x0
  __int64 v6; // x0
  id v7; // x20
  void *v8; // x2
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v5 = objc_opt_class(&OBJC_CLASS___SFUZipArchiveFileDataRepresentation);
  if ( (objc_opt_isKindOfClass(a3, v5) & 1) != 0 )
  {
    a3 = (id)*((_QWORD *)a3 + 4);
  }
  else
  {
    v6 = objc_opt_class(&OBJC_CLASS___SFUFileDataRepresentation);
    if ( (objc_opt_isKindOfClass(a3, v6) & 1) == 0 )
      return 0;
  }
  if ( !a3 )
    return 0;
  v7 = -[SFUFileDataRepresentation path](self->mFileRepresentation, "path");
  v8 = objc_msgSend(a3, "path");
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return (unsigned __int8)objc_msgSend(v7, "isEqualToString:", v8);
}