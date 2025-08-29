+[TSPFileManager copyDataFromReadChannel:size:toWriteChannel:synchronous:completion:]
void __cdecl +[TSPFileManager copyDataFromReadChannel:size:toWriteChannel:synchronous:completion:](
        id a1,
        SEL a2,
        id a3,
        unsigned __int64 a4,
        id a5,
        bool a6,
        id a7)
{
  _BOOL4 v8; // w23
  id v12; // x19
  id v13; // x20
  id v14; // x0
  void (__fastcall **v15)(_QWORD, _QWORD, _QWORD); // x21
  NSProgress *v16; // x25
  dispatch_group_s *v17; // x24
  dispatch_group_s *v18; // x24
  NSProgress *v19; // x25
  id v20; // x22
  void *v21; // x0
  dispatch_queue_s *v22; // x22
  _QWORD block[4]; // [xsp+8h] [xbp-188h] BYREF
  id v24; // [xsp+28h] [xbp-168h]
  __int64 *v25; // [xsp+30h] [xbp-160h]
  __int64 *v26; // [xsp+38h] [xbp-158h]
  _QWORD v27[4]; // [xsp+40h] [xbp-150h] BYREF
  id v28; // [xsp+60h] [xbp-130h]
  id v29; // [xsp+68h] [xbp-128h]
  id v30; // [xsp+70h] [xbp-120h]
  __int64 *v31; // [xsp+78h] [xbp-118h]
  __int64 *v32; // [xsp+80h] [xbp-110h]
  _QWORD *v33; // [xsp+88h] [xbp-108h]
  _QWORD v34[5]; // [xsp+90h] [xbp-100h] BYREF
  __int64 v35; // [xsp+B8h] [xbp-D8h] BYREF
  __int64 *v36; // [xsp+C0h] [xbp-D0h]
  __int64 v37; // [xsp+C8h] [xbp-C8h]
  __int64 v38; // [xsp+D0h] [xbp-C0h]
  _QWORD v39[3]; // [xsp+D8h] [xbp-B8h] BYREF
  char v40; // [xsp+F0h] [xbp-A0h]
  __int64 v41; // [xsp+F8h] [xbp-98h] BYREF
  __int64 *v42; // [xsp+100h] [xbp-90h]
  __int64 v43; // [xsp+108h] [xbp-88h]
  __int64 (__fastcall *v44)(); // [xsp+110h] [xbp-80h]
  __int64 (__fastcall *v45)(); // [xsp+118h] [xbp-78h]
  void *v46; // [xsp+120h] [xbp-70h]

  v8 = a6;
  v12 = objc_retain(a3);
  v13 = objc_retain(a5);
  v14 = objc_retain(a7);
  v15 = (void (__fastcall **)(_QWORD, _QWORD, _QWORD))v14;
  if ( v12 && v13 )
  {
    v16 = 0LL;
    v41 = 0LL;
    v42 = &v41;
    v43 = 0x3032000000LL;
    v44 = sub_100004E98;
    v45 = sub_100004EA8;
    v46 = 0LL;
    v39[0] = 0LL;
    v39[1] = v39;
    v39[2] = 0x2020000000LL;
    v40 = 0;
    v35 = 0LL;
    v36 = &v35;
    v37 = 0x2020000000LL;
    v38 = 0LL;
    if ( v8 )
    {
      v16 = objc_retainAutoreleasedReturnValue(+[NSProgress currentProgress](&OBJC_CLASS___NSProgress, "currentProgress"));
      objc_release(v16);
      if ( v16 )
      {
        v16 = objc_retainAutoreleasedReturnValue(+[NSProgress progressWithTotalUnitCount:](&OBJC_CLASS___NSProgress, "progressWithTotalUnitCount:", a4));
        v34[0] = _NSConcreteStackBlock;
        v34[1] = 3254779904LL;
        v34[2] = sub_100005984;
        v34[3] = &unk_1001D1068;
        v34[4] = v39;
        -[NSProgress setCancellationHandler:](v16, "setCancellationHandler:", v34);
      }
    }
    v17 = dispatch_group_create();
    dispatch_group_enter(v17);
    v27[0] = _NSConcreteStackBlock;
    v27[1] = 3254779904LL;
    v27[2] = sub_1000059B4;
    v27[3] = &unk_1001D10C8;
    v31 = &v41;
    v18 = objc_retain(v17);
    v28 = v18;
    v29 = objc_retain(v13);
    v32 = &v35;
    v19 = objc_retain(v16);
    v30 = v19;
    v33 = v39;
    objc_msgSend(v12, "readWithHandler:", v27);
    if ( v8 )
    {
      dispatch_group_wait(v18, 0xFFFFFFFFFFFFFFFFLL);
      if ( v15 )
        v15[2](v15, v36[3], v42[5]);
    }
    else if ( v15 )
    {
      v22 = objc_retainAutoreleasedReturnValue(objc_msgSend(a1, "ioCompletionQueue"));
      block[0] = _NSConcreteStackBlock;
      block[1] = 3254779904LL;
      block[2] = sub_100005E2C;
      block[3] = &unk_1001D10F8;
      v24 = objc_retain(v15);
      v25 = &v35;
      v26 = &v41;
      dispatch_group_notify(v18, v22, block);
      objc_release(v22);
      objc_release(v24);
    }
    objc_release(v30);
    objc_release(v29);
    objc_release(v28);
    objc_release(v18);
    objc_release(v19);
    _Block_object_dispose(&v35, 8);
    _Block_object_dispose(v39, 8);
    _Block_object_dispose(&v41, 8);
    v21 = v46;
    goto LABEL_14;
  }
  if ( v14 )
  {
    v20 = objc_retainAutoreleasedReturnValue(
            +[NSError tsp_unknownReadErrorWithUserInfo:](
              &OBJC_CLASS___NSError,
              "tsp_unknownReadErrorWithUserInfo:",
              0LL));
    ((void (__fastcall **)(_QWORD, _QWORD, id))v15)[2](v15, 0LL, v20);
    v21 = v20;
LABEL_14:
    objc_release(v21);
  }
  objc_release(v15);
  objc_release(v13);
  objc_release(v12);
}