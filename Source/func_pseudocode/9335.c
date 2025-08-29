-[TSPFilePackageWriter willWriteData:]
void __cdecl -[TSPFilePackageWriter willWriteData:](TSPFilePackageWriter *self, SEL a2, id a3)
{
  id v4; // x0
  void *v5; // x19
  void *v6; // x20
  id v7; // x22
  void *v8; // x23
  unsigned __int64 v9; // x28
  __int64 v10; // x19
  void *i; // x27
  void *v12; // x25
  void *v13; // x24
  id v14; // x0
  bool v15; // w26
  void *v16; // x26
  __int64 v17; // [xsp+0h] [xbp-130h]
  id v18; // [xsp+8h] [xbp-128h]
  __int128 v19; // [xsp+10h] [xbp-120h] BYREF
  __int128 v20; // [xsp+20h] [xbp-110h]
  __int128 v21; // [xsp+30h] [xbp-100h]
  __int128 v22; // [xsp+40h] [xbp-F0h]
  _BYTE v23[128]; // [xsp+50h] [xbp-E0h] BYREF

  v4 = objc_retain(a3);
  v5 = v4;
  if ( self->_delayedZipArchiveWriter )
  {
    v18 = v4;
    v6 = objc_msgSend(
           objc_alloc((Class)&OBJC_CLASS___NSMutableDictionary),
           "initWithCapacity:",
           objc_msgSend(v4, "count"));
    v21 = 0u;
    v22 = 0u;
    v19 = 0u;
    v20 = 0u;
    v7 = objc_retain(v5);
    v8 = objc_msgSend(v7, "countByEnumeratingWithState:objects:count:", &v19, v23, 16LL);
    v17 = 144LL;
    v9 = 0LL;
    if ( v8 )
    {
      v10 = *(_QWORD *)v20;
      do
      {
        for ( i = 0LL; i != v8; i = (char *)i + 1 )
        {
          if ( *(_QWORD *)v20 != v10 )
            objc_enumerationMutation(v7);
          v12 = *(void **)(*((_QWORD *)&v19 + 1) + 8LL * (_QWORD)i);
          v13 = objc_msgSend(v12, "lengthIfLocal", v17);
          v14 = objc_retainAutoreleasedReturnValue(objc_msgSend(v12, "packageLocator"));
          v15 = v14 == 0LL;
          objc_release(v14);
          if ( !v15 )
          {
            v16 = objc_retainAutoreleasedReturnValue(objc_msgSend(v12, "packageLocator"));
            objc_msgSend(v6, "setObject:forKeyedSubscript:", v12, v16);
            objc_release(v16);
          }
          v9 += (unsigned __int64)v13;
        }
        v8 = objc_msgSend(v7, "countByEnumeratingWithState:objects:count:", &v19, v23, 16LL);
      }
      while ( v8 );
    }
    objc_release(v7);
    if ( v9 < (unsigned __int64)objc_msgSend(*(id *)((char *)&self->super.super.isa + v17), "archiveLength") )
    {
      self->_onlyWriteToDelayedZipArchive = 1;
      objc_msgSend(v6, "removeAllObjects");
    }
    -[TSPFilePackageWriter truncateZipAtFirstDeletedData:](self, "truncateZipAtFirstDeletedData:", v6, v17);
    objc_release(v6);
    v5 = v18;
  }
  objc_release(v5);
}