_findPartnerSerialNumberForAccessory
id __fastcall findPartnerSerialNumberForAccessory(void *a1)
{
  id v1; // x25
  NSArray *v2; // x22
  void *v3; // x20
  NSArray *v4; // x21
  void *v5; // x0
  void *v6; // x24
  __int64 v7; // x20
  void *i; // x22
  void *v9; // x27
  void *v10; // x28
  void *v11; // x26
  void *v12; // x28
  id v13; // x21
  void *v14; // x25
  unsigned __int8 v15; // w19
  void *v16; // x0
  id v17; // x23
  NSArray *obj; // [xsp+8h] [xbp-138h]
  id v20; // [xsp+10h] [xbp-130h]
  id v21; // [xsp+18h] [xbp-128h]
  __int128 v22; // [xsp+20h] [xbp-120h] BYREF
  __int128 v23; // [xsp+30h] [xbp-110h]
  __int128 v24; // [xsp+40h] [xbp-100h]
  __int128 v25; // [xsp+50h] [xbp-F0h]
  _BYTE v26[128]; // [xsp+60h] [xbp-E0h] BYREF
  __int64 vars8; // [xsp+148h] [xbp+8h]

  v1 = objc_retain(a1);
  v2 = objc_retainAutoreleasedReturnValue(objc_msgSend(v1, "partnerSerialNumbers"));
  if ( !-[NSArray count](v2, "count") )
  {
    v3 = objc_retainAutoreleasedReturnValue(objc_msgSend(v1, "serialNumber"));
    v4 = objc_retainAutoreleasedReturnValue(findPartnerSerialNumbersInDatabase(v3));
    objc_release(v2);
    objc_release(v3);
    v2 = v4;
  }
  v20 = objc_retainAutoreleasedReturnValue(objc_msgSend(v1, "hwFusingType"));
  v21 = objc_retainAutoreleasedReturnValue(+[AUDeveloperSettingsDatabase sharedDatabase](&OBJC_CLASS___AUDeveloperSettingsDatabase, "sharedDatabase"));
  v22 = 0u;
  v23 = 0u;
  v24 = 0u;
  v25 = 0u;
  obj = objc_retain(v2);
  v5 = -[NSArray countByEnumeratingWithState:objects:count:](
         obj,
         "countByEnumeratingWithState:objects:count:",
         &v22,
         v26,
         16LL);
  if ( v5 )
  {
    v6 = v5;
    v7 = *(_QWORD *)v23;
    while ( 2 )
    {
      for ( i = 0LL; i != v6; i = (char *)i + 1 )
      {
        if ( *(_QWORD *)v23 != v7 )
          objc_enumerationMutation(obj);
        v9 = *(void **)(*((_QWORD *)&v22 + 1) + 8LL * (_QWORD)i);
        v10 = objc_retainAutoreleasedReturnValue(objc_msgSend(v21, "accessoriesDictionary"));
        v11 = objc_retainAutoreleasedReturnValue(objc_msgSend(v10, "objectForKey:", v9));
        objc_release(v10);
        v12 = objc_retainAutoreleasedReturnValue(objc_msgSend(v11, "objectForKey:", CFSTR("fusing")));
        if ( v12 )
        {
          v13 = v1;
          v14 = objc_retainAutoreleasedReturnValue(objc_msgSend(v1, "serialNumber"));
          v15 = (unsigned __int8)objc_msgSend(v9, "isEqualToString:", v14);
          v16 = v14;
          v1 = v13;
          objc_release(v16);
          if ( (v15 & 1) == 0
            && (!objc_msgSend(v12, "caseInsensitiveCompare:", v20)
             || ((unsigned int)objc_msgSend(v20, "isEqualToString:", CFSTR("prod")) & 1) == 0
             && objc_msgSend(v12, "caseInsensitiveCompare:", CFSTR("prod"))) )
          {
            v17 = objc_retain(v9);
            objc_release(v12);
            objc_release(v11);
            goto LABEL_17;
          }
        }
        objc_release(v12);
        objc_release(v11);
      }
      v6 = -[NSArray countByEnumeratingWithState:objects:count:](
             obj,
             "countByEnumeratingWithState:objects:count:",
             &v22,
             v26,
             16LL);
      if ( v6 )
        continue;
      break;
    }
  }
  v17 = 0LL;
LABEL_17:
  objc_release(obj);
  objc_release(v21);
  objc_release(v20);
  objc_release(obj);
  objc_release(v1);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v17);
}