-[_NSAttributedStringAgent renderHTML:options:extensionTokens:withReply:]
void __cdecl -[_NSAttributedStringAgent renderHTML:options:extensionTokens:withReply:](
        _NSAttributedStringAgent *self,
        SEL a2,
        id a3,
        id a4,
        id a5,
        id a6)
{
  id v9; // x19
  id v10; // x20
  id v11; // x21
  id v12; // x22
  void *v13; // x23
  id v14; // x21
  void *v15; // x0
  void *v16; // x24
  __int64 v17; // x26
  void *v18; // x28
  NSNumber *v19; // x25
  id v20; // x23
  id v21; // x22
  _QWORD *v22; // x24
  void *v23; // x25
  unsigned int v24; // w26
  id v25; // x25
  __CFString *v26; // x0
  __CFString *v27; // x26
  id v28; // x25
  __CFString *v29; // x26
  _QWORD v30[4]; // [xsp+8h] [xbp-1A8h] BYREF
  id v31; // [xsp+28h] [xbp-188h]
  id v32; // [xsp+30h] [xbp-180h]
  id v33; // [xsp+38h] [xbp-178h]
  _QWORD v34[4]; // [xsp+40h] [xbp-170h] BYREF
  id v35; // [xsp+60h] [xbp-150h]
  id v36; // [xsp+68h] [xbp-148h]
  __int128 v37; // [xsp+70h] [xbp-140h] BYREF
  __int128 v38; // [xsp+80h] [xbp-130h]
  __int128 v39; // [xsp+90h] [xbp-120h]
  __int128 v40; // [xsp+A0h] [xbp-110h]
  _BYTE v41[128]; // [xsp+B8h] [xbp-F8h] BYREF

  v9 = objc_retain(a3);
  v10 = objc_retain(a4);
  v11 = objc_retain(a5);
  v12 = objc_retain(a6);
  if ( !sub_100002068() )
    +[NSException raise:format:](
      &OBJC_CLASS___NSException,
      "raise:format:",
      NSInternalInconsistencyException,
      CFSTR("Failed to load WebKit."));
  v13 = objc_retainAutoreleasedReturnValue(+[NSMutableArray array](&OBJC_CLASS___NSMutableArray, "array"));
  v37 = 0u;
  v38 = 0u;
  v39 = 0u;
  v40 = 0u;
  v14 = objc_retain(v11);
  v15 = objc_msgSend(v14, "countByEnumeratingWithState:objects:count:", &v37, v41, 16LL);
  if ( v15 )
  {
    v16 = v15;
    v17 = *(_QWORD *)v38;
    do
    {
      v18 = 0LL;
      do
      {
        if ( *(_QWORD *)v38 != v17 )
          objc_enumerationMutation(v14);
        v19 = objc_retainAutoreleasedReturnValue(
                +[NSNumber numberWithLongLong:](
                  &OBJC_CLASS___NSNumber,
                  "numberWithLongLong:",
                  sandbox_extension_consume(objc_msgSend(objc_retainAutorelease(*(id *)(*((_QWORD *)&v37 + 1)
                                                                                      + 8LL * (_QWORD)v18)), "bytes"))));
        objc_msgSend(v13, "addObject:", v19);
        objc_release(v19);
        v18 = (char *)v18 + 1;
      }
      while ( v16 != v18 );
      v16 = objc_msgSend(v14, "countByEnumeratingWithState:objects:count:", &v37, v41, 16LL);
    }
    while ( v16 );
  }
  objc_release(v14);
  v34[0] = _NSConcreteStackBlock;
  v34[1] = 3254779904LL;
  v34[2] = sub_10000214C;
  v34[3] = &unk_1000041C0;
  v20 = objc_retain(v13);
  v35 = v20;
  v21 = objc_retain(v12);
  v36 = v21;
  v22 = objc_retainBlock(v34);
  v23 = objc_retainAutoreleasedReturnValue(objc_msgSend(v10, "objectForKeyedSubscript:", CFSTR("DocumentType")));
  v24 = (unsigned int)objc_msgSend(v23, "isEqualToString:", CFSTR("NSWebArchive"));
  objc_release(v23);
  if ( v24 )
  {
    v25 = objc_retainAutoreleasedReturnValue(objc_msgSend(v10, "objectForKeyedSubscript:", CFSTR("BaseURL")));
    if ( !v25 )
      v25 = objc_alloc_init((Class)&OBJC_CLASS___NSURL);
    v26 = objc_retainAutoreleasedReturnValue(objc_msgSend(v10, "objectForKey:", CFSTR("TextEncodingName")));
    if ( v26 )
      v27 = v26;
    else
      v27 = &stru_100004340;
    v30[0] = _NSConcreteStackBlock;
    v30[1] = 3254779904LL;
    v30[2] = sub_100002338;
    v30[3] = &unk_1000041F0;
    v31 = objc_retain(v9);
    v32 = v27;
    v33 = v25;
    v28 = objc_retain(v25);
    v29 = objc_retain(v27);
    +[NSAttributedString _loadFromHTMLWithOptions:contentLoader:completionHandler:](
      &OBJC_CLASS___NSAttributedString,
      "_loadFromHTMLWithOptions:contentLoader:completionHandler:",
      v10,
      v30,
      v22);
    objc_release(v33);
    objc_release(v32);
    objc_release(v31);
    objc_release(v28);
    objc_release(v29);
  }
  else
  {
    +[NSAttributedString loadFromHTMLWithData:options:completionHandler:](
      &OBJC_CLASS___NSAttributedString,
      "loadFromHTMLWithData:options:completionHandler:",
      v9,
      v10,
      v22);
  }
  objc_release(v22);
  objc_release(v36);
  objc_release(v35);
  objc_release(v20);
  objc_release(v21);
  objc_release(v14);
  objc_release(v10);
  objc_release(v9);
}