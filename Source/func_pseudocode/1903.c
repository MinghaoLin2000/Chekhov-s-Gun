-[DeviceDragHandler processFilePromises:]
void __cdecl -[DeviceDragHandler processFilePromises:](DeviceDragHandler *self, SEL a2, id a3)
{
  void *v4; // x0
  void *v5; // x21
  __int64 v6; // x26
  void *v7; // x27
  void *v8; // x23
  NSURL *v9; // x24
  NSOperationQueue *v10; // x25
  id obj; // [xsp+0h] [xbp-160h]
  _QWORD v12[5]; // [xsp+8h] [xbp-158h] BYREF
  __int128 v13; // [xsp+30h] [xbp-130h] BYREF
  __int128 v14; // [xsp+40h] [xbp-120h]
  __int128 v15; // [xsp+50h] [xbp-110h]
  __int128 v16; // [xsp+60h] [xbp-100h]
  _BYTE v17[128]; // [xsp+70h] [xbp-F0h] BYREF

  v13 = 0u;
  v14 = 0u;
  v15 = 0u;
  v16 = 0u;
  obj = objc_retain(a3);
  v4 = objc_msgSend(obj, "countByEnumeratingWithState:objects:count:", &v13, v17, 16LL);
  if ( v4 )
  {
    v5 = v4;
    v6 = *(_QWORD *)v14;
    do
    {
      v7 = 0LL;
      do
      {
        if ( *(_QWORD *)v14 != v6 )
          objc_enumerationMutation(obj);
        v8 = *(void **)(*((_QWORD *)&v13 + 1) + 8LL * (_QWORD)v7);
        v9 = objc_retainAutoreleasedReturnValue(-[DeviceDragHandler dragDestinationURL](self, "dragDestinationURL"));
        v10 = objc_retainAutoreleasedReturnValue(-[DeviceDragHandler workQueue](self, "workQueue"));
        v12[0] = _NSConcreteStackBlock;
        v12[1] = 3254779904LL;
        v12[2] = sub_1000433E0;
        v12[3] = &unk_1000B9628;
        v12[4] = self;
        objc_msgSend(
          v8,
          "receivePromisedFilesAtDestination:options:operationQueue:reader:",
          v9,
          &__NSDictionary0__struct,
          v10,
          v12);
        objc_release(v10);
        objc_release(v9);
        v7 = (char *)v7 + 1;
      }
      while ( v5 != v7 );
      v5 = objc_msgSend(obj, "countByEnumeratingWithState:objects:count:", &v13, v17, 16LL);
    }
    while ( v5 );
  }
  objc_release(obj);
}