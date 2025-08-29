-[MediaConversionQueueEntry removeAndReturnClientRequestWithIdentifier:remainingRequestCount:]
id __cdecl -[MediaConversionQueueEntry removeAndReturnClientRequestWithIdentifier:remainingRequestCount:](
        MediaConversionQueueEntry *self,
        SEL a2,
        id a3,
        signed __int64 *a4)
{
  id v5; // x19
  NSMutableArray *v6; // x23
  void *v7; // x0
  void *v8; // x24
  __int64 v9; // x28
  void *i; // x21
  void *v11; // x25
  void *v12; // x26
  unsigned __int8 v13; // w27
  id v14; // x24
  __int128 v17; // [xsp+10h] [xbp-120h] BYREF
  __int128 v18; // [xsp+20h] [xbp-110h]
  __int128 v19; // [xsp+30h] [xbp-100h]
  __int128 v20; // [xsp+40h] [xbp-F0h]
  _BYTE v21[128]; // [xsp+50h] [xbp-E0h] BYREF
  __int64 vars8; // [xsp+138h] [xbp+8h]

  v5 = objc_retain(a3);
  os_unfair_lock_lock(&self->_queueEntryStateLock);
  v19 = 0u;
  v20 = 0u;
  v17 = 0u;
  v18 = 0u;
  v6 = objc_retain(self->_clientRequests);
  v7 = -[NSMutableArray countByEnumeratingWithState:objects:count:](
         v6,
         "countByEnumeratingWithState:objects:count:",
         &v17,
         v21,
         16LL);
  if ( v7 )
  {
    v8 = v7;
    v9 = *(_QWORD *)v18;
    while ( 2 )
    {
      for ( i = 0LL; i != v8; i = (char *)i + 1 )
      {
        if ( *(_QWORD *)v18 != v9 )
          objc_enumerationMutation(v6);
        v11 = *(void **)(*((_QWORD *)&v17 + 1) + 8LL * (_QWORD)i);
        v12 = objc_retainAutoreleasedReturnValue(objc_msgSend(v11, "identifier"));
        v13 = (unsigned __int8)objc_msgSend(v12, "isEqualToString:", v5);
        objc_release(v12);
        if ( (v13 & 1) != 0 )
        {
          v14 = objc_retain(v11);
          objc_release(v6);
          if ( v14 )
          {
            -[NSMutableArray removeObject:](self->_clientRequests, "removeObject:", v14);
            *a4 = (signed __int64)-[NSMutableArray count](self->_clientRequests, "count");
          }
          goto LABEL_12;
        }
      }
      v8 = -[NSMutableArray countByEnumeratingWithState:objects:count:](
             v6,
             "countByEnumeratingWithState:objects:count:",
             &v17,
             v21,
             16LL);
      if ( v8 )
        continue;
      break;
    }
  }
  objc_release(v6);
  v14 = 0LL;
LABEL_12:
  os_unfair_lock_unlock(&self->_queueEntryStateLock);
  objc_release(v5);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v14);
}