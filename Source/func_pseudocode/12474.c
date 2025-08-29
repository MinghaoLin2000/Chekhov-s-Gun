-[NSMutableSet tsu_xorSet:]
void __cdecl -[NSMutableSet tsu_xorSet:](NSMutableSet *self, SEL a2, id a3)
{
  void *v5; // x0
  void *v6; // x21
  __int64 v7; // x23
  void *i; // x24
  __int64 v9; // x22
  __int128 v10; // [xsp+0h] [xbp-110h] BYREF
  __int128 v11; // [xsp+10h] [xbp-100h]
  __int128 v12; // [xsp+20h] [xbp-F0h]
  __int128 v13; // [xsp+30h] [xbp-E0h]
  _BYTE v14[128]; // [xsp+48h] [xbp-C8h] BYREF

  v10 = 0u;
  v11 = 0u;
  v12 = 0u;
  v13 = 0u;
  v5 = objc_msgSend(a3, "countByEnumeratingWithState:objects:count:", &v10, v14, 16LL);
  if ( v5 )
  {
    v6 = v5;
    v7 = *(_QWORD *)v11;
    do
    {
      for ( i = 0LL; i != v6; i = (char *)i + 1 )
      {
        if ( *(_QWORD *)v11 != v7 )
          objc_enumerationMutation(a3);
        v9 = *(_QWORD *)(*((_QWORD *)&v10 + 1) + 8LL * (_QWORD)i);
        if ( (unsigned int)-[NSMutableSet containsObject:](self, "containsObject:", v9) )
          -[NSMutableSet removeObject:](self, "removeObject:", v9);
        else
          -[NSMutableSet addObject:](self, "addObject:", v9);
      }
      v6 = objc_msgSend(a3, "countByEnumeratingWithState:objects:count:", &v10, v14, 16LL);
    }
    while ( v6 );
  }
}