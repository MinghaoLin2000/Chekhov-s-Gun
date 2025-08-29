+[TSPDirectoryPackage componentFileURLForPackageURL:packageLocator:]
id __cdecl +[TSPDirectoryPackage componentFileURLForPackageURL:packageLocator:](id a1, SEL a2, id a3, id a4)
{
  id v5; // x19
  void *v6; // x20
  void *v7; // x21
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v5 = objc_retain(a3);
  v6 = objc_retainAutoreleasedReturnValue(objc_msgSend(a4, "stringByAppendingPathExtension:", CFSTR("iwa")));
  v7 = objc_retainAutoreleasedReturnValue(objc_msgSend(v5, "URLByAppendingPathComponent:", v6));
  objc_release(v6);
  objc_release(v5);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v7);
}