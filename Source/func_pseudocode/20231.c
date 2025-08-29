-[ipp_attribute_t copyWithZone:]
id __cdecl -[ipp_attribute_t copyWithZone:](ipp_attribute_t *self, SEL a2, _NSZone *a3)
{
  void *v4; // x19
  NSMutableArray *v5; // x20
  void *v6; // x21
  __int64 v7; // x24
  void *v8; // x25
  __int64 v9; // x23
  void *v10; // x22
  __int128 v12; // [xsp+0h] [xbp-110h] BYREF
  __int128 v13; // [xsp+10h] [xbp-100h]
  __int128 v14; // [xsp+20h] [xbp-F0h]
  __int128 v15; // [xsp+30h] [xbp-E0h]
  _BYTE v16[128]; // [xsp+48h] [xbp-C8h] BYREF

  v4 = objc_msgSend(
         objc_alloc((Class)objc_opt_class(self, a2)),
         "initWithName:group:value:",
         self->x_name,
         (unsigned int)self->_group_tag,
         (unsigned int)self->_value_tag);
  v12 = 0u;
  v13 = 0u;
  v14 = 0u;
  v15 = 0u;
  v5 = objc_retain(self->_values);
  v6 = -[NSMutableArray countByEnumeratingWithState:objects:count:](
         v5,
         "countByEnumeratingWithState:objects:count:",
         &v12,
         v16,
         16LL);
  if ( v6 )
  {
    v7 = *(_QWORD *)v13;
    do
    {
      v8 = 0LL;
      do
      {
        if ( *(_QWORD *)v13 != v7 )
          objc_enumerationMutation(v5);
        v9 = *(_QWORD *)(*((_QWORD *)&v12 + 1) + 8LL * (_QWORD)v8);
        v10 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "values", (_QWORD)v12));
        objc_msgSend(v10, "addObject:", v9);
        objc_release(v10);
        v8 = (char *)v8 + 1;
      }
      while ( v6 != v8 );
      v6 = -[NSMutableArray countByEnumeratingWithState:objects:count:](
             v5,
             "countByEnumeratingWithState:objects:count:",
             &v12,
             v16,
             16LL);
    }
    while ( v6 );
  }
  objc_release(v5);
  return v4;
}