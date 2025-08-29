-[PAMediaConversionServiceResourceURLCollectionAccessProvider _blastDoorURLWithImageSourceURL:properties:]
id __cdecl -[PAMediaConversionServiceResourceURLCollectionAccessProvider _blastDoorURLWithImageSourceURL:properties:](
        PAMediaConversionServiceResourceURLCollectionAccessProvider *self,
        SEL a2,
        id a3,
        id *a4)
{
  id v6; // x21
  dispatch_block_t v7; // x22
  IMMessagesBlastDoorInterface *blastdoorInterface; // x23
  id v9; // x20
  id v10; // x21
  id v11; // x19
  _QWORD v13[5]; // [xsp+8h] [xbp-E8h] BYREF
  id v14; // [xsp+30h] [xbp-C0h]
  id v15; // [xsp+38h] [xbp-B8h]
  __int64 *v16; // [xsp+40h] [xbp-B0h]
  __int64 *v17; // [xsp+48h] [xbp-A8h]
  __int64 v18; // [xsp+50h] [xbp-A0h] BYREF
  __int64 *v19; // [xsp+58h] [xbp-98h]
  __int64 v20; // [xsp+60h] [xbp-90h]
  __int64 (__fastcall *v21)(); // [xsp+68h] [xbp-88h]
  __int64 (__fastcall *v22)(); // [xsp+70h] [xbp-80h]
  id v23; // [xsp+78h] [xbp-78h]
  __int64 v24; // [xsp+80h] [xbp-70h] BYREF
  __int64 *v25; // [xsp+88h] [xbp-68h]
  __int64 v26; // [xsp+90h] [xbp-60h]
  __int64 (__fastcall *v27)(); // [xsp+98h] [xbp-58h]
  __int64 (__fastcall *v28)(); // [xsp+A0h] [xbp-50h]
  id v29; // [xsp+A8h] [xbp-48h]
  __int64 vars8; // [xsp+F8h] [xbp+8h]

  v6 = objc_retain(a3);
  v24 = 0LL;
  v25 = &v24;
  v26 = 0x3032000000LL;
  v27 = sub_1000065E8;
  v28 = sub_1000065F8;
  v29 = 0LL;
  v18 = 0LL;
  v19 = &v18;
  v20 = 0x3032000000LL;
  v21 = sub_1000065E8;
  v22 = sub_1000065F8;
  v23 = 0LL;
  v7 = dispatch_block_create((dispatch_block_flags_t)0LL, &stru_100040D60);
  blastdoorInterface = self->_blastdoorInterface;
  v13[0] = _NSConcreteStackBlock;
  v13[1] = 3254779904LL;
  v13[2] = sub_100006E78;
  v13[3] = &unk_100040D80;
  v16 = &v24;
  v13[4] = self;
  v9 = objc_retain(v6);
  v14 = v9;
  v17 = &v18;
  v10 = objc_retain(v7);
  v15 = v10;
  -[IMMessagesBlastDoorInterface generatePreviewforAttachmentWithfileURL:resultHandler:](
    blastdoorInterface,
    "generatePreviewforAttachmentWithfileURL:resultHandler:",
    v9,
    v13);
  dispatch_block_wait(v10, 0xFFFFFFFFFFFFFFFFLL);
  if ( a4 )
    *a4 = objc_retainAutorelease((id)v19[5]);
  v11 = objc_retain((id)v25[5]);
  objc_release(v15);
  objc_release(v14);
  objc_release(v10);
  _Block_object_dispose(&v18, 8);
  objc_release(v23);
  _Block_object_dispose(&v24, 8);
  objc_release(v29);
  objc_release(v9);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v11);
}