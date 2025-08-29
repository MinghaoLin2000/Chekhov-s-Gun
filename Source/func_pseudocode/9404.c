+[TSPPackage dataEntryPathForFilename:]
id __cdecl +[TSPPackage dataEntryPathForFilename:](id a1, SEL a2, id a3)
{
  void *v3; // x0
  __int64 vars8; // [xsp+8h] [xbp+8h]

  v3 = objc_retainAutoreleasedReturnValue(objc_msgSend(CFSTR("Data"), "stringByAppendingPathComponent:", a3));
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v3);
}