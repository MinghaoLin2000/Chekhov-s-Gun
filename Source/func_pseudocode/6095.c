-[PAMediaConversionServiceResourceURLCollection enumerateResourceURLReferences:]
void __cdecl -[PAMediaConversionServiceResourceURLCollection enumerateResourceURLReferences:](
        PAMediaConversionServiceResourceURLCollection *self,
        SEL a2,
        id a3)
{
  void (__fastcall **v4)(id, __int64, void *, unsigned __int8 *); // x20
  void *v5; // x22
  void *v6; // x21
  void *v7; // x0
  void *v8; // x22
  __int64 v9; // x25
  __int64 v10; // x27
  __int64 v11; // x23
  void *v12; // x24
  unsigned __int8 v13; // [xsp+Fh] [xbp-121h] BYREF
  __int128 v14; // [xsp+10h] [xbp-120h] BYREF
  __int128 v15; // [xsp+20h] [xbp-110h]
  __int128 v16; // [xsp+30h] [xbp-100h]
  __int128 v17; // [xsp+40h] [xbp-F0h]
  _BYTE v18[128]; // [xsp+58h] [xbp-D8h] BYREF

  v4 = (void (__fastcall **)(id, __int64, void *, unsigned __int8 *))objc_retain(a3);
  v14 = 0u;
  v15 = 0u;
  v16 = 0u;
  v17 = 0u;
  v5 = objc_retainAutoreleasedReturnValue(-[NSMutableDictionary allKeys](self->_urlReferencesByRole, "allKeys"));
  v6 = objc_retainAutoreleasedReturnValue(objc_msgSend(v5, "sortedArrayUsingComparator:", &stru_100040F90));
  objc_release(v5);
  v7 = objc_msgSend(v6, "countByEnumeratingWithState:objects:count:", &v14, v18, 16LL);
  if ( v7 )
  {
    v8 = v7;
    v9 = *(_QWORD *)v15;
LABEL_3:
    v10 = 0LL;
    while ( 1 )
    {
      if ( *(_QWORD *)v15 != v9 )
        objc_enumerationMutation(v6);
      v11 = *(_QWORD *)(*((_QWORD *)&v14 + 1) + 8 * v10);
      v12 = objc_retainAutoreleasedReturnValue(
              -[NSMutableDictionary objectForKeyedSubscript:](
                self->_urlReferencesByRole,
                "objectForKeyedSubscript:",
                v11));
      v13 = 0;
      v4[2](v4, v11, v12, &v13);
      LODWORD(v11) = v13;
      objc_release(v12);
      if ( (_DWORD)v11 )
        break;
      if ( v8 == (void *)++v10 )
      {
        v8 = objc_msgSend(v6, "countByEnumeratingWithState:objects:count:", &v14, v18, 16LL);
        if ( v8 )
          goto LABEL_3;
        break;
      }
    }
  }
  objc_release(v6);
  objc_release(v4);
}