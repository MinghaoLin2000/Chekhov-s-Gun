-[FirmwareBundle parseFileName:intoPath:andExtension:]
void __cdecl -[FirmwareBundle parseFileName:intoPath:andExtension:](
        FirmwareBundle *self,
        SEL a2,
        id a3,
        id *a4,
        id *a5)
{
  void *v8; // x0

  v8 = objc_msgSend(a3, "pathExtension");
  *a5 = v8;
  if ( objc_msgSend(v8, "caseInsensitiveCompare:", CFSTR("txt"))
    && objc_msgSend(*a5, "caseInsensitiveCompare:", CFSTR("s19"))
    && objc_msgSend(*a5, "caseInsensitiveCompare:", CFSTR("bin"))
    && objc_msgSend(*a5, "caseInsensitiveCompare:", CFSTR("plist")) )
  {
    *a4 = a3;
    *a5 = CFSTR("txt");
  }
  else
  {
    *a4 = objc_msgSend(a3, "stringByDeletingPathExtension");
  }
}