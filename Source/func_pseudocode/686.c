-[DeviceFileSharingViewController outlineView:acceptDrop:item:childIndex:]
bool __cdecl -[DeviceFileSharingViewController outlineView:acceptDrop:item:childIndex:](
        DeviceFileSharingViewController *self,
        SEL a2,
        id a3,
        id a4,
        id a5,
        signed __int64 a6)
{
  id v8; // x21
  id v9; // x20
  id v10; // x22
  id v11; // x0
  bool v12; // w19
  AMPDevice *v13; // x19
  void *v14; // x19
  void *v15; // x24
  char *v16; // x21
  _UNKNOWN **v17; // x27
  void *v18; // x25
  void *v19; // x22
  void *v20; // x19
  void *v21; // x23
  void *v22; // x26
  _UNKNOWN **v23; // x20
  void *v24; // x28
  NSCharacterSet *v25; // x27
  void *v26; // x19
  unsigned int v27; // w0
  const __CFString *v28; // x8
  NSString *v29; // x22
  void *v30; // x28
  id v31; // x19
  id v32; // x22
  id v33; // x23
  id v34; // x19
  id v35; // x20
  id v36; // x21
  id v38; // [xsp+28h] [xbp-1F8h]
  id v39; // [xsp+30h] [xbp-1F0h]
  id v40; // [xsp+38h] [xbp-1E8h]
  char *v41; // [xsp+58h] [xbp-1C8h]
  id v42; // [xsp+60h] [xbp-1C0h]
  id v43; // [xsp+68h] [xbp-1B8h]
  dispatch_group_s *group; // [xsp+70h] [xbp-1B0h]
  dispatch_queue_s *v45; // [xsp+78h] [xbp-1A8h]
  id v46; // [xsp+80h] [xbp-1A0h]
  id v47; // [xsp+88h] [xbp-198h]
  _QWORD v49[4]; // [xsp+98h] [xbp-188h] BYREF
  id v50; // [xsp+B8h] [xbp-168h]
  id v51; // [xsp+C0h] [xbp-160h]
  id v52; // [xsp+C8h] [xbp-158h]
  DeviceFileSharingViewController *v53; // [xsp+D0h] [xbp-150h]
  id v54; // [xsp+D8h] [xbp-148h]
  _QWORD block[5]; // [xsp+E0h] [xbp-140h] BYREF
  id v56; // [xsp+108h] [xbp-118h]
  id v57; // [xsp+110h] [xbp-110h]
  id v58; // [xsp+118h] [xbp-108h]
  id v59; // [xsp+120h] [xbp-100h]
  id v60; // [xsp+128h] [xbp-F8h]
  _QWORD *v61; // [xsp+130h] [xbp-F0h]
  _QWORD *v62; // [xsp+138h] [xbp-E8h]
  _QWORD *v63; // [xsp+140h] [xbp-E0h]
  char *v64; // [xsp+148h] [xbp-D8h]
  char *v65; // [xsp+150h] [xbp-D0h]
  _QWORD v66[3]; // [xsp+158h] [xbp-C8h] BYREF
  char v67; // [xsp+170h] [xbp-B0h]
  _QWORD v68[3]; // [xsp+178h] [xbp-A8h] BYREF
  char v69; // [xsp+190h] [xbp-90h]
  _QWORD v70[3]; // [xsp+198h] [xbp-88h] BYREF
  char v71; // [xsp+1B0h] [xbp-70h]

  v8 = objc_retain(a3);
  v9 = objc_retain(a4);
  v10 = objc_retain(objc_retain(a5));
  if ( (unsigned int)objc_msgSend(v10, "isApp") )
  {
    v11 = objc_retainAutoreleasedReturnValue(objc_msgSend(v10, "path"));
    v12 = v11 != 0LL;
    v47 = v11;
    if ( v11 )
    {
      v13 = objc_retainAutoreleasedReturnValue(-[DeviceViewController device](self, "device"));
      v46 = objc_retainAutoreleasedReturnValue(-[AMPDevice deviceIdentifier](v13, "deviceIdentifier"));
      objc_release(v13);
      v43 = objc_retainAutoreleasedReturnValue(+[NSMutableArray array](&OBJC_CLASS___NSMutableArray, "array"));
      v42 = objc_retainAutoreleasedReturnValue(+[NSMutableArray array](&OBJC_CLASS___NSMutableArray, "array"));
      v45 = dispatch_queue_create("device copy queue", 0LL);
      group = dispatch_group_create();
      v70[0] = 0LL;
      v70[1] = v70;
      v70[2] = 0x2020000000LL;
      v71 = 0;
      v68[0] = 0LL;
      v68[1] = v68;
      v68[2] = 0x2020000000LL;
      v69 = 0;
      v66[0] = 0LL;
      v66[1] = v66;
      v66[2] = 0x2020000000LL;
      v67 = 0;
      v14 = objc_retainAutoreleasedReturnValue(objc_msgSend(v9, "draggingPasteboard"));
      v15 = objc_retainAutoreleasedReturnValue(objc_msgSend(v14, "pasteboardItems"));
      v39 = v10;
      v40 = v9;
      objc_release(v14);
      v38 = v8;
      v41 = (char *)objc_msgSend(v15, "count");
      if ( v41 )
      {
        v16 = 0LL;
        v17 = &AMDCopyErrorText_ptr;
        do
        {
          v18 = objc_retainAutoreleasedReturnValue(objc_msgSend(v15, "objectAtIndexedSubscript:", v16));
          v19 = v17[276];
          v20 = objc_retainAutoreleasedReturnValue(objc_msgSend(v18, "stringForType:", NSPasteboardTypeFileURL));
          v21 = objc_retainAutoreleasedReturnValue(objc_msgSend(v19, "URLWithString:", v20));
          objc_release(v20);
          v22 = objc_retainAutoreleasedReturnValue(objc_msgSend(v21, "lastPathComponent"));
          v23 = v17;
          v24 = v17[276];
          v25 = objc_retainAutoreleasedReturnValue(
                  +[NSCharacterSet URLPathAllowedCharacterSet](
                    &OBJC_CLASS___NSCharacterSet,
                    "URLPathAllowedCharacterSet"));
          v26 = objc_retainAutoreleasedReturnValue(objc_msgSend(v22, "stringByAddingPercentEncodingWithAllowedCharacters:", v25));
          v27 = (unsigned int)objc_msgSend(v21, "hasDirectoryPath");
          v28 = &stru_1000BA220;
          if ( v27 )
            v28 = CFSTR("/");
          v29 = objc_retainAutoreleasedReturnValue(
                  +[NSString stringWithFormat:](
                    &OBJC_CLASS___NSString,
                    "stringWithFormat:",
                    CFSTR("afc://%@/%@/%@%@"),
                    v46,
                    v47,
                    v26,
                    v28));
          v30 = objc_retainAutoreleasedReturnValue(objc_msgSend(v24, "URLWithString:", v29));
          objc_release(v29);
          objc_release(v26);
          objc_release(v25);
          block[0] = _NSConcreteStackBlock;
          block[1] = 3254779904LL;
          block[2] = sub_10000F868;
          block[3] = &unk_1000B8CD8;
          block[4] = self;
          v56 = v30;
          v62 = v68;
          v63 = v70;
          v64 = v16;
          v61 = v66;
          v57 = v22;
          v65 = v41;
          v58 = objc_retain(v43);
          v59 = v21;
          v60 = objc_retain(v42);
          v31 = objc_retain(v21);
          v32 = objc_retain(v22);
          v33 = objc_retain(v30);
          dispatch_group_async(group, v45, block);
          objc_release(v60);
          objc_release(v59);
          objc_release(v58);
          objc_release(v57);
          objc_release(v56);
          objc_release(v31);
          objc_release(v32);
          objc_release(v33);
          objc_release(v18);
          ++v16;
          v17 = v23;
        }
        while ( v41 != v16 );
      }
      v49[0] = _NSConcreteStackBlock;
      v49[1] = 3254779904LL;
      v49[2] = sub_10000FDAC;
      v49[3] = &unk_1000B8D38;
      v50 = v43;
      v51 = v42;
      v10 = v39;
      v52 = objc_retain(v39);
      v53 = self;
      v54 = v46;
      v34 = objc_retain(v46);
      v35 = objc_retain(v42);
      v36 = objc_retain(v43);
      dispatch_group_notify(group, &_dispatch_main_q, v49);
      objc_release(v54);
      objc_release(v52);
      objc_release(v51);
      objc_release(v50);
      objc_release(v34);
      objc_release(v35);
      objc_release(v36);
      objc_release(v15);
      _Block_object_dispose(v66, 8);
      _Block_object_dispose(v68, 8);
      _Block_object_dispose(v70, 8);
      objc_release(group);
      objc_release(v45);
      v8 = v38;
      v9 = v40;
      v12 = 1;
    }
    objc_release(v47);
  }
  else
  {
    v12 = 0;
  }
  objc_release(v10);
  objc_release(v10);
  objc_release(v9);
  objc_release(v8);
  return v12;
}