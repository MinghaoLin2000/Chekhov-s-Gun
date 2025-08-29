-[PAMediaConversionServiceResourceURLCollectionAccessProvider _blastDoorMetadataWithSourceURL:]
id __cdecl -[PAMediaConversionServiceResourceURLCollectionAccessProvider _blastDoorMetadataWithSourceURL:](
        PAMediaConversionServiceResourceURLCollectionAccessProvider *self,
        SEL a2,
        id a3)
{
  id v4; // x20
  dispatch_block_t v5; // x21
  IMMessagesBlastDoorInterface *blastdoorInterface; // x22
  id v7; // x19
  id v8; // x20
  id v9; // x21
  _QWORD v11[5]; // [xsp+0h] [xbp-A0h] BYREF
  id v12; // [xsp+28h] [xbp-78h]
  id v13; // [xsp+30h] [xbp-70h]
  __int64 *v14; // [xsp+38h] [xbp-68h]
  __int64 v15; // [xsp+40h] [xbp-60h] BYREF
  __int64 *v16; // [xsp+48h] [xbp-58h]
  __int64 v17; // [xsp+50h] [xbp-50h]
  __int64 (__fastcall *v18)(); // [xsp+58h] [xbp-48h]
  __int64 (__fastcall *v19)(); // [xsp+60h] [xbp-40h]
  id v20; // [xsp+68h] [xbp-38h]
  __int64 vars8; // [xsp+A8h] [xbp+8h]

  v4 = objc_retain(a3);
  v15 = 0LL;
  v16 = &v15;
  v17 = 0x3032000000LL;
  v18 = sub_1000065E8;
  v19 = sub_1000065F8;
  v20 = 0LL;
  v5 = dispatch_block_create((dispatch_block_flags_t)0LL, &stru_100040D10);
  blastdoorInterface = self->_blastdoorInterface;
  v11[0] = _NSConcreteStackBlock;
  v11[1] = 3254779904LL;
  v11[2] = sub_1000075C4;
  v11[3] = &unk_100040D30;
  v14 = &v15;
  v11[4] = self;
  v7 = objc_retain(v4);
  v12 = v7;
  v8 = objc_retain(v5);
  v13 = v8;
  -[IMMessagesBlastDoorInterface generateMetadataforAttachmentWithfileURL:resultHandler:](
    blastdoorInterface,
    "generateMetadataforAttachmentWithfileURL:resultHandler:",
    v7,
    v11);
  dispatch_block_wait(v8, 0xFFFFFFFFFFFFFFFFLL);
  v9 = objc_retain((id)v16[5]);
  objc_release(v13);
  objc_release(v12);
  objc_release(v8);
  _Block_object_dispose(&v15, 8);
  objc_release(v20);
  objc_release(v7);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v9);
}