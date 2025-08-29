-[NSMutableSet tsu_removeObjectsPassingTest:]
void __cdecl -[NSMutableSet tsu_removeObjectsPassingTest:](NSMutableSet *self, SEL a2, id a3)
{
  void *v5; // x0
  void *v6; // x21
  NSMutableSet *v7; // x22
  __int64 v8; // x24
  void *i; // x27
  __int64 v10; // x23
  __int128 v11; // [xsp+0h] [xbp-120h] BYREF
  __int128 v12; // [xsp+10h] [xbp-110h]
  __int128 v13; // [xsp+20h] [xbp-100h]
  __int128 v14; // [xsp+30h] [xbp-F0h]
  _BYTE v15[128]; // [xsp+48h] [xbp-D8h] BYREF

  if ( a3 )
  {
    v13 = 0u;
    v14 = 0u;
    v11 = 0u;
    v12 = 0u;
    v5 = -[NSMutableSet countByEnumeratingWithState:objects:count:](
           self,
           "countByEnumeratingWithState:objects:count:",
           &v11,
           v15,
           16LL);
    if ( v5 )
    {
      v6 = v5;
      v7 = 0LL;
      v8 = *(_QWORD *)v12;
      do
      {
        for ( i = 0LL; i != v6; i = (char *)i + 1 )
        {
          if ( *(_QWORD *)v12 != v8 )
            objc_enumerationMutation(self);
          v10 = *(_QWORD *)(*((_QWORD *)&v11 + 1) + 8LL * (_QWORD)i);
          if ( (*((unsigned int (__fastcall **)(id, __int64))a3 + 2))(a3, v10) )
          {
            if ( !v7 )
              v7 = +[NSMutableSet setWithCapacity:](
                     &OBJC_CLASS___NSMutableSet,
                     "setWithCapacity:",
                     -[NSMutableSet count](self, "count"));
            -[NSMutableSet addObject:](v7, "addObject:", v10);
          }
        }
        v6 = -[NSMutableSet countByEnumeratingWithState:objects:count:](
               self,
               "countByEnumeratingWithState:objects:count:",
               &v11,
               v15,
               16LL);
      }
      while ( v6 );
      if ( v7 )
        -[NSMutableSet minusSet:](self, "minusSet:", v7);
    }
  }
}