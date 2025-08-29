-[_NSAttributedStringAgent readFromData:orFileURL:options:extensionTokens:withReply:]
void __cdecl -[_NSAttributedStringAgent readFromData:orFileURL:options:extensionTokens:withReply:](
        _NSAttributedStringAgent *self,
        SEL a2,
        id a3,
        id a4,
        id a5,
        id a6,
        id a7)
{
  id v11; // x22
  id v12; // x21
  id v13; // x19
  id v14; // x23
  void *v15; // x24
  id v16; // x19
  void *v17; // x25
  __int64 v18; // x27
  void *i; // x20
  NSNumber *v20; // x26
  id v21; // x24
  id v22; // x23
  id v23; // x22
  id v24; // x20
  id v25; // x21
  _QWORD *v26; // x25
  void (__fastcall *v27)(id, id, id, _QWORD *); // x26
  id v28; // [xsp+8h] [xbp-1B8h]
  _QWORD v29[4]; // [xsp+10h] [xbp-1B0h] BYREF
  id v30; // [xsp+30h] [xbp-190h]
  id v31; // [xsp+38h] [xbp-188h]
  __int128 v32; // [xsp+40h] [xbp-180h] BYREF
  __int128 v33; // [xsp+50h] [xbp-170h]
  __int128 v34; // [xsp+60h] [xbp-160h]
  __int128 v35; // [xsp+70h] [xbp-150h]
  _QWORD v36[5]; // [xsp+88h] [xbp-138h] BYREF
  __int64 v37; // [xsp+B0h] [xbp-110h] BYREF
  __int64 *v38; // [xsp+B8h] [xbp-108h]
  __int64 v39; // [xsp+C0h] [xbp-100h]
  void *v40; // [xsp+C8h] [xbp-F8h]
  _BYTE v41[128]; // [xsp+D0h] [xbp-F0h] BYREF

  v28 = objc_retain(a3);
  v11 = objc_retain(a4);
  v12 = objc_retain(a5);
  v13 = objc_retain(a6);
  v14 = objc_retain(a7);
  if ( !sub_100002068() )
    +[NSException raise:format:](
      &OBJC_CLASS___NSException,
      "raise:format:",
      NSInternalInconsistencyException,
      CFSTR("Failed to load WebKit."));
  v15 = objc_retainAutoreleasedReturnValue(+[NSMutableArray array](&OBJC_CLASS___NSMutableArray, "array"));
  v34 = 0u;
  v35 = 0u;
  v32 = 0u;
  v33 = 0u;
  v16 = objc_retain(v13);
  v17 = objc_msgSend(v16, "countByEnumeratingWithState:objects:count:", &v32, v41, 16LL);
  if ( v17 )
  {
    v18 = *(_QWORD *)v33;
    do
    {
      for ( i = 0LL; i != v17; i = (char *)i + 1 )
      {
        if ( *(_QWORD *)v33 != v18 )
          objc_enumerationMutation(v16);
        v20 = objc_retainAutoreleasedReturnValue(
                +[NSNumber numberWithLongLong:](
                  &OBJC_CLASS___NSNumber,
                  "numberWithLongLong:",
                  sandbox_extension_consume(objc_msgSend(objc_retainAutorelease(*(id *)(*((_QWORD *)&v32 + 1)
                                                                                      + 8LL * (_QWORD)i)), "bytes"))));
        objc_msgSend(v15, "addObject:", v20);
        objc_release(v20);
      }
      v17 = objc_msgSend(v16, "countByEnumeratingWithState:objects:count:", &v32, v41, 16LL);
    }
    while ( v17 );
  }
  objc_release(v16);
  v29[0] = _NSConcreteStackBlock;
  v29[1] = 3254779904LL;
  v29[2] = sub_10000275C;
  v29[3] = &unk_100004220;
  v21 = objc_retain(v15);
  v30 = v21;
  v22 = objc_retain(v14);
  v31 = v22;
  v23 = objc_retain(v11);
  v24 = objc_retain(v28);
  v25 = objc_retain(v12);
  v26 = objc_retain(v29);
  v37 = 0LL;
  v38 = &v37;
  v39 = 0x2020000000LL;
  v27 = (void (__fastcall *)(id, id, id, _QWORD *))off_100008898;
  v40 = off_100008898;
  if ( !off_100008898 )
  {
    v36[0] = _NSConcreteStackBlock;
    v36[1] = 3254779904LL;
    v36[2] = sub_100002A7C;
    v36[3] = &unk_100004158;
    v36[4] = &v37;
    sub_100002A7C(v36);
    v27 = (void (__fastcall *)(id, id, id, _QWORD *))v38[3];
  }
  _Block_object_dispose(&v37, 8);
  if ( !v27 )
  {
    sub_100002C30();
    __break(1u);
  }
  v27(v23, v24, v25, v26);
  objc_release(v26);
  objc_release(v25);
  objc_release(v24);
  objc_release(v23);
  objc_release(v31);
  objc_release(v30);
  objc_release(v21);
  objc_release(v22);
  objc_release(v16);
  objc_release(v25);
  objc_release(v23);
  objc_release(v24);
}