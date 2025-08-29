-[NDANFHelper manifestFromANFDocumentData:]
id __cdecl -[NDANFHelper manifestFromANFDocumentData:](NDANFHelper *self, SEL a2, id a3)
{
  void *v3; // x0
  objc_class *v4; // x19
  id v5; // x21
  void *v6; // x23
  void *v7; // x24
  void *v8; // x22
  void *v9; // x23
  void *v10; // x24
  void *v11; // x21
  void *v12; // x26
  __int64 v13; // x20
  void *i; // x25
  __int64 v15; // x28
  void *v16; // x21
  void *v17; // x27
  void *v18; // x21
  void *v19; // x21
  void *v20; // x28
  void *v21; // x21
  void *v22; // x19
  void *v23; // x19
  void *v24; // x25
  id v25; // x27
  void *v26; // x26
  void *v27; // x28
  void *v28; // x21
  void *v29; // x20
  id v31; // [xsp+0h] [xbp-190h]
  id v33; // [xsp+10h] [xbp-180h]
  id obj; // [xsp+18h] [xbp-178h]
  __int128 v35; // [xsp+20h] [xbp-170h] BYREF
  __int128 v36; // [xsp+30h] [xbp-160h]
  __int128 v37; // [xsp+40h] [xbp-150h]
  __int128 v38; // [xsp+50h] [xbp-140h]
  id v39; // [xsp+60h] [xbp-130h] BYREF
  _QWORD v40[5]; // [xsp+68h] [xbp-128h] BYREF
  __int64 v41; // [xsp+90h] [xbp-100h] BYREF
  __int64 *v42; // [xsp+98h] [xbp-F8h]
  __int64 v43; // [xsp+A0h] [xbp-F0h]
  __int64 v44; // [xsp+A8h] [xbp-E8h]
  _BYTE v45[128]; // [xsp+B0h] [xbp-E0h] BYREF
  __int64 vars8; // [xsp+198h] [xbp+8h]

  v33 = objc_retain(a3);
  v41 = 0LL;
  v42 = &v41;
  v43 = 0x2050000000LL;
  v3 = (void *)qword_1000089C0;
  v44 = qword_1000089C0;
  if ( !qword_1000089C0 )
  {
    v40[0] = _NSConcreteStackBlock;
    v40[1] = 3221225472LL;
    v40[2] = sub_100002E6C;
    v40[3] = &unk_1000041A0;
    v40[4] = &v41;
    sub_100002E6C(v40);
    v3 = (void *)v42[3];
  }
  v4 = objc_retainAutorelease(v3);
  _Block_object_dispose(&v41, 8);
  v5 = objc_alloc(v4);
  v6 = (void *)objc_claimAutoreleasedReturnValue(+[NSUUID UUID](&OBJC_CLASS___NSUUID, "UUID"));
  v7 = (void *)objc_claimAutoreleasedReturnValue(objc_msgSend(v6, "UUIDString"));
  v39 = 0LL;
  v8 = objc_msgSend(
         v5,
         "initWithIdentifier:shareURL:JSONData:resourceDataSource:host:error:",
         v7,
         0LL,
         v33,
         0LL,
         0LL,
         &v39);
  v31 = objc_retain(v39);
  objc_release(v7);
  objc_release(v6);
  if ( v8 )
  {
    v9 = (void *)objc_claimAutoreleasedReturnValue(+[NSMutableArray array](&OBJC_CLASS___NSMutableArray, "array", v31));
    v10 = (void *)objc_claimAutoreleasedReturnValue(+[NSMutableArray array](&OBJC_CLASS___NSMutableArray, "array"));
    v37 = 0u;
    v38 = 0u;
    v35 = 0u;
    v36 = 0u;
    v11 = (void *)objc_claimAutoreleasedReturnValue(objc_msgSend(v8, "documentController"));
    obj = (id)objc_claimAutoreleasedReturnValue(objc_msgSend(v11, "orderedImageIdentifiers"));
    objc_release(v11);
    v12 = objc_msgSend(obj, "countByEnumeratingWithState:objects:count:", &v35, v45, 16LL);
    if ( v12 )
    {
      v13 = *(_QWORD *)v36;
      do
      {
        for ( i = 0LL; i != v12; i = (char *)i + 1 )
        {
          if ( *(_QWORD *)v36 != v13 )
            objc_enumerationMutation(obj);
          v15 = *(_QWORD *)(*((_QWORD *)&v35 + 1) + 8LL * (_QWORD)i);
          v16 = (void *)objc_claimAutoreleasedReturnValue(objc_msgSend(v8, "documentController"));
          v17 = (void *)objc_claimAutoreleasedReturnValue(objc_msgSend(v16, "imageResourceForIdentifier:", v15));
          objc_release(v16);
          v18 = (void *)objc_claimAutoreleasedReturnValue(objc_msgSend(v17, "URL"));
          objc_msgSend(v9, "fc_safelyAddObject:", v18);
          objc_release(v18);
          v19 = (void *)objc_claimAutoreleasedReturnValue(objc_msgSend(v8, "documentController"));
          v20 = (void *)objc_claimAutoreleasedReturnValue(objc_msgSend(v19, "allResourcesForImageIdentifier:", v15));
          objc_release(v19);
          v21 = (void *)objc_claimAutoreleasedReturnValue(objc_msgSend(v20, "firstObject"));
          v22 = (void *)objc_claimAutoreleasedReturnValue(objc_msgSend(v21, "URL"));
          objc_msgSend(v10, "fc_safelyAddObject:", v22);
          objc_release(v22);
          objc_release(v21);
          objc_release(v20);
          objc_release(v17);
        }
        v12 = objc_msgSend(obj, "countByEnumeratingWithState:objects:count:", &v35, v45, 16LL);
      }
      while ( v12 );
    }
    objc_release(obj);
    v23 = (void *)objc_claimAutoreleasedReturnValue(objc_msgSend(v8, "documentController"));
    v24 = (void *)objc_claimAutoreleasedReturnValue(objc_msgSend(v23, "requiredNonImageResourceURLs"));
    objc_release(v23);
    v25 = objc_alloc(&OBJC_CLASS___FCANFDocumentManifest);
    v26 = (void *)objc_claimAutoreleasedReturnValue(-[NDANFHelper _resourceIDsFromURLs:](self, "_resourceIDsFromURLs:", v24));
    v27 = (void *)objc_claimAutoreleasedReturnValue(-[NDANFHelper _resourceIDsFromURLs:](self, "_resourceIDsFromURLs:", v9));
    v28 = (void *)objc_claimAutoreleasedReturnValue(-[NDANFHelper _resourceIDsFromURLs:](self, "_resourceIDsFromURLs:", v10));
    v29 = objc_msgSend(
            v25,
            "initWithNonImageResourceIDs:optimalImageResourceIDs:smallestImageResourceIDs:",
            v26,
            v27,
            v28);
    objc_release(v28);
    objc_release(v27);
    objc_release(v26);
    objc_release(v24);
    objc_release(v10);
    objc_release(v9);
  }
  else
  {
    v29 = 0LL;
  }
  objc_release(v8);
  objc_release(v31);
  objc_release(v33);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v29);
}