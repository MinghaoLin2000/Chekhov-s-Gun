+[VideoTranscodingTask metadataItemsByApplyingSignatureMetadataFromOptions:toMetadataItems:]
id __cdecl +[VideoTranscodingTask metadataItemsByApplyingSignatureMetadataFromOptions:toMetadataItems:](
        id a1,
        SEL a2,
        id a3,
        id a4)
{
  id v6; // x20
  id v7; // x19
  void *v8; // x21
  id v9; // x20
  id v10; // x21
  _QWORD v12[4]; // [xsp+0h] [xbp-80h] BYREF
  id v13; // [xsp+20h] [xbp-60h]
  __int64 *v14; // [xsp+28h] [xbp-58h]
  __int64 v15; // [xsp+30h] [xbp-50h] BYREF
  __int64 *v16; // [xsp+38h] [xbp-48h]
  __int64 v17; // [xsp+40h] [xbp-40h]
  __int64 (__fastcall *v18)(); // [xsp+48h] [xbp-38h]
  __int64 (__fastcall *v19)(); // [xsp+50h] [xbp-30h]
  id v20; // [xsp+58h] [xbp-28h]
  __int64 vars8; // [xsp+88h] [xbp+8h]

  v6 = objc_retain(a3);
  v7 = objc_retain(a4);
  v15 = 0LL;
  v16 = &v15;
  v17 = 0x3032000000LL;
  v18 = sub_10001ABCC;
  v19 = sub_10001ABDC;
  v20 = objc_retainAutoreleasedReturnValue(+[NSMutableArray arrayWithArray:](&OBJC_CLASS___NSMutableArray, "arrayWithArray:", v7));
  v8 = objc_retainAutoreleasedReturnValue(objc_msgSend(a1, "signatureOptionToIdentifierMapping"));
  v12[0] = _NSConcreteStackBlock;
  v12[1] = 3254779904LL;
  v12[2] = sub_10001ABE4;
  v12[3] = &unk_100041540;
  v9 = objc_retain(v6);
  v13 = v9;
  v14 = &v15;
  objc_msgSend(v8, "enumerateKeysAndObjectsUsingBlock:", v12);
  objc_release(v8);
  v10 = objc_retain((id)v16[5]);
  objc_release(v13);
  _Block_object_dispose(&v15, 8);
  objc_release(v20);
  objc_release(v7);
  objc_release(v9);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v10);
}