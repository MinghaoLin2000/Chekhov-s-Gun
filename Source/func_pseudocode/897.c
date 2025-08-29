-[AMPCapacityBarView setTrackingAreas:]
void __cdecl -[AMPCapacityBarView setTrackingAreas:](AMPCapacityBarView *self, SEL a2, id a3)
{
  id v4; // x19
  void *v5; // x21
  void *v6; // x0
  void *v7; // x22
  __int64 v8; // x23
  void *v9; // x24
  id v10; // x22
  void *v11; // x0
  void *v12; // x23
  __int64 v13; // x24
  void *v14; // x25
  id v15; // x22
  void *v16; // x22
  __int128 v17; // [xsp+0h] [xbp-1D0h] BYREF
  __int128 v18; // [xsp+10h] [xbp-1C0h]
  __int128 v19; // [xsp+20h] [xbp-1B0h]
  __int128 v20; // [xsp+30h] [xbp-1A0h]
  __int128 v21; // [xsp+40h] [xbp-190h] BYREF
  __int128 v22; // [xsp+50h] [xbp-180h]
  __int128 v23; // [xsp+60h] [xbp-170h]
  __int128 v24; // [xsp+70h] [xbp-160h]
  _BYTE v25[128]; // [xsp+88h] [xbp-148h] BYREF
  _BYTE v26[128]; // [xsp+108h] [xbp-C8h] BYREF

  v4 = objc_retain(a3);
  if ( self->_pop )
  {
    v5 = objc_retainAutoreleasedReturnValue(-[AMPCapacityBarView trackingAreas](self, "trackingAreas"));
    v21 = 0u;
    v22 = 0u;
    v23 = 0u;
    v24 = 0u;
    v6 = objc_msgSend(v5, "countByEnumeratingWithState:objects:count:", &v21, v26, 16LL);
    if ( v6 )
    {
      v7 = v6;
      v8 = *(_QWORD *)v22;
      do
      {
        v9 = 0LL;
        do
        {
          if ( *(_QWORD *)v22 != v8 )
            objc_enumerationMutation(v5);
          -[AMPCapacityBarView removeTrackingArea:](
            self,
            "removeTrackingArea:",
            *(_QWORD *)(*((_QWORD *)&v21 + 1) + 8LL * (_QWORD)v9));
          v9 = (char *)v9 + 1;
        }
        while ( v7 != v9 );
        v7 = objc_msgSend(v5, "countByEnumeratingWithState:objects:count:", &v21, v26, 16LL);
      }
      while ( v7 );
    }
    v19 = 0u;
    v20 = 0u;
    v17 = 0u;
    v18 = 0u;
    v10 = objc_retain(v4);
    v11 = objc_msgSend(v10, "countByEnumeratingWithState:objects:count:", &v17, v25, 16LL);
    if ( v11 )
    {
      v12 = v11;
      v13 = *(_QWORD *)v18;
      do
      {
        v14 = 0LL;
        do
        {
          if ( *(_QWORD *)v18 != v13 )
            objc_enumerationMutation(v10);
          -[AMPCapacityBarView addTrackingArea:](
            self,
            "addTrackingArea:",
            *(_QWORD *)(*((_QWORD *)&v17 + 1) + 8LL * (_QWORD)v14),
            (_QWORD)v17);
          v14 = (char *)v14 + 1;
        }
        while ( v12 != v14 );
        v12 = objc_msgSend(v10, "countByEnumeratingWithState:objects:count:", &v17, v25, 16LL);
      }
      while ( v12 );
    }
    objc_release(v10);
    v15 = objc_alloc((Class)&OBJC_CLASS___NSTrackingArea);
    -[AMPCapacityBarView bounds](self, "bounds");
    v16 = objc_msgSend(v15, "initWithRect:options:owner:userInfo:", 321LL, self, 0LL);
    -[AMPCapacityBarView addTrackingArea:](self, "addTrackingArea:", v16);
    objc_release(v16);
    objc_release(v5);
  }
  objc_release(v4);
}