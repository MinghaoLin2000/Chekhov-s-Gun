-[DeviceDragHandler performDragOperation:]
bool __cdecl -[DeviceDragHandler performDragOperation:](DeviceDragHandler *self, SEL a2, id a3)
{
  id v4; // x19
  void *v5; // x20
  id v6; // x21
  bool v7; // w24
  NSArray *v8; // x24
  void *v9; // x23
  id v10; // x25
  __int64 v12; // [xsp+0h] [xbp-50h] BYREF

  v4 = objc_retain(a3);
  v5 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "draggingPasteboard"));
  v6 = objc_retainAutoreleasedReturnValue(-[DeviceDragHandler objectsForDrag:](self, "objectsForDrag:", v4));
  if ( v6 )
  {
    -[DeviceDragHandler processDroppedObjects:](self, "processDroppedObjects:", v6);
    v7 = 1;
  }
  else
  {
    v12 = objc_opt_class(&OBJC_CLASS___NSFilePromiseReceiver);
    v8 = objc_retainAutoreleasedReturnValue(+[NSArray arrayWithObjects:count:](&OBJC_CLASS___NSArray, "arrayWithObjects:count:", &v12, 1LL));
    v9 = objc_retainAutoreleasedReturnValue(objc_msgSend(v5, "readObjectsForClasses:options:", v8, 0LL));
    objc_release(v8);
    if ( objc_msgSend(v9, "count") )
    {
      -[DeviceDragHandler processFilePromises:](self, "processFilePromises:", v9);
      v7 = 1;
    }
    else
    {
      v10 = objc_retainAutoreleasedReturnValue(-[DeviceDragHandler fileURLsForDrag:](self, "fileURLsForDrag:", v4));
      v7 = v10 != 0LL;
      if ( v10 )
        -[DeviceDragHandler processDroppedFileURLs:](self, "processDroppedFileURLs:", v10);
      objc_release(v10);
    }
    objc_release(v9);
  }
  objc_release(v6);
  objc_release(v5);
  objc_release(v4);
  return v7;
}