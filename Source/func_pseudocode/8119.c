-[XPCSignpostReader workflowDataForSignpostTracker:]
id __cdecl -[XPCSignpostReader workflowDataForSignpostTracker:](XPCSignpostReader *self, SEL a2, id a3)
{
  id v3; // x20
  NSMutableDictionary *v4; // x19
  void *v5; // x21
  void *v6; // x22
  void *v7; // x21
  void *v8; // x22
  void *v9; // x21
  void *v10; // x22
  void *v11; // x21
  void *v12; // x22
  void *v13; // x21
  void *v14; // x0
  void *v15; // x21
  void *v16; // x0
  void *v17; // x23
  __int64 v18; // x26
  void *i; // x20
  __int64 v20; // x25
  NSString *v21; // x24
  void *v22; // x25
  __int64 v23; // x0
  __int64 v24; // x0
  id v26; // [xsp+8h] [xbp-128h]
  __int128 v27; // [xsp+10h] [xbp-120h] BYREF
  __int128 v28; // [xsp+20h] [xbp-110h]
  __int128 v29; // [xsp+30h] [xbp-100h]
  __int128 v30; // [xsp+40h] [xbp-F0h]
  _BYTE v31[128]; // [xsp+50h] [xbp-E0h] BYREF
  __int64 vars8; // [xsp+138h] [xbp+8h]

  v3 = objc_retain(a3);
  v4 = objc_opt_new(&OBJC_CLASS___NSMutableDictionary);
  v5 = objc_retainAutoreleasedReturnValue(objc_msgSend(v3, "signpost"));
  v6 = objc_retainAutoreleasedReturnValue(objc_msgSend(v5, "name"));
  -[NSMutableDictionary setObject:forKeyedSubscript:](v4, "setObject:forKeyedSubscript:", v6, CFSTR("Name"));
  objc_release(v6);
  objc_release(v5);
  v7 = objc_retainAutoreleasedReturnValue(objc_msgSend(v3, "signpost"));
  v8 = objc_retainAutoreleasedReturnValue(objc_msgSend(v7, "subsystem"));
  -[NSMutableDictionary setObject:forKeyedSubscript:](v4, "setObject:forKeyedSubscript:", v8, CFSTR("Subsystem"));
  objc_release(v8);
  objc_release(v7);
  v9 = objc_retainAutoreleasedReturnValue(objc_msgSend(v3, "signpost"));
  v10 = objc_retainAutoreleasedReturnValue(objc_msgSend(v9, "category"));
  -[NSMutableDictionary setObject:forKeyedSubscript:](v4, "setObject:forKeyedSubscript:", v10, CFSTR("Category"));
  objc_release(v10);
  objc_release(v9);
  v11 = objc_retainAutoreleasedReturnValue(objc_msgSend(v3, "individuationIdentifier"));
  v12 = objc_msgSend(v11, "length");
  objc_release(v11);
  if ( v12 )
  {
    v13 = objc_retainAutoreleasedReturnValue(objc_msgSend(v3, "individuationIdentifier"));
    -[NSMutableDictionary setObject:forKeyedSubscript:](
      v4,
      "setObject:forKeyedSubscript:",
      v13,
      CFSTR("IndividuationIdentifier"));
    objc_release(v13);
  }
  v26 = v3;
  v14 = objc_retainAutoreleasedReturnValue(objc_msgSend(v3, "environment"));
  v15 = v14;
  if ( v14 )
  {
    v29 = 0u;
    v30 = 0u;
    v27 = 0u;
    v28 = 0u;
    v16 = objc_msgSend(v14, "countByEnumeratingWithState:objects:count:", &v27, v31, 16LL);
    if ( v16 )
    {
      v17 = v16;
      v18 = *(_QWORD *)v28;
      do
      {
        for ( i = 0LL; i != v17; i = (char *)i + 1 )
        {
          if ( *(_QWORD *)v28 != v18 )
            objc_enumerationMutation(v15);
          v20 = *(_QWORD *)(*((_QWORD *)&v27 + 1) + 8LL * (_QWORD)i);
          v21 = objc_retainAutoreleasedReturnValue(+[NSString stringWithFormat:](&OBJC_CLASS___NSString, "stringWithFormat:", CFSTR("@env_%@"), v20));
          v22 = objc_retainAutoreleasedReturnValue(objc_msgSend(v15, "objectForKey:", v20));
          v23 = objc_opt_class(&OBJC_CLASS___NSString);
          if ( (objc_opt_isKindOfClass(v22, v23) & 1) != 0
            || (v24 = objc_opt_class(&OBJC_CLASS___NSNumber), (objc_opt_isKindOfClass(v22, v24) & 1) != 0) )
          {
            -[NSMutableDictionary setObject:forKeyedSubscript:](v4, "setObject:forKeyedSubscript:", v22, v21);
          }
          objc_release(v22);
          objc_release(v21);
        }
        v17 = objc_msgSend(v15, "countByEnumeratingWithState:objects:count:", &v27, v31, 16LL);
      }
      while ( v17 );
    }
  }
  objc_release(v15);
  objc_release(v26);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v4);
}