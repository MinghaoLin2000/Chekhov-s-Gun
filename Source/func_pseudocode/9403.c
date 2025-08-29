+[TSPPackage objectArchiveEntryPathForPackageLocator:]
id __cdecl +[TSPPackage objectArchiveEntryPathForPackageLocator:](id a1, SEL a2, id a3)
{
  void *v3; // x19
  void *v4; // x20
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v3 = objc_retainAutoreleasedReturnValue(objc_msgSend(CFSTR("Index"), "stringByAppendingPathComponent:", a3));
  v4 = objc_retainAutoreleasedReturnValue(objc_msgSend(v3, "stringByAppendingPathExtension:", CFSTR("iwa")));
  objc_release(v3);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v4);
}