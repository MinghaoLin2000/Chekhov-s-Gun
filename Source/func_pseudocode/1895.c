-[DeviceDragHandler fileURLsForDrag:]
id __cdecl -[DeviceDragHandler fileURLsForDrag:](DeviceDragHandler *self, SEL a2, id a3)
{
  void *v3; // x19
  void *v4; // x20
  unsigned int v5; // w21
  NSArray *v6; // x21
  void *v7; // x20
  __int64 v9; // [xsp+0h] [xbp-30h] BYREF
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v3 = objc_retainAutoreleasedReturnValue(objc_msgSend(a3, "draggingPasteboard"));
  v4 = objc_retainAutoreleasedReturnValue(objc_msgSend(v3, "types"));
  v5 = (unsigned int)objc_msgSend(v4, "containsObject:", NSPasteboardTypeFileURL);
  objc_release(v4);
  if ( v5 )
  {
    v9 = objc_opt_class(&OBJC_CLASS___NSURL);
    v6 = objc_retainAutoreleasedReturnValue(+[NSArray arrayWithObjects:count:](&OBJC_CLASS___NSArray, "arrayWithObjects:count:", &v9, 1LL));
    v7 = objc_retainAutoreleasedReturnValue(objc_msgSend(v3, "readObjectsForClasses:options:", v6, 0LL));
    objc_release(v6);
  }
  else
  {
    v7 = 0LL;
  }
  objc_release(v3);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v7);
}