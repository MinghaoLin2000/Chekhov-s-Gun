-[DeviceDragHandler canAcceptDrag:]
bool __cdecl -[DeviceDragHandler canAcceptDrag:](DeviceDragHandler *self, SEL a2, id a3)
{
  id v4; // x19
  id v5; // x20
  bool v6; // w23
  void *v7; // x21
  NSArray *v8; // x25
  void *v9; // x24
  id v10; // x25
  __int64 v12; // [xsp+0h] [xbp-50h] BYREF

  v4 = objc_retain(a3);
  v5 = objc_retainAutoreleasedReturnValue(-[DeviceDragHandler objectsForDrag:](self, "objectsForDrag:", v4));
  if ( v5 )
  {
    v6 = -[DeviceDragHandler canAcceptObjects:](self, "canAcceptObjects:", v5);
  }
  else
  {
    v7 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "draggingPasteboard"));
    v12 = objc_opt_class(&OBJC_CLASS___NSFilePromiseReceiver);
    v6 = 1;
    v8 = objc_retainAutoreleasedReturnValue(+[NSArray arrayWithObjects:count:](&OBJC_CLASS___NSArray, "arrayWithObjects:count:", &v12, 1LL));
    v9 = objc_retainAutoreleasedReturnValue(objc_msgSend(v7, "readObjectsForClasses:options:", v8, 0LL));
    objc_release(v8);
    if ( !objc_msgSend(v9, "count") )
    {
      v10 = objc_retainAutoreleasedReturnValue(-[DeviceDragHandler fileURLsForDrag:](self, "fileURLsForDrag:", v4));
      if ( v10 )
        v6 = -[DeviceDragHandler canAcceptFileURLs:](self, "canAcceptFileURLs:", v10);
      else
        v6 = 0;
      objc_release(v10);
    }
    objc_release(v9);
    objc_release(v7);
  }
  objc_release(v5);
  objc_release(v4);
  return v6;
}