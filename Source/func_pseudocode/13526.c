-[NSString tsu_setOfContainedWordsIncludingPunctuationAndSymbols:]
id __cdecl -[NSString tsu_setOfContainedWordsIncludingPunctuationAndSymbols:](NSString *self, SEL a2, bool a3)
{
  _BOOL4 v3; // w19
  _QWORD *v5; // x22
  CFIndex v6; // x20
  const __CFLocale *v7; // x19
  __CFStringTokenizer *v8; // x25
  CFStringTokenizerTokenType v9; // x0
  __int64 v10; // x24
  CFRange CurrentTokenRange; // kr00_16
  CFIndex location; // x19
  CFIndex length; // x28
  CFIndex v14; // x26
  CFIndex v15; // x20
  CFIndex v16; // x8
  __int64 v17; // x26
  CFRange v18; // kr10_16
  CFIndex v19; // x27
  int v20; // w8
  CFRange v21; // kr20_16
  CFIndex v22; // x8
  CFIndex v24; // x2
  CFIndex v25; // x3
  NSString *v26; // x20
  NSString *v27; // x19
  __int64 v28; // x23
  id v30; // [xsp+0h] [xbp-B0h]
  CFIndex v31; // [xsp+8h] [xbp-A8h]
  CFIndex v32; // [xsp+10h] [xbp-A0h]
  CFIndex v33; // [xsp+18h] [xbp-98h]
  NSString *v34; // [xsp+20h] [xbp-90h]
  _BOOL4 v35; // [xsp+2Ch] [xbp-84h]
  NSCharacterSet *v36; // [xsp+30h] [xbp-80h]
  _QWORD v37[4]; // [xsp+38h] [xbp-78h] BYREF
  bool v38; // [xsp+58h] [xbp-58h]
  __int64 vars8; // [xsp+B8h] [xbp+8h]
  CFRange v40; // 0:x2.16

  v3 = a3;
  v30 = objc_retainAutoreleasedReturnValue(+[NSMutableSet set](&OBJC_CLASS___NSMutableSet, "set"));
  v37[0] = _NSConcreteStackBlock;
  v37[1] = 3221225472LL;
  v37[2] = sub_1001612CC;
  v37[3] = &unk_1001DF4E8;
  v35 = v3;
  v38 = v3;
  v5 = objc_retainBlock(v37);
  v36 = objc_retainAutoreleasedReturnValue(
          +[NSCharacterSet whitespaceAndNewlineCharacterSet](
            &OBJC_CLASS___NSCharacterSet,
            "whitespaceAndNewlineCharacterSet"));
  v6 = -[NSString length](self, "length");
  v7 = CFLocaleCopyCurrent();
  v40.location = 0LL;
  v31 = v6;
  v40.length = v6;
  v8 = CFStringTokenizerCreate(kCFAllocatorDefault, (CFStringRef)self, v40, 4uLL, v7);
  CFRelease(v7);
  v9 = CFStringTokenizerGoToTokenAtIndex(v8, 0LL);
  LODWORD(v10) = v9;
  if ( !v9 )
    ((void (__fastcall *)(_QWORD *, __CFStringTokenizer *))v5[2])(v5, v8);
  CurrentTokenRange = CFStringTokenizerGetCurrentTokenRange(v8);
  if ( CurrentTokenRange.location != -1 )
  {
    location = CurrentTokenRange.location;
    length = CurrentTokenRange.length;
    v14 = 0LL;
    v15 = CurrentTokenRange.length;
    v34 = self;
    do
    {
      if ( location >= v14 )
        v16 = v14;
      else
        v16 = location;
      v32 = v16;
      v33 = length;
      v17 = ((__int64 (__fastcall *)(_QWORD *, __CFStringTokenizer *))v5[2])(v5, v8);
      v18 = CFStringTokenizerGetCurrentTokenRange(v8);
      v19 = v18.location;
      length = v18.length;
      if ( v35 )
      {
        while ( 1 )
        {
          v20 = v10;
          v10 = v17;
          if ( ((v20 | (unsigned int)v17) & 0x20) != 0 )
          {
            if ( (v17 & 0x10) == 0 )
              goto LABEL_20;
          }
          else if ( (v17 & 0x10) != 0 && length == 1 )
          {
            if ( -[NSCharacterSet characterIsMember:](
                   v36,
                   "characterIsMember:",
                   -[NSString characterAtIndex:](self, "characterAtIndex:", v19)) )
            {
              v28 = 1LL;
              goto LABEL_21;
            }
          }
          else if ( !v17 || (v17 & 0x10) != 0 )
          {
            goto LABEL_20;
          }
          v17 = ((__int64 (__fastcall *)(_QWORD *, __CFStringTokenizer *))v5[2])(v5, v8);
          v21 = CFStringTokenizerGetCurrentTokenRange(v8);
          v19 = v21.location;
          length = v21.length;
        }
      }
      v10 = v17;
LABEL_20:
      v28 = length;
LABEL_21:
      v22 = location + v15;
      if ( location + v15 <= v31 )
        v22 = v31;
      if ( v19 > v31 || v10 == 0 )
        v14 = v22;
      else
        v14 = v19;
      if ( v35 )
        v24 = v32;
      else
        v24 = location;
      if ( v35 )
        v25 = v14 - v32;
      else
        v25 = v33;
      v26 = objc_retainAutoreleasedReturnValue(-[NSString substringWithRange:](v34, "substringWithRange:", v24, v25, v30));
      v27 = objc_retainAutoreleasedReturnValue(-[NSString stringByTrimmingCharactersInSet:](v26, "stringByTrimmingCharactersInSet:", v36));
      objc_release(v26);
      if ( -[NSString length](v27, "length") )
        objc_msgSend(v30, "addObject:", v27);
      objc_release(v27);
      location = v19;
      v15 = v28;
      self = v34;
    }
    while ( v19 != -1 );
  }
  if ( v8 )
    CFRelease(v8);
  objc_release(v36);
  objc_release(v5);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v30);
}