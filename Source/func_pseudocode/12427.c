-[NSMutableArray tsu_removeObjectsIdenticalToObjectsInArray:]
void __cdecl -[NSMutableArray tsu_removeObjectsIdenticalToObjectsInArray:](NSMutableArray *self, SEL a2, id a3)
{
  void *v5; // x0
  void *v6; // x21
  __int64 v7; // x23
  void *i; // x25
  __int64 v9; // x22
  void *v10; // x0
  void *j; // x2
  __int128 v12; // [xsp+0h] [xbp-110h] BYREF
  __int128 v13; // [xsp+10h] [xbp-100h]
  __int128 v14; // [xsp+20h] [xbp-F0h]
  __int128 v15; // [xsp+30h] [xbp-E0h]
  _BYTE v16[128]; // [xsp+48h] [xbp-C8h] BYREF
  __int64 vars8; // [xsp+118h] [xbp+8h]

  if ( self == a3 )
  {
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    -[NSMutableArray removeAllObjects](self, "removeAllObjects");
  }
  else
  {
    v14 = 0u;
    v15 = 0u;
    v12 = 0u;
    v13 = 0u;
    v5 = objc_msgSend(a3, "countByEnumeratingWithState:objects:count:", &v12, v16, 16LL);
    if ( v5 )
    {
      v6 = v5;
      v7 = *(_QWORD *)v13;
      do
      {
        for ( i = 0LL; i != v6; i = (char *)i + 1 )
        {
          if ( *(_QWORD *)v13 != v7 )
            objc_enumerationMutation(a3);
          v9 = *(_QWORD *)(*((_QWORD *)&v12 + 1) + 8LL * (_QWORD)i);
          v10 = -[NSMutableArray indexOfObjectIdenticalTo:](self, "indexOfObjectIdenticalTo:", v9);
          if ( v10 != (void *)0x7FFFFFFFFFFFFFFFLL )
          {
            for ( j = v10;
                  j != (void *)0x7FFFFFFFFFFFFFFFLL;
                  j = -[NSMutableArray indexOfObjectIdenticalTo:](self, "indexOfObjectIdenticalTo:", v9) )
            {
              -[NSMutableArray removeObjectAtIndex:](self, "removeObjectAtIndex:", j);
            }
          }
        }
        v6 = objc_msgSend(a3, "countByEnumeratingWithState:objects:count:", &v12, v16, 16LL);
      }
      while ( v6 );
    }
  }
}