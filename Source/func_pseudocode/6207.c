-[MediaConversionQueue cancelRequestsForConnectionIdentifier:]
void __cdecl -[MediaConversionQueue cancelRequestsForConnectionIdentifier:](MediaConversionQueue *self, SEL a2, id a3)
{
  id v4; // x20
  void *v5; // x21
  id v6; // x21
  id v7; // x20
  id v8; // x21
  void *v9; // x0
  void *v10; // x22
  __int64 v11; // x23
  void *v12; // x24
  __int128 v13; // [xsp+0h] [xbp-140h] BYREF
  __int128 v14; // [xsp+10h] [xbp-130h]
  __int128 v15; // [xsp+20h] [xbp-120h]
  __int128 v16; // [xsp+30h] [xbp-110h]
  _QWORD v17[4]; // [xsp+48h] [xbp-F8h] BYREF
  id v18; // [xsp+68h] [xbp-D8h]
  id v19; // [xsp+70h] [xbp-D0h]
  _BYTE v20[128]; // [xsp+78h] [xbp-C8h] BYREF

  v4 = objc_retain(a3);
  v5 = objc_retainAutoreleasedReturnValue(+[NSMutableArray array](&OBJC_CLASS___NSMutableArray, "array"));
  os_unfair_lock_lock(&self->_queueStateLock);
  v17[0] = _NSConcreteStackBlock;
  v17[1] = 3254779904LL;
  v17[2] = sub_10000E0CC;
  v17[3] = &unk_1000412E0;
  v6 = objc_retain(v5);
  v18 = v6;
  v7 = objc_retain(v4);
  v19 = v7;
  -[MediaConversionQueue enumerateCurrentlyProcessingAndQueuedEntries:](
    self,
    "enumerateCurrentlyProcessingAndQueuedEntries:",
    v17);
  os_unfair_lock_unlock(&self->_queueStateLock);
  v15 = 0u;
  v16 = 0u;
  v13 = 0u;
  v14 = 0u;
  v8 = objc_retain(v6);
  v9 = objc_msgSend(v8, "countByEnumeratingWithState:objects:count:", &v13, v20, 16LL);
  if ( v9 )
  {
    v10 = v9;
    v11 = *(_QWORD *)v14;
    do
    {
      v12 = 0LL;
      do
      {
        if ( *(_QWORD *)v14 != v11 )
          objc_enumerationMutation(v8);
        -[MediaConversionQueue cancelRequestWithIdentifier:](
          self,
          "cancelRequestWithIdentifier:",
          *(_QWORD *)(*((_QWORD *)&v13 + 1) + 8LL * (_QWORD)v12),
          (_QWORD)v13);
        v12 = (char *)v12 + 1;
      }
      while ( v10 != v12 );
      v10 = objc_msgSend(v8, "countByEnumeratingWithState:objects:count:", &v13, v20, 16LL);
    }
    while ( v10 );
  }
  objc_release(v8);
  objc_release(v19);
  objc_release(v18);
  objc_release(v8);
  objc_release(v7);
}