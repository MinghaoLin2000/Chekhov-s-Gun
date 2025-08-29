+[TSUAssertionHandler packedBacktraceStringWithReturnAddresses:]
id __cdecl +[TSUAssertionHandler packedBacktraceStringWithReturnAddresses:](id a1, SEL a2, id a3)
{
  void *v4; // x19
  void *v5; // x23
  id v6; // x22
  void *v7; // x0
  void *v8; // x24
  __int64 v9; // x20
  void *i; // x28
  const void *v11; // x0
  NSValue *v12; // x26
  NSValue *v13; // x27
  void *v14; // x0
  NSValue *v15; // x2
  void *v16; // x0
  void *v17; // x23
  __int64 v18; // x27
  void *j; // x20
  void *v20; // x28
  const mach_header_64 *v21; // x0
  int magic; // w8
  const mach_header_64 *p_reserved; // x21
  uint32_t ncmds; // w8
  unsigned int v25; // w9
  __int64 cputype; // x10
  bool v28; // cf
  uint8_t *v29; // x0
  uint8_t *v30; // x25
  NSMutableDictionary *v31; // x26
  void *v32; // x0
  void *v33; // x24
  __int64 v34; // x20
  void *k; // x21
  void *v36; // x25
  void *v37; // x0
  void *v38; // x21
  __int64 v39; // x20
  void *m; // x22
  void *v41; // x0
  id v42; // x20
  void *v43; // x19
  void *v44; // x19
  id v46; // [xsp+0h] [xbp-3B0h]
  void *v47; // [xsp+0h] [xbp-3B0h]
  id v48; // [xsp+8h] [xbp-3A8h]
  __int128 v49; // [xsp+10h] [xbp-3A0h] BYREF
  __int128 v50; // [xsp+20h] [xbp-390h]
  __int128 v51; // [xsp+30h] [xbp-380h]
  __int128 v52; // [xsp+40h] [xbp-370h]
  void *v53; // [xsp+58h] [xbp-358h] BYREF
  __int128 v54; // [xsp+60h] [xbp-350h] BYREF
  __int128 v55; // [xsp+70h] [xbp-340h]
  __int128 v56; // [xsp+80h] [xbp-330h]
  __int128 v57; // [xsp+90h] [xbp-320h]
  void *v58; // [xsp+A0h] [xbp-310h] BYREF
  void *v59; // [xsp+A8h] [xbp-308h] BYREF
  __int128 v60; // [xsp+B0h] [xbp-300h] BYREF
  __int128 v61; // [xsp+C0h] [xbp-2F0h]
  __int128 v62; // [xsp+D0h] [xbp-2E0h]
  __int128 v63; // [xsp+E0h] [xbp-2D0h]
  __int128 v64; // [xsp+F0h] [xbp-2C0h] BYREF
  __int128 v65; // [xsp+100h] [xbp-2B0h]
  __int128 v66; // [xsp+110h] [xbp-2A0h]
  __int128 v67; // [xsp+120h] [xbp-290h]
  _BYTE v68[128]; // [xsp+130h] [xbp-280h] BYREF
  _BYTE v69[128]; // [xsp+1B0h] [xbp-200h] BYREF
  _BYTE v70[128]; // [xsp+230h] [xbp-180h] BYREF
  Dl_info v71; // [xsp+2B0h] [xbp-100h] BYREF
  _BYTE v72[128]; // [xsp+2D0h] [xbp-E0h] BYREF

  v4 = +[NSMutableData data](&OBJC_CLASS___NSMutableData, "data");
  v5 = +[NSMutableSet set](&OBJC_CLASS___NSMutableSet, "set");
  if ( qword_1001F80A0 != -1 )
    dispatch_once(&qword_1001F80A0, &stru_1001DF6F8);
  v48 = objc_alloc_init((Class)&OBJC_CLASS___NSMutableArray);
  v6 = objc_alloc_init((Class)&OBJC_CLASS___NSMutableSet);
  v64 = 0u;
  v65 = 0u;
  v66 = 0u;
  v67 = 0u;
  v7 = objc_msgSend(a3, "countByEnumeratingWithState:objects:count:", &v64, v72, 16LL);
  v46 = a3;
  if ( v7 )
  {
    v8 = v7;
    v9 = *(_QWORD *)v65;
    do
    {
      for ( i = 0LL; i != v8; i = (char *)i + 1 )
      {
        if ( *(_QWORD *)v65 != v9 )
          objc_enumerationMutation(a3);
        v11 = objc_msgSend(*(id *)(*((_QWORD *)&v64 + 1) + 8LL * (_QWORD)i), "pointerValue", v46);
        memset(&v71, 0, sizeof(v71));
        if ( dladdr(v11, &v71) )
        {
          v12 = +[NSValue valueWithPointer:](&OBJC_CLASS___NSValue, "valueWithPointer:", v71.dli_fbase);
          if ( ((unsigned int)objc_msgSend(v5, "containsObject:", v12) & 1) == 0 )
          {
            objc_msgSend(v5, "addObject:", v12);
            os_unfair_lock_lock((os_unfair_lock_t)&dword_1001F80B8);
            v13 = (NSValue *)objc_msgSend((id)qword_1001F80B0, "objectForKeyedSubscript:", v12);
            os_unfair_lock_unlock((os_unfair_lock_t)&dword_1001F80B8);
            if ( v13 )
            {
              v14 = v48;
              v15 = v13;
            }
            else
            {
              v14 = v6;
              v15 = v12;
            }
            objc_msgSend(v14, "addObject:", v15);
            a3 = v46;
          }
        }
      }
      v8 = objc_msgSend(a3, "countByEnumeratingWithState:objects:count:", &v64, v72, 16LL);
    }
    while ( v8 );
  }
  v62 = 0u;
  v63 = 0u;
  v60 = 0u;
  v61 = 0u;
  v16 = objc_msgSend(v6, "countByEnumeratingWithState:objects:count:", &v60, v70, 16LL, v46);
  if ( v16 )
  {
    v17 = v16;
    v18 = *(_QWORD *)v61;
    do
    {
      for ( j = 0LL; j != v17; j = (char *)j + 1 )
      {
        if ( *(_QWORD *)v61 != v18 )
          objc_enumerationMutation(v6);
        v20 = *(void **)(*((_QWORD *)&v60 + 1) + 8LL * (_QWORD)j);
        v21 = (const mach_header_64 *)objc_msgSend(v20, "pointerValue");
        magic = v21->magic;
        if ( (int)v21->magic > -17958195 )
        {
          if ( magic != -17958193 )
          {
            if ( magic != -17958194 )
              continue;
LABEL_27:
            p_reserved = (const mach_header_64 *)&v21->reserved;
            goto LABEL_29;
          }
        }
        else
        {
          if ( magic == -822415874 )
            goto LABEL_27;
          if ( magic != -805638658 )
            continue;
        }
        p_reserved = v21 + 1;
LABEL_29:
        ncmds = v21->ncmds;
        if ( ncmds )
        {
          v25 = 1;
          while ( 1 )
          {
            cputype = (unsigned int)p_reserved->cputype;
            if ( p_reserved->magic == 27 && (_DWORD)cputype == 24 )
              break;
            p_reserved = (const mach_header_64 *)((char *)p_reserved + cputype);
            if ( p_reserved )
              v28 = v25 >= ncmds;
            else
              v28 = 1;
            ++v25;
            if ( v28 )
              goto LABEL_43;
          }
          v71.dli_fname = 0LL;
          v29 = getsegmentdata(v21, "__TEXT", (unsigned __int64 *)&v71);
          if ( v29 )
          {
            v30 = v29;
            v31 = +[NSMutableDictionary dictionaryWithSharedKeySet:](
                    &OBJC_CLASS___NSMutableDictionary,
                    "dictionaryWithSharedKeySet:",
                    qword_1001F80A8);
            -[NSMutableDictionary setObject:forKeyedSubscript:](
              v31,
              "setObject:forKeyedSubscript:",
              objc_autorelease(objc_msgSend(objc_alloc((Class)&OBJC_CLASS___NSUUID), "initWithUUIDBytes:", &p_reserved->cpusubtype)),
              CFSTR("uuid"));
            -[NSMutableDictionary setObject:forKeyedSubscript:](
              v31,
              "setObject:forKeyedSubscript:",
              +[NSValue valueWithPointer:](&OBJC_CLASS___NSValue, "valueWithPointer:", v30),
              CFSTR("loadaddr"));
            os_unfair_lock_lock((os_unfair_lock_t)&dword_1001F80B8);
            objc_msgSend((id)qword_1001F80B0, "setObject:forKeyedSubscript:", v31, v20);
            os_unfair_lock_unlock((os_unfair_lock_t)&dword_1001F80B8);
            objc_msgSend(v48, "addObject:", v31);
          }
        }
LABEL_43:
        ;
      }
      v17 = objc_msgSend(v6, "countByEnumeratingWithState:objects:count:", &v60, v70, 16LL);
    }
    while ( v17 );
  }
  objc_release(v6);
  v59 = objc_msgSend(v48, "count");
  objc_msgSend(v4, "appendBytes:length:", &v59, 8LL);
  v58 = objc_msgSend(v47, "count");
  objc_msgSend(v4, "appendBytes:length:", &v58, 8LL);
  v56 = 0u;
  v57 = 0u;
  v54 = 0u;
  v55 = 0u;
  v32 = objc_msgSend(v48, "countByEnumeratingWithState:objects:count:", &v54, v69, 16LL);
  if ( v32 )
  {
    v33 = v32;
    v34 = *(_QWORD *)v55;
    do
    {
      for ( k = 0LL; k != v33; k = (char *)k + 1 )
      {
        if ( *(_QWORD *)v55 != v34 )
          objc_enumerationMutation(v48);
        v36 = *(void **)(*((_QWORD *)&v54 + 1) + 8LL * (_QWORD)k);
        v71.dli_fname = 0LL;
        v71.dli_fbase = 0LL;
        objc_msgSend(objc_msgSend(v36, "objectForKeyedSubscript:", CFSTR("uuid")), "getUUIDBytes:", &v71);
        v53 = 0LL;
        v53 = objc_msgSend(objc_msgSend(v36, "objectForKeyedSubscript:", CFSTR("loadaddr")), "pointerValue");
        objc_msgSend(v4, "appendBytes:length:", &v71, 16LL);
        objc_msgSend(v4, "appendBytes:length:", &v53, 8LL);
      }
      v33 = objc_msgSend(v48, "countByEnumeratingWithState:objects:count:", &v54, v69, 16LL);
    }
    while ( v33 );
  }
  objc_release(v48);
  v51 = 0u;
  v52 = 0u;
  v49 = 0u;
  v50 = 0u;
  v37 = objc_msgSend(v47, "countByEnumeratingWithState:objects:count:", &v49, v68, 16LL);
  if ( v37 )
  {
    v38 = v37;
    v39 = *(_QWORD *)v50;
    do
    {
      for ( m = 0LL; m != v38; m = (char *)m + 1 )
      {
        if ( *(_QWORD *)v50 != v39 )
          objc_enumerationMutation(v47);
        v41 = *(void **)(*((_QWORD *)&v49 + 1) + 8LL * (_QWORD)m);
        v71.dli_fname = 0LL;
        v71.dli_fname = (const char *)objc_msgSend(v41, "pointerValue");
        objc_msgSend(v4, "appendBytes:length:", &v71, 8LL);
      }
      v38 = objc_msgSend(v47, "countByEnumeratingWithState:objects:count:", &v49, v68, 16LL);
    }
    while ( v38 );
  }
  v42 = objc_alloc_init((Class)&OBJC_CLASS___NSMutableData);
  v43 = objc_msgSend(v4, "tsu_compressWithAlgorithm:operation:", 774LL, 0LL);
  LODWORD(v53) = 843347010;
  objc_msgSend(v42, "appendBytes:length:", &v53, 4LL);
  v71.dli_fname = (const char *)objc_msgSend(v43, "length");
  objc_msgSend(v42, "appendBytes:length:", &v71, 8LL);
  objc_msgSend(v42, "appendData:", v43);
  v44 = objc_msgSend(v42, "base64EncodedStringWithOptions:", 0LL);
  objc_release(v42);
  return v44;
}