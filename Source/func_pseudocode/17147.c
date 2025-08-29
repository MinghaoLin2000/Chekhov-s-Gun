-[AMLoaderServiceVariableController variableWithName:]
id __cdecl -[AMLoaderServiceVariableController variableWithName:](
        AMLoaderServiceVariableController *self,
        SEL a2,
        id a3)
{
  id v5; // x19
  os_unfair_lock_s *p_variablesLock; // x20
  NSMutableArray *v7; // x21
  void *v8; // x0
  void *v9; // x22
  __int64 v10; // x26
  void *i; // x27
  void *v12; // x23
  void *v13; // x24
  unsigned __int8 v14; // w25
  id v15; // x20
  NSAssertionHandler *v17; // x22
  __int128 v18; // [xsp+10h] [xbp-120h] BYREF
  __int128 v19; // [xsp+20h] [xbp-110h]
  __int128 v20; // [xsp+30h] [xbp-100h]
  __int128 v21; // [xsp+40h] [xbp-F0h]
  _BYTE v22[128]; // [xsp+58h] [xbp-D8h] BYREF
  __int64 vars8; // [xsp+138h] [xbp+8h]

  v5 = objc_retain(a3);
  if ( !objc_msgSend(v5, "length") )
  {
    v17 = objc_retainAutoreleasedReturnValue(+[NSAssertionHandler currentHandler](&OBJC_CLASS___NSAssertionHandler, "currentHandler"));
    -[NSAssertionHandler handleFailureInMethod:object:file:lineNumber:description:](
      v17,
      "handleFailureInMethod:object:file:lineNumber:description:",
      a2,
      self,
      CFSTR("AMLoaderServiceVariableController.m"),
      220LL,
      CFSTR("Invalid parameter not satisfying: %@"),
      CFSTR("variableName.length > 0"));
    objc_release(v17);
  }
  if ( objc_msgSend(v5, "length") )
  {
    p_variablesLock = &self->__variablesLock;
    os_unfair_lock_lock(&self->__variablesLock);
    v20 = 0u;
    v21 = 0u;
    v18 = 0u;
    v19 = 0u;
    v7 = objc_retainAutoreleasedReturnValue(-[AMLoaderServiceVariableController _variables](self, "_variables"));
    v8 = -[NSMutableArray countByEnumeratingWithState:objects:count:](
           v7,
           "countByEnumeratingWithState:objects:count:",
           &v18,
           v22,
           16LL);
    if ( v8 )
    {
      v9 = v8;
      v10 = *(_QWORD *)v19;
      while ( 2 )
      {
        for ( i = 0LL; i != v9; i = (char *)i + 1 )
        {
          if ( *(_QWORD *)v19 != v10 )
            objc_enumerationMutation(v7);
          v12 = *(void **)(*((_QWORD *)&v18 + 1) + 8LL * (_QWORD)i);
          v13 = objc_retainAutoreleasedReturnValue(objc_msgSend(v12, "name"));
          v14 = (unsigned __int8)objc_msgSend(v13, "isEqualToString:", v5);
          objc_release(v13);
          if ( (v14 & 1) != 0 )
          {
            os_unfair_lock_unlock(p_variablesLock);
            v15 = objc_retain(v12);
            objc_release(v7);
            goto LABEL_15;
          }
        }
        v9 = -[NSMutableArray countByEnumeratingWithState:objects:count:](
               v7,
               "countByEnumeratingWithState:objects:count:",
               &v18,
               v22,
               16LL);
        if ( v9 )
          continue;
        break;
      }
    }
    objc_release(v7);
    os_unfair_lock_unlock(p_variablesLock);
  }
  v15 = 0LL;
LABEL_15:
  objc_release(v5);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v15);
}