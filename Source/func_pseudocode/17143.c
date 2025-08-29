-[AMLoaderServiceVariableController _variableWithUUID:]
id __cdecl -[AMLoaderServiceVariableController _variableWithUUID:](
        AMLoaderServiceVariableController *self,
        SEL a2,
        id a3)
{
  id v4; // x19
  NSMutableArray *v5; // x20
  id v6; // x21
  __int64 v7; // x25
  void *i; // x26
  void *v9; // x22
  void *v10; // x23
  unsigned __int8 v11; // w24
  __int128 v13; // [xsp+0h] [xbp-120h] BYREF
  __int128 v14; // [xsp+10h] [xbp-110h]
  __int128 v15; // [xsp+20h] [xbp-100h]
  __int128 v16; // [xsp+30h] [xbp-F0h]
  _BYTE v17[128]; // [xsp+48h] [xbp-D8h] BYREF
  __int64 vars8; // [xsp+128h] [xbp+8h]

  v4 = objc_retain(a3);
  os_unfair_lock_assert_owner(&self->__variablesLock);
  v15 = 0u;
  v16 = 0u;
  v13 = 0u;
  v14 = 0u;
  v5 = objc_retainAutoreleasedReturnValue(-[AMLoaderServiceVariableController _variables](self, "_variables", 0LL));
  v6 = -[NSMutableArray countByEnumeratingWithState:objects:count:](
         v5,
         "countByEnumeratingWithState:objects:count:",
         &v13,
         v17,
         16LL);
  if ( v6 )
  {
    v7 = *(_QWORD *)v14;
    while ( 2 )
    {
      for ( i = 0LL; i != v6; i = (char *)i + 1 )
      {
        if ( *(_QWORD *)v14 != v7 )
          objc_enumerationMutation(v5);
        v9 = *(void **)(*((_QWORD *)&v13 + 1) + 8LL * (_QWORD)i);
        v10 = objc_retainAutoreleasedReturnValue(objc_msgSend(v9, "UUID"));
        v11 = (unsigned __int8)objc_msgSend(v10, "isEqualToString:", v4);
        objc_release(v10);
        if ( (v11 & 1) != 0 )
        {
          v6 = objc_retain(v9);
          goto LABEL_11;
        }
      }
      v6 = -[NSMutableArray countByEnumeratingWithState:objects:count:](
             v5,
             "countByEnumeratingWithState:objects:count:",
             &v13,
             v17,
             16LL);
      if ( v6 )
        continue;
      break;
    }
  }
LABEL_11:
  objc_release(v5);
  objc_release(v4);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v6);
}