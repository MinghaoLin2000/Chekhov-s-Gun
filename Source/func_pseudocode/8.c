-[BRCKShareSubitem initWithShare:]
BRCKShareSubitem *__cdecl -[BRCKShareSubitem initWithShare:](BRCKShareSubitem *self, SEL a2, id a3)
{
  id v5; // x19
  void *v6; // x20
  NSString *v7; // x22
  __int64 v8; // x25
  NSString *i; // x26
  void *v10; // x24
  void *v11; // x24
  void *v12; // x25
  id v13; // x0
  NSString *v14; // x3
  void *v15; // x24
  void *v16; // x25
  void *v17; // x26
  BRCKShareSubitem *v18; // x23
  void *v19; // x27
  void *v20; // x27
  void *v21; // x27
  void *v22; // x27
  objc_super v24; // [xsp+0h] [xbp-130h] BYREF
  __int128 v25; // [xsp+10h] [xbp-120h] BYREF
  __int128 v26; // [xsp+20h] [xbp-110h]
  __int128 v27; // [xsp+30h] [xbp-100h]
  __int128 v28; // [xsp+40h] [xbp-F0h]
  _BYTE v29[128]; // [xsp+58h] [xbp-D8h] BYREF

  v5 = objc_retain(a3);
  v25 = 0u;
  v26 = 0u;
  v27 = 0u;
  v28 = 0u;
  v6 = objc_retain(objc_retainAutoreleasedReturnValue(objc_msgSend(v5, "participants")));
  v7 = (NSString *)objc_msgSend(v6, "countByEnumeratingWithState:objects:count:", &v25, v29, 16LL);
  if ( v7 )
  {
    v8 = *(_QWORD *)v26;
    while ( 2 )
    {
      for ( i = 0LL; i != v7; i = (NSString *)((char *)i + 1) )
      {
        if ( *(_QWORD *)v26 != v8 )
          objc_enumerationMutation(v6);
        v10 = *(void **)(*((_QWORD *)&v25 + 1) + 8LL * (_QWORD)i);
        if ( objc_msgSend(v10, "role") == (void *)1 )
        {
          v11 = objc_retainAutoreleasedReturnValue(objc_msgSend(v10, "userIdentity"));
          v12 = objc_retainAutoreleasedReturnValue(objc_msgSend(v11, "userRecordID"));
          v7 = objc_retainAutoreleasedReturnValue(objc_msgSend(v12, "recordName"));
          objc_release(v12);
          objc_release(v11);
          goto LABEL_11;
        }
      }
      v7 = (NSString *)objc_msgSend(v6, "countByEnumeratingWithState:objects:count:", &v25, v29, 16LL);
      if ( v7 )
        continue;
      break;
    }
  }
LABEL_11:
  objc_release(v6);
  v13 = objc_alloc((Class)&OBJC_CLASS___CKRecordZoneID);
  if ( v7 )
    v14 = v7;
  else
    v14 = CKCurrentUserDefaultName;
  v15 = objc_msgSend(v13, "initWithZoneName:ownerName:", CFSTR("__NONE__"), v14);
  v16 = objc_msgSend(
          objc_alloc((Class)&OBJC_CLASS___CKRecord),
          "initWithRecordType:zoneID:",
          CKRecordTypeUserRecord,
          v15);
  v17 = objc_msgSend(objc_alloc((Class)&OBJC_CLASS___CKRecordID), "initWithRecordName:zoneID:", CFSTR("__NONE__"), v15);
  v24.receiver = self;
  v24.super_class = (Class)&OBJC_CLASS___BRCKShareSubitem;
  v18 = -[BRCKShareSubitem initWithRootRecord:shareID:](&v24, "initWithRootRecord:shareID:", v16, v17);
  if ( v18 )
  {
    v19 = objc_msgSend(v6, "mutableCopy");
    -[BRCKShareSubitem setAllParticipants:](v18, "setAllParticipants:", v19);
    objc_release(v19);
    objc_storeStrong((id *)&v18->_originalShare, a3);
    v18->_publicPermission = (signed __int64)objc_msgSend(v5, "publicPermission");
    v20 = objc_retainAutoreleasedReturnValue(objc_msgSend(v5, "objectForKeyedSubscript:", CKShareTitleKey));
    -[BRCKShareSubitem setObject:forKeyedSubscript:](v18, "setObject:forKeyedSubscript:", v20, CKShareTitleKey);
    objc_release(v20);
    v21 = objc_retainAutoreleasedReturnValue(objc_msgSend(v5, "objectForKeyedSubscript:", CKShareTypeKey));
    -[BRCKShareSubitem setObject:forKeyedSubscript:](v18, "setObject:forKeyedSubscript:", v21, CKShareTypeKey);
    objc_release(v21);
    v22 = objc_retainAutoreleasedReturnValue(objc_msgSend(v5, "objectForKeyedSubscript:", CKShareThumbnailImageDataKey));
    -[BRCKShareSubitem setObject:forKeyedSubscript:](
      v18,
      "setObject:forKeyedSubscript:",
      v22,
      CKShareThumbnailImageDataKey);
    objc_release(v22);
  }
  objc_release(v17);
  objc_release(v16);
  objc_release(v15);
  objc_release(v7);
  objc_release(v6);
  objc_release(v5);
  return v18;
}