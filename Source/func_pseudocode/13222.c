+[SFUZipArchive isZipArchiveAtPath:]
bool __cdecl +[SFUZipArchive isZipArchiveAtPath:](id a1, SEL a2, id a3)
{
  SFUZipArchiveFileDataRepresentation *v3; // x19
  id v4; // x20
  bool v6; // w21
  _DWORD v8[6]; // [xsp+0h] [xbp-40h] BYREF

  v3 = -[SFUZipArchiveFileDataRepresentation initWithPath:](
         objc_alloc(&OBJC_CLASS___SFUZipArchiveFileDataRepresentation),
         "initWithPath:",
         a3);
  v4 = -[SFUZipArchiveFileDataRepresentation inputStream](v3, "inputStream");
  v6 = objc_msgSend(v4, "readToBuffer:size:", v8, 4LL) == (void *)4 && v8[0] == 67324752;
  objc_msgSend(v4, "close");
  objc_release(v3);
  return v6;
}