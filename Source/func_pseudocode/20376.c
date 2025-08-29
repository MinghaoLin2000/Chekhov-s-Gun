__Z28liteFigureOutDriverSetupInfoP16XDriverSetupInfoP13lite_driver_sP12NSDictionaryIP8NSStringS5_E
__int64 __fastcall liteFigureOutDriverSetupInfo(__int64 a1, __int64 a2, id a3)
{
  id v5; // x19
  void *v6; // x0
  CFArrayRef (__cdecl **v7)(CFAllocatorRef, const void **, CFIndex, const CFArrayCallBacks *); // x23
  id v8; // x0
  _BOOL4 v9; // w25
  id v10; // x0
  _BOOL4 v11; // w28
  id v12; // x0
  unsigned int v13; // w27
  void *v14; // x0
  id v15; // x21
  NSUInteger v16; // x0
  NSMutableArray *v17; // x0
  void *v18; // x8
  NSArray *v19; // x24
  void *v20; // x25
  bool (__fastcall *v21)(void *, __int64, int); // x22
  __int64 v22; // x19
  void *i; // x27
  void *v24; // x21
  const __CFString *v25; // x2
  int v26; // w19
  __int64 v27; // x0
  void *v28; // x8
  int v29; // w21
  int v30; // w10
  int v31; // w9
  __int64 v32; // x8
  int v33; // w10
  bool v34; // zf
  char v35; // w10
  void *v37; // x21
  __int64 v38; // x19
  NSString *v39; // x22
  os_log_s *v40; // x19
  __int64 v41; // x20
  unsigned __int64 v43; // [xsp+0h] [xbp-160h]
  __int64 v44; // [xsp+8h] [xbp-158h]
  _BOOL4 v45; // [xsp+14h] [xbp-14Ch]
  id v46; // [xsp+18h] [xbp-148h]
  NSArray *v47; // [xsp+20h] [xbp-140h]
  id v48; // [xsp+28h] [xbp-138h]
  uint8_t buf[16]; // [xsp+30h] [xbp-130h] BYREF
  __int128 v50; // [xsp+40h] [xbp-120h] BYREF
  __int128 v51; // [xsp+50h] [xbp-110h]
  __int128 v52; // [xsp+60h] [xbp-100h]
  __int128 v53; // [xsp+70h] [xbp-F0h]
  _BYTE v54[128]; // [xsp+80h] [xbp-E0h] BYREF

  v5 = objc_retain(a3);
  v6 = *(void **)(a2 + 2040);
  *(_QWORD *)(a2 + 2040) = CFSTR("application/octet-stream");
  objc_release(v6);
  v7 = &CFArrayCreate_ptr;
  v48 = v5;
  if ( !v5 )
  {
    v11 = 0;
    v9 = 0;
    v13 = 0;
LABEL_31:
    v26 = 0;
    *(_QWORD *)(a2 + 2020) = 0x2580000012CLL;
    *(_BYTE *)(a2 + 120) |= 3u;
    *(int32x4_t *)(a2 + 972) = vdupq_n_s32(0x27Bu);
    *(_OWORD *)(a2 + 988) = xmmword_10006D4A0;
    *(_DWORD *)(a2 + 128) = 1;
    *(_OWORD *)(a2 + 1988) = xmmword_10006D4B0;
LABEL_32:
    *(_QWORD *)a1 |= *(_QWORD *)(a2 + 120);
    objc_storeStrong((id *)(a1 + 32), *(id *)(a2 + 2040));
    v27 = objc_opt_new(v7[359]);
    v28 = *(void **)(a1 + 8);
    *(_QWORD *)(a1 + 8) = v27;
    objc_release(v28);
    objc_msgSend(*(id *)(a1 + 8), "addObject:", CFSTR("application/octet-stream"));
    objc_msgSend(*(id *)(a1 + 8), "addObjectsFromArray:", *(_QWORD *)(a1 + 16));
    v29 = v26 ^ 1;
    if ( (((unsigned int)objc_msgSend(*(id *)(a1 + 8), "containsObject:", CFSTR("application/pdf")) | v26 ^ 1 | v9) & 1) == 0 )
      objc_msgSend(*(id *)(a1 + 8), "addObject:", CFSTR("application/pdf"));
    if ( (((unsigned int)objc_msgSend(*(id *)(a1 + 8), "containsObject:", CFSTR("image/jpeg"), v43, v44) | v29 | v11) & 1) == 0 )
      objc_msgSend(*(id *)(a1 + 8), "addObject:", CFSTR("image/jpeg"));
    if ( (((unsigned int)objc_msgSend(*(id *)(a1 + 8), "containsObject:", CFSTR("image/png")) | v29 | v13) & 1) == 0 )
      objc_msgSend(*(id *)(a1 + 8), "addObject:", CFSTR("image/png"));
    if ( (v26 & ((unsigned int)objc_msgSend(*(id *)(a1 + 8), "containsObject:", CFSTR("image/urf")) ^ 1)) == 1 )
      objc_msgSend(*(id *)(a1 + 8), "addObject:", CFSTR("image/urf"));
    v30 = *(_DWORD *)(a2 + 1508);
    if ( v30 >= 21590 )
    {
      v31 = *(_DWORD *)(a2 + 1512);
      if ( v31 < 27940 )
      {
LABEL_44:
        if ( v31 >= 15240 )
          *(_DWORD *)(a2 + 988) = 5;
      }
    }
    else if ( v30 >= 10160 )
    {
      v31 = *(_DWORD *)(a2 + 1512);
      goto LABEL_44;
    }
    if ( *(int *)(a2 + 140) < 1 )
    {
LABEL_68:
      if ( *(_DWORD *)(a2 + 548) )
      {
        v37 = (void *)objc_opt_new(v7[359]);
        if ( *(int *)(a2 + 548) >= 1 )
        {
          v38 = 0LL;
          do
          {
            v39 = objc_retainAutoreleasedReturnValue(
                    +[NSString stringWithUTF8String:](
                      &OBJC_CLASS___NSString,
                      "stringWithUTF8String:",
                      (&MediaSourceStrings)[*(unsigned int *)(a2 + 752 + 4 * v38)]));
            objc_msgSend(v37, "addObject:", v39);
            objc_release(v39);
            ++v38;
          }
          while ( v38 < *(int *)(a2 + 548) );
        }
        v40 = *(os_log_s **)(a1 + 24);
        *(_QWORD *)(a1 + 24) = v37;
      }
      else
      {
        v40 = *(os_log_s **)(a1 + 24);
        *(_QWORD *)(a1 + 24) = &off_1000B4698;
      }
      v41 = 1LL;
      goto LABEL_75;
    }
    v32 = 0LL;
    while ( 1 )
    {
      v33 = *(_DWORD *)(a2 + 144 + 4 * v32);
      if ( (v33 & 0xFFFFFFFC) == 0x14 || ((unsigned int)(v33 - 28) >= 8 ? (v34 = v33 == 4) : (v34 = 1), v34) )
      {
        v35 = 64;
      }
      else if ( v33 != 5 && (unsigned int)(v33 - 70) >= 0x14 )
      {
        if ( v33 == 6 )
        {
          v35 = 16;
        }
        else
        {
          if ( v33 != 7 && (unsigned int)(v33 - 50) > 3 )
            goto LABEL_56;
          v35 = 8;
        }
      }
      else
      {
        v35 = 32;
      }
      *(_BYTE *)a1 |= v35;
LABEL_56:
      if ( ++v32 >= *(int *)(a2 + 140) )
        goto LABEL_68;
    }
  }
  v8 = objc_retainAutoreleasedReturnValue(objc_msgSend(v5, "objectForKey:", CFSTR("TEST-NO-PDF")));
  v9 = v8 != 0LL;
  objc_release(v8);
  v10 = objc_retainAutoreleasedReturnValue(objc_msgSend(v5, "objectForKey:", CFSTR("TEST-NO-JPEG")));
  v11 = v10 != 0LL;
  objc_release(v10);
  v12 = objc_retainAutoreleasedReturnValue(objc_msgSend(v5, "objectForKey:", CFSTR("TEST-NO-PNG")));
  v13 = v12 != 0LL;
  objc_release(v12);
  v14 = objc_retainAutoreleasedReturnValue(objc_msgSend(v5, "objectForKeyedSubscript:", CFSTR("COMMAND SET")));
  if ( v14 )
  {
    v15 = objc_retain(v14);
  }
  else
  {
    v15 = objc_retain(objc_retainAutoreleasedReturnValue(objc_msgSend(v5, "objectForKeyedSubscript:", CFSTR("CMD"))));
    if ( !v15 )
    {
      v47 = objc_retainAutoreleasedReturnValue(+[NSArray array](&OBJC_CLASS___NSArray, "array"));
      v15 = 0LL;
      v16 = -[NSArray count](v47, "count");
      goto LABEL_7;
    }
  }
  v47 = objc_retainAutoreleasedReturnValue(objc_msgSend(v15, "componentsSeparatedByString:", CFSTR(",")));
  objc_release(v15);
  v16 = -[NSArray count](v47, "count");
LABEL_7:
  if ( !v16 )
  {
    objc_release(v47);
    objc_release(v15);
    goto LABEL_31;
  }
  v17 = objc_opt_new(&OBJC_CLASS___NSMutableArray);
  v45 = v9;
  v18 = *(void **)(a1 + 16);
  *(_QWORD *)(a1 + 16) = v17;
  objc_release(v18);
  v52 = 0u;
  v53 = 0u;
  v50 = 0u;
  v51 = 0u;
  v19 = objc_retain(v47);
  v46 = v15;
  v20 = -[NSArray countByEnumeratingWithState:objects:count:](
          v19,
          "countByEnumeratingWithState:objects:count:",
          &v50,
          v54,
          16LL);
  v43 = __PAIR64__(v13, v11);
  v44 = a2;
  v21 = 0LL;
  if ( !v20 )
    goto LABEL_27;
  v22 = *(_QWORD *)v51;
  do
  {
    for ( i = 0LL; i != v20; i = (char *)i + 1 )
    {
      if ( *(_QWORD *)v51 != v22 )
        objc_enumerationMutation(v19);
      v24 = *(void **)(*((_QWORD *)&v50 + 1) + 8LL * (_QWORD)i);
      if ( !(unsigned int)objc_msgSend(v24, "caseInsensitiveCompare:", CFSTR("URF"), v43, v44) )
      {
        v21 = liteInitURF;
        objc_msgSend(*(id *)(a1 + 16), "addObject:", CFSTR("image/urf"));
        continue;
      }
      if ( !(unsigned int)objc_msgSend(v24, "caseInsensitiveCompare:", CFSTR("PDF")) )
      {
        v25 = CFSTR("application/pdf");
LABEL_24:
        objc_msgSend(*(id *)(a1 + 16), "addObject:", v25);
        continue;
      }
      if ( !(unsigned int)objc_msgSend(v24, "caseInsensitiveCompare:", CFSTR("JPEG")) )
      {
        v25 = CFSTR("image/jpeg");
        goto LABEL_24;
      }
      if ( !(unsigned int)objc_msgSend(v24, "caseInsensitiveCompare:", CFSTR("PNG")) )
      {
        v25 = CFSTR("image/png");
        goto LABEL_24;
      }
      if ( (unsigned int)objc_msgSend(v24, "caseInsensitiveCompare:", CFSTR("application/octet-stream"))
        && (unsigned int)objc_msgSend(v24, "containsString:", CFSTR("/")) )
      {
        objc_msgSend(*(id *)(a1 + 16), "addObject:", v24);
      }
    }
    v20 = -[NSArray countByEnumeratingWithState:objects:count:](
            v19,
            "countByEnumeratingWithState:objects:count:",
            &v50,
            v54,
            16LL);
  }
  while ( v20 );
LABEL_27:
  objc_release(v19);
  a2 = v44;
  v7 = &CFArrayCreate_ptr;
  v11 = v43;
  v13 = HIDWORD(v43);
  v9 = v45;
  objc_release(v19);
  objc_release(v46);
  if ( !v21 )
    goto LABEL_31;
  if ( ((unsigned int (__fastcall *)(id, __int64, __int64))v21)(v48, v44, 1LL) )
  {
    v26 = 1;
    goto LABEL_32;
  }
  v40 = (os_log_s *)objc_retainAutoreleasedReturnValue(_PKLogCategory(PKLogCategoryProgress[0]));
  if ( os_log_type_enabled(v40, OS_LOG_TYPE_ERROR) )
  {
    *(_WORD *)buf = 0;
    _os_log_impl((void *)&_mh_execute_header, v40, OS_LOG_TYPE_ERROR, "Driver initialization failed.", buf, 2u);
  }
  v41 = 0LL;
LABEL_75:
  objc_release(v40);
  objc_release(v48);
  return v41;
}