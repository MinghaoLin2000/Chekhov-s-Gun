-[ECTIHelperDelegate _dumpView:depth:]
void __cdecl -[ECTIHelperDelegate _dumpView:depth:](ECTIHelperDelegate *self, SEL a2, id a3, int a4)
{
  void *v7; // x0
  void *v8; // x22
  int v9; // w24
  void *v10; // x20
  void *v11; // x0
  void *v12; // x22
  __int64 v13; // x23
  __int64 v14; // x21
  void *v15; // x24
  __int128 v16; // [xsp+0h] [xbp-110h] BYREF
  __int128 v17; // [xsp+10h] [xbp-100h]
  __int128 v18; // [xsp+20h] [xbp-F0h]
  __int128 v19; // [xsp+30h] [xbp-E0h]
  _BYTE v20[128]; // [xsp+48h] [xbp-C8h] BYREF

  v7 = +[NSMutableString string](&OBJC_CLASS___NSMutableString, "string");
  if ( a4 >= 1 )
  {
    v8 = v7;
    v9 = a4;
    do
    {
      objc_msgSend(v8, "appendString:", CFSTR("\t"));
      --v9;
    }
    while ( v9 );
  }
  fflush(__stdoutp);
  v16 = 0u;
  v17 = 0u;
  v18 = 0u;
  v19 = 0u;
  v10 = objc_msgSend(a3, "subviews", 0LL);
  v11 = objc_msgSend(v10, "countByEnumeratingWithState:objects:count:", &v16, v20, 16LL);
  if ( v11 )
  {
    v12 = v11;
    v13 = *(_QWORD *)v17;
    v14 = (unsigned int)(a4 + 1);
    do
    {
      v15 = 0LL;
      do
      {
        if ( *(_QWORD *)v17 != v13 )
          objc_enumerationMutation(v10);
        -[ECTIHelperDelegate _dumpView:depth:](
          self,
          "_dumpView:depth:",
          *(_QWORD *)(*((_QWORD *)&v16 + 1) + 8LL * (_QWORD)v15),
          v14);
        v15 = (char *)v15 + 1;
      }
      while ( v12 != v15 );
      v12 = objc_msgSend(v10, "countByEnumeratingWithState:objects:count:", &v16, v20, 16LL);
    }
    while ( v12 );
  }
}