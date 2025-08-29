-[FudPersonalizer doPersonalization:]
void __cdecl -[FudPersonalizer doPersonalization:](FudPersonalizer *self, SEL a2, id a3)
{
  id v5; // x0
  dispatch_queue_s *personalizationQueue; // x0
  __int64 v7; // x0
  const __CFString *v8; // x21
  __int64 v9; // x22
  FudPersonalizerDelegate *delegate; // x0
  _QWORD block[7]; // [xsp+18h] [xbp-88h] BYREF
  __int64 v12; // [xsp+50h] [xbp-50h] BYREF
  __int64 *v13; // [xsp+58h] [xbp-48h]
  __int64 v14; // [xsp+60h] [xbp-40h]
  __int64 (__fastcall *v15)(); // [xsp+68h] [xbp-38h]
  __int64 (__fastcall *v16)(); // [xsp+70h] [xbp-30h]
  __int64 v17; // [xsp+78h] [xbp-28h]

  v12 = 0LL;
  v13 = &v12;
  v14 = 0x3052000000LL;
  v15 = sub_100003BC8;
  v16 = sub_100003BD8;
  v17 = 0LL;
  if ( self->_delegate )
  {
    if ( self->_personalizationQueue )
    {
      if ( a3 )
      {
        if ( (unsigned int)objc_msgSend(a3, "responseFormat") > 2 )
        {
          v7 = 2LL;
          v8 = CFSTR("Invalid response format");
        }
        else if ( (unsigned int)objc_msgSend(a3, "responseFormat") && !objc_msgSend(a3, "payload") )
        {
          v7 = 2LL;
          v8 = CFSTR("Response format requires payload");
        }
        else
        {
          if ( (unsigned int)objc_msgSend(a3, "responseFormat") == 1
            || !(unsigned int)objc_msgSend(a3, "responseAlignment") )
          {
            -[FudPersonalizer freePersonalizationData](self, "freePersonalizationData");
            v5 = objc_retain(a3);
            v13[5] = (__int64)v5;
            personalizationQueue = (dispatch_queue_s *)self->_personalizationQueue;
            block[0] = _NSConcreteStackBlock;
            block[1] = 3254779904LL;
            block[2] = sub_100003BE4;
            block[3] = &unk_100031348;
            block[5] = a3;
            block[6] = &v12;
            block[4] = self;
            dispatch_async(personalizationQueue, block);
            goto LABEL_10;
          }
          v7 = 2LL;
          v8 = CFSTR("Response format doesn't support alignment");
        }
      }
      else
      {
        v7 = 2LL;
        v8 = CFSTR("Personalization request=nil");
      }
    }
    else
    {
      v7 = 1LL;
      v8 = CFSTR("Personalization queue=nil");
    }
  }
  else
  {
    v7 = 1LL;
    v8 = CFSTR("Personalization delegate=nil");
  }
  v9 = FUDError(v7, v8);
  FudLog(3LL, CFSTR("%s(): %@"));
  delegate = self->_delegate;
  if ( delegate )
    -[FudPersonalizerDelegate personalizationDone:response:error:](
      delegate,
      "personalizationDone:response:error:",
      a3,
      0LL,
      v9,
      "-[FudPersonalizer doPersonalization:]",
      v8);
LABEL_10:
  _Block_object_dispose(&v12, 8);
}