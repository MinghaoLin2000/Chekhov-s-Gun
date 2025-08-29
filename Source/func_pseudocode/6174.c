-[MediaConversionQueueEntry videoConversionTask:didUpdateFractionCompleted:]
void __cdecl -[MediaConversionQueueEntry videoConversionTask:didUpdateFractionCompleted:](
        MediaConversionQueueEntry *self,
        SEL a2,
        id a3,
        double a4)
{
  id v6; // x19
  NSArray *v7; // x20
  void *v8; // x0
  void *v9; // x21
  __int64 v10; // x22
  void *v11; // x23
  __int128 v12; // [xsp+0h] [xbp-110h] BYREF
  __int128 v13; // [xsp+10h] [xbp-100h]
  __int128 v14; // [xsp+20h] [xbp-F0h]
  __int128 v15; // [xsp+30h] [xbp-E0h]
  _BYTE v16[128]; // [xsp+48h] [xbp-C8h] BYREF

  v6 = objc_retain(a3);
  v12 = 0u;
  v13 = 0u;
  v14 = 0u;
  v15 = 0u;
  v7 = objc_retainAutoreleasedReturnValue(-[MediaConversionQueueEntry clientRequestsSnapshot](self, "clientRequestsSnapshot", 0LL));
  v8 = -[NSArray countByEnumeratingWithState:objects:count:](
         v7,
         "countByEnumeratingWithState:objects:count:",
         &v12,
         v16,
         16LL);
  if ( v8 )
  {
    v9 = v8;
    v10 = *(_QWORD *)v13;
    do
    {
      v11 = 0LL;
      do
      {
        if ( *(_QWORD *)v13 != v10 )
          objc_enumerationMutation(v7);
        objc_msgSend(
          *(id *)(*((_QWORD *)&v12 + 1) + 8LL * (_QWORD)v11),
          "videoConversionTask:didUpdateFractionCompleted:",
          v6,
          a4);
        v11 = (char *)v11 + 1;
      }
      while ( v9 != v11 );
      v9 = -[NSArray countByEnumeratingWithState:objects:count:](
             v7,
             "countByEnumeratingWithState:objects:count:",
             &v12,
             v16,
             16LL);
    }
    while ( v9 );
  }
  objc_release(v7);
  objc_release(v6);
}