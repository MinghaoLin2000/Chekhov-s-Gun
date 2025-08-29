-[HSModel getHSModelForEngineMajorVersion:minorVersion:numHSModels:modelBuffer:length:]
bool __cdecl -[HSModel getHSModelForEngineMajorVersion:minorVersion:numHSModels:modelBuffer:length:](
        HSModel *self,
        SEL a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        char *a6,
        unsigned __int64 a7)
{
  void *v13; // x20
  void *v14; // x19
  const char *v15; // x8
  __int64 v16; // x8
  void *v17; // x25
  void *v18; // x22
  void *v19; // x21
  int v20; // w9
  unsigned int v21; // w19
  __int64 v22; // x26
  unsigned __int64 v23; // x23
  int v24; // w8
  __int64 v25; // x26
  unsigned __int64 v26; // x23
  void *v27; // x0
  void *v28; // x0
  objc_class *v29; // x25
  void *v30; // x0
  void *v31; // x0
  void *v33; // x0
  __int64 v34; // [xsp+0h] [xbp-120h]
  __int64 v35; // [xsp+8h] [xbp-118h]
  HSModel *v36; // [xsp+30h] [xbp-F0h]
  unsigned __int64 v37; // [xsp+38h] [xbp-E8h]
  unsigned __int64 v38; // [xsp+40h] [xbp-E0h]
  unsigned __int64 v39; // [xsp+48h] [xbp-D8h]
  void *v40; // [xsp+50h] [xbp-D0h]
  _QWORD v41[5]; // [xsp+70h] [xbp-B0h] BYREF
  __int64 v42; // [xsp+98h] [xbp-88h] BYREF
  __int64 *v43; // [xsp+A0h] [xbp-80h]
  __int64 v44; // [xsp+A8h] [xbp-78h]
  __int64 v45; // [xsp+B0h] [xbp-70h]

  v13 = objc_retainAutoreleasedReturnValue(+[NSMutableArray array](&OBJC_CLASS___NSMutableArray, "array"));
  v14 = objc_retainAutoreleasedReturnValue(+[NSMutableArray array](&OBJC_CLASS___NSMutableArray, "array"));
  v15 = "valid";
  if ( !a6 )
    v15 = "NULL";
  NSLog(
    &CFSTR("getHSModelForEngineMajorVersion: majorVersion=%lu minorVersion=%lu numHSModels=%lu buffer=%s length=%zu\n").isa,
    a3,
    a4,
    a5,
    v15,
    a7);
  if ( !a6 )
  {
    NSLog(&CFSTR("Empty buffer\n").isa, v34);
    goto LABEL_40;
  }
  v39 = a5;
  v40 = v14;
  v37 = a3;
  v38 = a4;
  v36 = self;
  if ( a5 )
  {
    if ( a7 >= 4 )
    {
      v16 = 0LL;
      v17 = 0LL;
      v18 = 0LL;
      v19 = 0LL;
      LODWORD(a5) = 0;
      v20 = 0;
      while ( 1 )
      {
        v21 = (unsigned __int8)a6[v16];
        if ( v21 >= 2 )
        {
          NSLog(&CFSTR("Unexpected modelType = 0x%x\n").isa, (unsigned __int8)a6[v16], v35);
          goto LABEL_31;
        }
        v22 = (unsigned int)(v20 + 2);
        v23 = (unsigned __int8)a6[v20 + 1];
        if ( a7 - v22 <= v23 )
        {
          NSLog(&CFSTR("Bad buffer: remaining bytes %lu is less than localeCodeLen %d\n").isa, a7 - v22, v23);
          goto LABEL_31;
        }
        if ( v19 )
          objc_release(v19);
        v19 = objc_msgSend(
                objc_alloc((Class)&OBJC_CLASS___NSString),
                "initWithBytes:length:encoding:",
                &a6[v22],
                v23,
                4LL);
        if ( !v19 )
        {
          NSLog(&CFSTR("Failed to create localeCode\n").isa);
          objc_release(v17);
          objc_release(v18);
          goto LABEL_36;
        }
        v24 = v22 + v23;
        v25 = (unsigned int)(v22 + v23 + 1);
        v26 = (unsigned __int8)a6[v24];
        if ( a7 - v25 < v26 )
        {
          NSLog(&CFSTR("Bad buffer: remaining bytes %lu is less than hashLen %d\n").isa, a7 - v25, v26);
          goto LABEL_31;
        }
        if ( v18 )
          objc_release(v18);
        v27 = objc_msgSend(
                objc_alloc((Class)&OBJC_CLASS___NSString),
                "initWithBytes:length:encoding:",
                &a6[v25],
                v26,
                4LL);
        if ( !v27 )
        {
          NSLog(&CFSTR("Failed to create hash\n").isa);
          v33 = v17;
          goto LABEL_35;
        }
        v18 = v27;
        if ( v17 )
          objc_release(v17);
        v42 = 0LL;
        v43 = &v42;
        v44 = 0x2050000000LL;
        v28 = (void *)qword_100041EF0;
        v45 = qword_100041EF0;
        if ( !qword_100041EF0 )
        {
          v41[0] = _NSConcreteStackBlock;
          v41[1] = 3254779904LL;
          v41[2] = sub_100014F2C;
          v41[3] = &unk_1000319A8;
          v41[4] = &v42;
          sub_100014F2C(v41);
          v28 = (void *)v43[3];
        }
        v29 = objc_retainAutorelease(v28);
        _Block_object_dispose(&v42, 8);
        v30 = objc_msgSend(
                objc_alloc(v29),
                "initWithData:hash:locale:digest:signature:certificate:",
                0LL,
                v18,
                v19,
                0LL,
                0LL,
                0LL);
        if ( !v30 )
          break;
        v17 = v30;
        v31 = v13;
        if ( v21 )
          v31 = v40;
        objc_msgSend(v31, "addObject:", v17);
        v16 = (unsigned int)(v25 + v26);
        a5 = (unsigned int)(a5 + 1);
        v20 = v25 + v26;
        if ( a7 - 3 <= (unsigned int)v16 )
          goto LABEL_24;
      }
      NSLog(&CFSTR("Failed to create CSVoiceTriggerRTModel asset\n").isa);
      goto LABEL_34;
    }
    NSLog(&CFSTR("Invalid length=%zu\n").isa, a7);
LABEL_40:
    LOBYTE(v19) = 0;
    goto LABEL_26;
  }
  v19 = 0LL;
  v18 = 0LL;
  v17 = 0LL;
LABEL_24:
  if ( (unsigned int)a5 == v39 )
  {
    v14 = v40;
    NSLog(
      &CFSTR("Requesting HSModel: majorVersion=%lu minorVersion=%lu assetCount=%d downloaded[%lu] preInstalled[%lu], on Queue: %@\n").isa,
      v37,
      v38,
      a5,
      objc_msgSend(v13, "count"),
      objc_msgSend(v40, "count"),
      v36->_queue);
    -[HSModel scheduleCoreSpeechTask:minorVersion:downloadedModels:preinstalledModels:](
      v36,
      "scheduleCoreSpeechTask:minorVersion:downloadedModels:preinstalledModels:",
      v37,
      v38,
      v13,
      v40);
    objc_release(v17);
    objc_release(v18);
    objc_release(v19);
    LOBYTE(v19) = 1;
    goto LABEL_26;
  }
  NSLog(&CFSTR("assetCount %u != numHSModels %lu\n").isa, a5, v39);
LABEL_31:
  objc_release(v17);
LABEL_34:
  v33 = v18;
LABEL_35:
  objc_release(v33);
  objc_release(v19);
  LOBYTE(v19) = 0;
LABEL_36:
  v14 = v40;
LABEL_26:
  objc_release(v14);
  objc_release(v13);
  return (char)v19;
}