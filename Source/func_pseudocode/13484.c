-[NSString tsu_stringByFixingBrokenSurrogatePairs]
id __cdecl -[NSString tsu_stringByFixingBrokenSurrogatePairs](NSString *self, SEL a2)
{
  __CFString *v2; // x19
  __int64 v3; // x20
  const UniChar *CharactersPtr; // x8
  const char *CStringPtr; // x0
  signed __int64 v6; // x8
  __CFString *v7; // x22
  signed __int64 v8; // x21
  signed __int64 v9; // x9
  UniChar v10; // w9
  signed __int64 v11; // x8
  int v12; // w9
  signed __int64 v13; // x28
  signed __int64 v14; // x9
  UniChar v15; // w9
  signed __int64 v16; // x8
  const UniChar *v17; // x8
  const char *v18; // x0
  __int128 v20; // [xsp+0h] [xbp-110h] BYREF
  __int128 v21; // [xsp+10h] [xbp-100h]
  __int128 v22; // [xsp+20h] [xbp-F0h]
  __int128 v23; // [xsp+30h] [xbp-E0h]
  __int128 v24; // [xsp+40h] [xbp-D0h]
  __int128 v25; // [xsp+50h] [xbp-C0h]
  __int128 v26; // [xsp+60h] [xbp-B0h]
  __int128 v27; // [xsp+70h] [xbp-A0h]
  CFStringRef theString; // [xsp+80h] [xbp-90h]
  const UniChar *v29; // [xsp+88h] [xbp-88h]
  const char *v30; // [xsp+90h] [xbp-80h]
  __int64 v31; // [xsp+98h] [xbp-78h]
  signed __int64 v32; // [xsp+A0h] [xbp-70h]
  signed __int64 v33; // [xsp+A8h] [xbp-68h]
  signed __int64 v34; // [xsp+B0h] [xbp-60h]
  __int64 vars8; // [xsp+118h] [xbp+8h]
  CFRange v36; // 0:x1.16
  CFRange v37; // 0:x1.16

  v2 = objc_retain(self);
  v3 = (__int64)-[__CFString length](v2, "length");
  theString = v2;
  v31 = 0LL;
  v32 = v3;
  CharactersPtr = CFStringGetCharactersPtr(v2);
  CStringPtr = 0LL;
  v29 = CharactersPtr;
  if ( !CharactersPtr )
    CStringPtr = CFStringGetCStringPtr(v2, 0x600u);
  v26 = 0u;
  v27 = 0u;
  v24 = 0u;
  v25 = 0u;
  v22 = 0u;
  v23 = 0u;
  v20 = 0u;
  v21 = 0u;
  v33 = 0LL;
  v34 = 0LL;
  v30 = CStringPtr;
  if ( v3 >= 1 )
  {
    v6 = 0LL;
    v7 = 0LL;
    v8 = 0LL;
    while ( 1 )
    {
      if ( (v8 & 0x8000000000000000LL) == 0 )
      {
        v9 = v32;
        if ( v32 > v8 )
        {
          if ( v29 )
          {
            v10 = v29[v31 + v8];
          }
          else if ( v30 )
          {
            v10 = v30[v31 + v8];
          }
          else
          {
            if ( v34 <= v8 || v6 > v8 )
            {
              v11 = v8 - 4;
              if ( (unsigned __int64)v8 < 4 )
                v11 = 0LL;
              if ( v11 + 64 < v32 )
                v9 = v11 + 64;
              v33 = v11;
              v34 = v9;
              v36.location = v31 + v11;
              v36.length = v9 - v11;
              CFStringGetCharacters(theString, v36, (UniChar *)&v20);
              v6 = v33;
            }
            v10 = *((_WORD *)&v20 + v8 - v6);
          }
          v12 = v10 & 0xFC00;
          if ( v12 == 56320 )
          {
LABEL_37:
            if ( !v7 )
            {
              v7 = objc_retain(
                     -[__CFString mutableCopyWithZone:](
                       v2,
                       "mutableCopyWithZone:",
                       0LL,
                       v20,
                       v21,
                       v22,
                       v23,
                       v24,
                       v25,
                       v26,
                       v27));
              objc_release(v2);
              v2 = v7;
            }
            -[__CFString replaceCharactersInRange:withString:](
              v7,
              "replaceCharactersInRange:withString:",
              v8,
              1LL,
              CFSTR("\uFFFD"),
              v20,
              v21,
              v22,
              v23,
              v24,
              v25,
              v26,
              v27);
            v3 = (__int64)-[__CFString length](v2, "length");
            theString = v2;
            v31 = 0LL;
            v32 = v3;
            v17 = CFStringGetCharactersPtr(v2);
            v18 = 0LL;
            v29 = v17;
            if ( !v17 )
              v18 = CFStringGetCStringPtr(v2, 0x600u);
            v6 = 0LL;
            v30 = v18;
            v33 = 0LL;
            v34 = 0LL;
            goto LABEL_42;
          }
          if ( v12 == 55296 )
          {
            v13 = v8 + 1;
            if ( v8 + 1 >= v3 )
              goto LABEL_37;
            v14 = v32;
            if ( v32 <= v13 )
              goto LABEL_37;
            if ( v29 )
            {
              v15 = v29[v31 + v13];
            }
            else if ( v30 )
            {
              v15 = v30[v31 + v13];
            }
            else
            {
              if ( v34 <= v13 || v6 > v13 )
              {
                v16 = v8 - 3;
                if ( (unsigned __int64)v8 < 3 )
                  v16 = 0LL;
                if ( v16 + 64 < v32 )
                  v14 = v16 + 64;
                v33 = v16;
                v34 = v14;
                v37.location = v31 + v16;
                v37.length = v14 - v16;
                CFStringGetCharacters(theString, v37, (UniChar *)&v20);
                v6 = v33;
              }
              v15 = *((_WORD *)&v20 + v13 - v6);
            }
            if ( v15 >> 10 != 55 )
              goto LABEL_37;
            ++v8;
          }
        }
      }
LABEL_42:
      if ( ++v8 >= v3 )
      {
        objc_release(v7);
        break;
      }
    }
  }
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v2);
}