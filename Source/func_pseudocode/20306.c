-[ipp_response_t rewriteURLAttributes:]
id __cdecl -[ipp_response_t rewriteURLAttributes:](ipp_response_t *self, SEL a2, id a3)
{
  void *v4; // x24
  void *v5; // x19
  char *j; // x26
  void *v7; // x20
  void *v8; // x19
  void *v9; // x23
  void *v10; // x1
  void *v11; // x28
  NSURL *v12; // x27
  id v13; // x0
  void *v14; // x20
  void *v15; // x25
  void *v16; // x22
  void *v17; // x19
  id v18; // x21
  id v19; // x0
  id v21; // [xsp+0h] [xbp-160h]
  id obj; // [xsp+8h] [xbp-158h]
  __int64 v23; // [xsp+10h] [xbp-150h]
  void *v24; // [xsp+18h] [xbp-148h]
  void *i; // [xsp+20h] [xbp-140h]
  __int64 (__fastcall **v26)(id, NSURL *); // [xsp+30h] [xbp-130h]
  char *v27; // [xsp+38h] [xbp-128h]
  __int128 v28; // [xsp+40h] [xbp-120h] BYREF
  __int128 v29; // [xsp+50h] [xbp-110h]
  __int128 v30; // [xsp+60h] [xbp-100h]
  __int128 v31; // [xsp+70h] [xbp-F0h]
  _BYTE v32[128]; // [xsp+80h] [xbp-E0h] BYREF
  __int64 vars8; // [xsp+168h] [xbp+8h]

  v26 = (__int64 (__fastcall **)(id, NSURL *))objc_retain(a3);
  v30 = 0u;
  v31 = 0u;
  v28 = 0u;
  v29 = 0u;
  v21 = -[ipp_t mutableCopy](self, "mutableCopy");
  obj = objc_retainAutoreleasedReturnValue(objc_msgSend(v21, "attrs"));
  v24 = objc_msgSend(obj, "countByEnumeratingWithState:objects:count:", &v28, v32, 16LL);
  if ( v24 )
  {
    v23 = *(_QWORD *)v29;
    do
    {
      for ( i = 0LL; i != v24; i = (char *)i + 1 )
      {
        if ( *(_QWORD *)v29 != v23 )
          objc_enumerationMutation(obj);
        v4 = *(void **)(*((_QWORD *)&v28 + 1) + 8LL * (_QWORD)i);
        if ( (unsigned int)objc_msgSend(v4, "value_tag") == 69 )
        {
          v5 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "values"));
          v27 = (char *)objc_msgSend(v5, "count");
          objc_release(v5);
          if ( v27 )
          {
            for ( j = 0LL; j != v27; ++j )
            {
              v7 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "values"));
              v8 = objc_retainAutoreleasedReturnValue(objc_msgSend(v7, "objectAtIndexedSubscript:", j));
              v9 = objc_msgSend(v8, "string");
              v11 = v10;
              objc_release(v8);
              objc_release(v7);
              if ( v11 )
              {
                v12 = objc_retainAutoreleasedReturnValue(+[NSURL URLWithString:](&OBJC_CLASS___NSURL, "URLWithString:", v11));
                if ( v12 )
                {
                  v13 = objc_retainAutoreleasedReturnValue((id)v26[2](v26, v12));
                  v14 = v13;
                  if ( v13 && ((unsigned int)objc_msgSend(v13, "isEqual:", v12) & 1) == 0 )
                  {
                    v15 = objc_retainAutoreleasedReturnValue(objc_msgSend(v14, "absoluteString"));
                    objc_release(v11);
                    v16 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "values"));
                    v17 = objc_retainAutoreleasedReturnValue(objc_msgSend(v16, "objectAtIndexedSubscript:", j));
                    v18 = objc_retain(v9);
                    v19 = objc_retain(v15);
                    v11 = v19;
                    if ( v17 )
                    {
                      objc_msgSend(v17, "setString:", v9, v19);
                    }
                    else
                    {
                      objc_release(v19);
                      objc_release(v18);
                    }
                    objc_release(v17);
                    objc_release(v16);
                  }
                  objc_release(v14);
                }
                objc_release(v12);
              }
              objc_release(v11);
              objc_release(v9);
            }
          }
        }
      }
      v24 = objc_msgSend(obj, "countByEnumeratingWithState:objects:count:", &v28, v32, 16LL);
    }
    while ( v24 );
  }
  objc_release(obj);
  objc_release(v26);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v21);
}