-[PAMediaConversionServiceResourceURLCollectionAccessProvider _blastDoorURLWithVideoSourceURL:sourceMetadata:]
id __cdecl -[PAMediaConversionServiceResourceURLCollectionAccessProvider _blastDoorURLWithVideoSourceURL:sourceMetadata:](
        PAMediaConversionServiceResourceURLCollectionAccessProvider *self,
        SEL a2,
        id a3,
        id a4)
{
  id v6; // x21
  id v7; // x0
  void *v8; // x19
  void *v9; // x22
  float v10; // s0
  float v11; // s8
  void *v12; // x22
  float v13; // s0
  float v14; // s9
  float v15; // s0
  float v16; // s1
  float v18; // s8
  dispatch_block_t v19; // x22
  IMMessagesBlastDoorInterface *blastdoorInterface; // x23
  id v21; // x20
  id v22; // x21
  double v23; // d3
  double v24; // d0
  id v25; // x22
  _QWORD v27[5]; // [xsp+0h] [xbp-B0h] BYREF
  id v28; // [xsp+28h] [xbp-88h]
  id v29; // [xsp+30h] [xbp-80h]
  __int64 *v30; // [xsp+38h] [xbp-78h]
  __int64 v31; // [xsp+40h] [xbp-70h] BYREF
  __int64 *v32; // [xsp+48h] [xbp-68h]
  __int64 v33; // [xsp+50h] [xbp-60h]
  __int64 (__fastcall *v34)(); // [xsp+58h] [xbp-58h]
  __int64 (__fastcall *v35)(); // [xsp+60h] [xbp-50h]
  id v36; // [xsp+68h] [xbp-48h]
  __int64 vars8; // [xsp+B8h] [xbp+8h]

  v6 = objc_retain(a3);
  v7 = objc_retain(a4);
  v8 = v7;
  v31 = 0LL;
  v32 = &v31;
  v33 = 0x3032000000LL;
  v34 = sub_1000065E8;
  v35 = sub_1000065F8;
  v36 = 0LL;
  if ( v7 )
  {
    v9 = objc_retainAutoreleasedReturnValue(objc_msgSend(v7, "objectForKeyedSubscript:", kCGImagePropertyPixelWidth));
    objc_msgSend(v9, "floatValue");
    v11 = v10;
    objc_release(v9);
    v12 = objc_retainAutoreleasedReturnValue(objc_msgSend(v8, "objectForKeyedSubscript:", kCGImagePropertyPixelHeight));
    objc_msgSend(v12, "floatValue");
    v14 = v13;
    objc_release(v12);
    if ( v11 >= v14 )
      v15 = v11;
    else
      v15 = v14;
    v16 = fabsf(v15);
    if ( v15 != 0.0 && v16 <= 1200.0 )
      v18 = v16;
    else
      v18 = 1200.0;
  }
  else
  {
    v18 = 1200.0;
  }
  v19 = dispatch_block_create((dispatch_block_flags_t)0LL, &stru_100040DB0);
  blastdoorInterface = self->_blastdoorInterface;
  v27[0] = _NSConcreteStackBlock;
  v27[1] = 3254779904LL;
  v27[2] = sub_100006600;
  v27[3] = &unk_100040D30;
  v30 = &v31;
  v27[4] = self;
  v21 = objc_retain(v6);
  v28 = v21;
  v22 = objc_retain(v19);
  v29 = v22;
  LODWORD(v23) = 1.0;
  *(float *)&v24 = v18;
  -[IMMessagesBlastDoorInterface generateMoviePreviewForAttachmentWithFileURL:maxPixelDimension:minThumbnailPxSize:scale:resultHandler:](
    blastdoorInterface,
    "generateMoviePreviewForAttachmentWithFileURL:maxPixelDimension:minThumbnailPxSize:scale:resultHandler:",
    v21,
    v27,
    v24,
    0.0,
    0.0,
    v23);
  dispatch_block_wait(v22, 0xFFFFFFFFFFFFFFFFLL);
  v25 = objc_retain((id)v32[5]);
  objc_release(v29);
  objc_release(v28);
  objc_release(v22);
  _Block_object_dispose(&v31, 8);
  objc_release(v36);
  objc_release(v8);
  objc_release(v21);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v25);
}