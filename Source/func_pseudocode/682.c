-[DeviceFileSharingViewController outlineView:pasteboardWriterForItem:]
id __cdecl -[DeviceFileSharingViewController outlineView:pasteboardWriterForItem:](
        DeviceFileSharingViewController *self,
        SEL a2,
        id a3,
        id a4)
{
  id v5; // x19
  void *v6; // x20
  unsigned int v7; // w0
  id *v8; // x8
  id v9; // x22
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v5 = objc_retain(objc_retain(a4));
  if ( ((unsigned int)objc_msgSend(v5, "isApp") & 1) != 0 || ((unsigned int)objc_msgSend(v5, "isPlaceholder") & 1) != 0 )
  {
    v6 = 0LL;
  }
  else
  {
    v7 = (unsigned int)objc_msgSend(v5, "isFolder");
    v8 = (id *)&kUTTypeDirectory;
    if ( !v7 )
      v8 = (id *)&kUTTypeData;
    v9 = objc_retain(*v8);
    v6 = objc_msgSend(objc_alloc((Class)&OBJC_CLASS___NSFilePromiseProvider), "initWithFileType:delegate:", v9, self);
    objc_release(v9);
    objc_msgSend(v6, "setUserInfo:", v5);
  }
  objc_release(v5);
  objc_release(v5);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v6);
}