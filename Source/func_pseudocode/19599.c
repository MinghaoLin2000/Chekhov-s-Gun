-[IPXLibraryChooserService processSpotlightResults:]
void __cdecl -[IPXLibraryChooserService processSpotlightResults:](IPXLibraryChooserService *self, SEL a2, id a3)
{
  id v4; // x20
  void *v5; // x23
  void *v6; // x28
  void *v7; // x22
  void *v8; // x0
  void *v9; // x0
  void *v10; // x27
  __int64 v11; // x22
  void *v12; // x21
  void *i; // x25
  void *v14; // x19
  void *v15; // x28
  void *v16; // x20
  void *v17; // x20
  void *v18; // x21
  void *v19; // x0
  void *v20; // x19
  id v21; // x19
  void *v22; // x0
  void *v23; // x27
  __int64 v24; // x22
  void *j; // x25
  __int64 v26; // x8
  NSMutableDictionary *libraries; // x20
  void *v28; // x26
  id v29; // x28
  id v30; // x19
  id v31; // x21
  NSXPCConnection *v32; // x24
  id v33; // x19
  id v34; // x19
  id v35; // x19
  void *v36; // x0
  void *v37; // x0
  void *v38; // x26
  __int64 v39; // x21
  void *k; // x27
  __int64 v41; // x8
  NSMutableDictionary *v42; // x19
  id v43; // x20
  void *v44; // [xsp+0h] [xbp-360h]
  id v45; // [xsp+8h] [xbp-358h]
  id v46; // [xsp+8h] [xbp-358h]
  id v47; // [xsp+8h] [xbp-358h]
  id v48; // [xsp+10h] [xbp-350h]
  id v49; // [xsp+10h] [xbp-350h]
  id v50; // [xsp+18h] [xbp-348h]
  id v51; // [xsp+20h] [xbp-340h]
  id obj; // [xsp+28h] [xbp-338h]
  _QWORD v53[5]; // [xsp+30h] [xbp-330h] BYREF
  id v54; // [xsp+58h] [xbp-308h]
  __int128 v55; // [xsp+60h] [xbp-300h] BYREF
  __int128 v56; // [xsp+70h] [xbp-2F0h]
  __int128 v57; // [xsp+80h] [xbp-2E0h]
  __int128 v58; // [xsp+90h] [xbp-2D0h]
  _QWORD v59[5]; // [xsp+A8h] [xbp-2B8h] BYREF
  id v60; // [xsp+D0h] [xbp-290h]
  id v61; // [xsp+D8h] [xbp-288h]
  id v62; // [xsp+E0h] [xbp-280h]
  id v63; // [xsp+E8h] [xbp-278h]
  __int128 v64; // [xsp+F0h] [xbp-270h] BYREF
  __int128 v65; // [xsp+100h] [xbp-260h]
  __int128 v66; // [xsp+110h] [xbp-250h]
  __int128 v67; // [xsp+120h] [xbp-240h]
  __int128 v68; // [xsp+130h] [xbp-230h] BYREF
  __int128 v69; // [xsp+140h] [xbp-220h]
  __int128 v70; // [xsp+150h] [xbp-210h]
  __int128 v71; // [xsp+160h] [xbp-200h]
  _BYTE v72[128]; // [xsp+170h] [xbp-1F0h] BYREF
  _BYTE v73[128]; // [xsp+1F0h] [xbp-170h] BYREF
  _BYTE v74[128]; // [xsp+270h] [xbp-F0h] BYREF

  v4 = objc_retain(a3);
  v5 = objc_msgSend(objc_alloc((Class)&OBJC_CLASS___NSMutableArray), "initWithCapacity:", 0LL);
  v6 = objc_msgSend(objc_alloc((Class)&OBJC_CLASS___NSMutableArray), "initWithCapacity:", 0LL);
  v51 = objc_msgSend(objc_alloc((Class)&OBJC_CLASS___NSMutableArray), "initWithCapacity:", 0LL);
  v7 = objc_msgSend(objc_alloc((Class)&OBJC_CLASS___NSMutableArray), "initWithCapacity:", 0LL);
  v8 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "objectForKey:", NSMetadataQueryUpdateAddedItemsKey));
  if ( v8 )
  {
    v70 = 0u;
    v71 = 0u;
    v68 = 0u;
    v69 = 0u;
    obj = v8;
    v9 = objc_msgSend(v8, "countByEnumeratingWithState:objects:count:", &v68, v74, 16LL);
    if ( !v9 )
    {
LABEL_29:
      objc_release(obj);
      goto LABEL_30;
    }
    v10 = v9;
    v48 = v6;
    v50 = v7;
    v45 = v4;
    v11 = *(_QWORD *)v69;
    v12 = obj;
    do
    {
      for ( i = 0LL; i != v10; i = (char *)i + 1 )
      {
        if ( *(_QWORD *)v69 != v11 )
          objc_enumerationMutation(v12);
        v14 = *(void **)(*((_QWORD *)&v68 + 1) + 8LL * (_QWORD)i);
        v15 = objc_retainAutoreleasedReturnValue(objc_msgSend(v14, "valueForAttribute:", kMDItemPath));
        if ( (unsigned int)sub_100001C28() )
        {
          v16 = objc_retainAutoreleasedReturnValue(-[NSMutableDictionary objectForKey:](self->_libraries, "objectForKey:", v15));
          objc_release(v16);
          if ( !v16 )
          {
            v17 = objc_msgSend(objc_alloc((Class)&OBJC_CLASS___NSURL), "initFileURLWithPath:", v15);
            v18 = objc_retainAutoreleasedReturnValue(
                    objc_msgSend(
                      v17,
                      "bookmarkDataWithOptions:includingResourceValuesForKeys:relativeToURL:error:",
                      512LL,
                      0LL,
                      0LL,
                      0LL));
            if ( v18 )
            {
              -[NSMutableDictionary setObject:forKey:](self->_libraries, "setObject:forKey:", v14, v15);
              objc_msgSend(v5, "addObject:", v18);
            }
            objc_release(v18);
            objc_release(v17);
            v12 = obj;
          }
        }
        objc_release(v15);
      }
      v10 = objc_msgSend(v12, "countByEnumeratingWithState:objects:count:", &v68, v74, 16LL);
    }
    while ( v10 );
    v4 = v45;
    v6 = v48;
LABEL_28:
    v7 = v50;
    goto LABEL_29;
  }
  v19 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "objectForKey:", NSMetadataQueryUpdateChangedItemsKey));
  if ( v19 )
  {
    v20 = v19;
    v50 = v7;
    v44 = v5;
    v46 = v4;
    v49 = objc_msgSend(objc_alloc((Class)&OBJC_CLASS___NSMutableDictionary), "initWithCapacity:", 0LL);
    v64 = 0u;
    v65 = 0u;
    v66 = 0u;
    v67 = 0u;
    v21 = objc_retain(v20);
    v22 = objc_msgSend(v21, "countByEnumeratingWithState:objects:count:", &v64, v73, 16LL);
    obj = v21;
    if ( v22 )
    {
      v23 = v22;
      v24 = *(_QWORD *)v65;
      do
      {
        for ( j = 0LL; j != v23; j = (char *)j + 1 )
        {
          if ( *(_QWORD *)v65 != v24 )
            objc_enumerationMutation(v21);
          v26 = *(_QWORD *)(*((_QWORD *)&v64 + 1) + 8LL * (_QWORD)j);
          libraries = self->_libraries;
          v59[0] = _NSConcreteStackBlock;
          v59[1] = 3254779904LL;
          v59[2] = sub_100001DBC;
          v59[3] = &unk_100004210;
          v59[4] = v26;
          v60 = objc_retain(v51);
          v28 = v6;
          v29 = objc_retain(v6);
          v61 = v29;
          v30 = objc_retain(v49);
          v62 = v30;
          v31 = objc_retain(v50);
          v63 = v31;
          -[NSMutableDictionary enumerateKeysAndObjectsUsingBlock:](
            libraries,
            "enumerateKeysAndObjectsUsingBlock:",
            v59);
          -[NSMutableDictionary removeObjectsForKeys:](self->_libraries, "removeObjectsForKeys:", v31);
          if ( objc_msgSend(v29, "count") )
            -[NSMutableDictionary removeObjectsForKeys:](self->_libraries, "removeObjectsForKeys:", v29);
          if ( objc_msgSend(v30, "count", v44) )
            -[NSMutableDictionary addEntriesFromDictionary:](self->_libraries, "addEntriesFromDictionary:", v30);
          objc_release(v63);
          objc_release(v62);
          objc_release(v61);
          objc_release(v60);
          v6 = v28;
          v21 = obj;
        }
        v23 = objc_msgSend(obj, "countByEnumeratingWithState:objects:count:", &v64, v73, 16LL);
      }
      while ( v23 );
    }
    objc_release(v21);
    objc_release(v49);
    v5 = v44;
    v4 = v46;
    goto LABEL_28;
  }
  v36 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "objectForKey:", NSMetadataQueryUpdateRemovedItemsKey));
  if ( v36 )
  {
    v57 = 0u;
    v58 = 0u;
    v55 = 0u;
    v56 = 0u;
    obj = v36;
    v37 = objc_msgSend(v36, "countByEnumeratingWithState:objects:count:", &v55, v72, 16LL);
    if ( v37 )
    {
      v38 = v37;
      v47 = v4;
      v44 = v5;
      v39 = *(_QWORD *)v56;
      do
      {
        for ( k = 0LL; k != v38; k = (char *)k + 1 )
        {
          if ( *(_QWORD *)v56 != v39 )
            objc_enumerationMutation(obj);
          v41 = *(_QWORD *)(*((_QWORD *)&v55 + 1) + 8LL * (_QWORD)k);
          v42 = self->_libraries;
          v53[0] = _NSConcreteStackBlock;
          v53[1] = 3254779904LL;
          v53[2] = sub_100001EF8;
          v53[3] = &unk_100004240;
          v53[4] = v41;
          v43 = objc_retain(v7);
          v54 = v43;
          -[NSMutableDictionary enumerateKeysAndObjectsUsingBlock:](v42, "enumerateKeysAndObjectsUsingBlock:", v53);
          -[NSMutableDictionary removeObjectsForKeys:](self->_libraries, "removeObjectsForKeys:", v43);
          objc_release(v54);
        }
        v38 = objc_msgSend(obj, "countByEnumeratingWithState:objects:count:", &v55, v72, 16LL);
      }
      while ( v38 );
      v4 = v47;
    }
    goto LABEL_29;
  }
LABEL_30:
  v32 = objc_retainAutoreleasedReturnValue(-[IPXLibraryChooserService clientConnection](self, "clientConnection", v44));
  if ( objc_msgSend(v5, "count") )
  {
    v33 = objc_retainAutoreleasedReturnValue(-[NSXPCConnection remoteObjectProxy](v32, "remoteObjectProxy"));
    objc_msgSend(v33, "didAddLibraries:", v5);
    objc_release(v33);
  }
  if ( objc_msgSend(v6, "count") )
  {
    v34 = objc_retainAutoreleasedReturnValue(-[NSXPCConnection remoteObjectProxy](v32, "remoteObjectProxy"));
    objc_msgSend(v34, "didChangeLibrariesAtPaths:to:", v6, v51);
    objc_release(v34);
  }
  if ( objc_msgSend(v7, "count") )
  {
    v35 = objc_retainAutoreleasedReturnValue(-[NSXPCConnection remoteObjectProxy](v32, "remoteObjectProxy"));
    objc_msgSend(v35, "didRemoveLibrariesAtPaths:", v7);
    objc_release(v35);
  }
  objc_release(v32);
  objc_release(v7);
  objc_release(v51);
  objc_release(v6);
  objc_release(v5);
  objc_release(v4);
}