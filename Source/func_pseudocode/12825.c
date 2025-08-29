-[TSUZipEntry description]
id __cdecl -[TSUZipEntry description](TSUZipEntry *self, SEL a2)
{
  id v3; // x19
  NSString *v4; // x22
  NSString *v5; // x23
  NSString *v6; // x20
  __int64 vars8; // [xsp+98h] [xbp+8h]

  v3 = objc_retainAutoreleasedReturnValue((id)TSUObjectReferenceDescription(self, a2));
  v4 = objc_retainAutoreleasedReturnValue(-[TSUZipEntry name](self, "name"));
  v5 = objc_retainAutoreleasedReturnValue(-[TSUZipEntry collapsedName](self, "collapsedName"));
  v6 = objc_retainAutoreleasedReturnValue(
         +[NSString stringWithFormat:](
           &OBJC_CLASS___NSString,
           "stringWithFormat:",
           CFSTR("<%@> %@ (%@) size=%qu compressedSize=%qu CRC=0x%X offset=%qu extraFieldLength=%hu"),
           v3,
           v4,
           v5,
           -[TSUZipEntry size](self, "size"),
           -[TSUZipEntry compressedSize](self, "compressedSize"),
           -[TSUZipEntry CRC](self, "CRC"),
           -[TSUZipEntry offset](self, "offset"),
           -[TSUZipEntry extraFieldsLength](self, "extraFieldsLength")));
  objc_release(v5);
  objc_release(v4);
  objc_release(v3);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v6);
}