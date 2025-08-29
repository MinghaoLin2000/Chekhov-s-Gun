-[TSUZipInflateReadChannel processData:inflateResult:CRC:isDone:handler:]
bool __cdecl -[TSUZipInflateReadChannel processData:inflateResult:CRC:isDone:handler:](
        TSUZipInflateReadChannel *self,
        SEL a2,
        id a3,
        int *a4,
        unsigned int *a5,
        bool a6,
        id a7)
{
  _BOOL4 v8; // w23
  dispatch_data_s *v12; // x19
  id v13; // x20
  int v14; // w8
  bool v15; // w25
  void *v16; // x22
  void *v17; // x22
  _QWORD applier[5]; // [xsp+8h] [xbp-A8h] BYREF
  id v20; // [xsp+30h] [xbp-80h]
  __int64 *v21; // [xsp+38h] [xbp-78h]
  int *v22; // [xsp+40h] [xbp-70h]
  unsigned int *v23; // [xsp+48h] [xbp-68h]
  __int64 v24; // [xsp+50h] [xbp-60h] BYREF
  __int64 *v25; // [xsp+58h] [xbp-58h]
  __int64 v26; // [xsp+60h] [xbp-50h]
  char v27; // [xsp+68h] [xbp-48h]

  v8 = a6;
  v12 = (dispatch_data_s *)objc_retain(a3);
  v24 = 0LL;
  v25 = &v24;
  v26 = 0x2020000000LL;
  v27 = 1;
  applier[0] = _NSConcreteStackBlock;
  applier[1] = 3254779904LL;
  applier[2] = sub_100148FAC;
  applier[3] = &unk_1001DE4A8;
  v21 = &v24;
  v22 = a4;
  applier[4] = self;
  v23 = a5;
  v13 = objc_retain(objc_retain(a7));
  v20 = v13;
  dispatch_data_apply(v12, applier);
  v14 = *((unsigned __int8 *)v25 + 24);
  if ( !self->_validateCRC )
    goto LABEL_10;
  if ( !*((_BYTE *)v25 + 24) )
    goto LABEL_24;
  if ( v8 )
  {
    if ( !a5 )
    {
LABEL_9:
      v14 = 1;
LABEL_10:
      if ( v14 && v8 )
      {
        if ( *a4 != 1 )
        {
          if ( TSUDefaultCat_init_token != -1 )
            dispatch_once(&TSUDefaultCat_init_token, &stru_1001DE4F8);
          v16 = TSUDefaultCat_log_t;
          if ( os_log_type_enabled((os_log_t)TSUDefaultCat_log_t, OS_LOG_TYPE_ERROR) )
            sub_100171F84(v16);
LABEL_23:
          *((_BYTE *)v25 + 24) = 0;
          goto LABEL_24;
        }
        goto LABEL_18;
      }
      if ( v14 )
      {
LABEL_18:
        v15 = 1;
        goto LABEL_25;
      }
LABEL_24:
      -[TSUZipInflateReadChannel handleFailureWithHandler:error:](self, "handleFailureWithHandler:error:", v13, 0LL);
      v15 = *((_BYTE *)v25 + 24) != 0;
      goto LABEL_25;
    }
LABEL_8:
    if ( self->_CRC != *a5 )
    {
      if ( TSUDefaultCat_init_token != -1 )
        dispatch_once(&TSUDefaultCat_init_token, &stru_1001DE4D8);
      v17 = TSUDefaultCat_log_t;
      if ( os_log_type_enabled((os_log_t)TSUDefaultCat_log_t, OS_LOG_TYPE_ERROR) )
        sub_100171FBC(v17);
      goto LABEL_23;
    }
    goto LABEL_9;
  }
  v15 = 1;
  if ( a5 && *a4 == 1 )
    goto LABEL_8;
LABEL_25:
  objc_release(v20);
  _Block_object_dispose(&v24, 8);
  objc_release(v13);
  objc_release(v12);
  return v15;
}