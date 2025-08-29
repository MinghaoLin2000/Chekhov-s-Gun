-[NSMutableSet tsu_removeEqualObject:]
void __cdecl -[NSMutableSet tsu_removeEqualObject:](NSMutableSet *self, SEL a2, id a3)
{
  void *v5; // x21
  void *v6; // x0
  void *v7; // x22
  __int64 v8; // x24
  void *i; // x25
  void *v10; // x23
  __int128 v11; // [xsp+0h] [xbp-110h] BYREF
  __int128 v12; // [xsp+10h] [xbp-100h]
  __int128 v13; // [xsp+20h] [xbp-F0h]
  __int128 v14; // [xsp+30h] [xbp-E0h]
  _BYTE v15[128]; // [xsp+48h] [xbp-C8h] BYREF

  v5 = -[NSMutableSet allObjects](self, "allObjects");
  v11 = 0u;
  v12 = 0u;
  v13 = 0u;
  v14 = 0u;
  v6 = objc_msgSend(v5, "countByEnumeratingWithState:objects:count:", &v11, v15, 16LL);
  if ( v6 )
  {
    v7 = v6;
    v8 = *(_QWORD *)v12;
    do
    {
      for ( i = 0LL; i != v7; i = (char *)i + 1 )
      {
        if ( *(_QWORD *)v12 != v8 )
          objc_enumerationMutation(v5);
        v10 = *(void **)(*((_QWORD *)&v11 + 1) + 8LL * (_QWORD)i);
        if ( (unsigned int)objc_msgSend(v10, "isEqual:", a3) )
          -[NSMutableSet removeObject:](self, "removeObject:", v10);
      }
      v7 = objc_msgSend(v5, "countByEnumeratingWithState:objects:count:", &v11, v15, 16LL);
    }
    while ( v7 );
  }
}