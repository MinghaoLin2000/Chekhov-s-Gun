-[TSUBacktrace initWithAdjustment:]
TSUBacktrace *__cdecl -[TSUBacktrace initWithAdjustment:](TSUBacktrace *self, SEL a2, int a3)
{
  TSUBacktrace *v4; // x20
  int v5; // w0
  void **v6; // x0
  objc_super v8; // [xsp+0h] [xbp-840h] BYREF
  void *__src[2]; // [xsp+10h] [xbp-830h] BYREF
  __int128 v10; // [xsp+20h] [xbp-820h]
  __int128 v11; // [xsp+30h] [xbp-810h]
  __int128 v12; // [xsp+40h] [xbp-800h]
  __int128 v13; // [xsp+50h] [xbp-7F0h]
  __int128 v14; // [xsp+60h] [xbp-7E0h]
  __int128 v15; // [xsp+70h] [xbp-7D0h]
  __int128 v16; // [xsp+80h] [xbp-7C0h]
  __int128 v17; // [xsp+90h] [xbp-7B0h]
  __int128 v18; // [xsp+A0h] [xbp-7A0h]
  __int128 v19; // [xsp+B0h] [xbp-790h]
  __int128 v20; // [xsp+C0h] [xbp-780h]
  __int128 v21; // [xsp+D0h] [xbp-770h]
  __int128 v22; // [xsp+E0h] [xbp-760h]
  __int128 v23; // [xsp+F0h] [xbp-750h]
  __int128 v24; // [xsp+100h] [xbp-740h]
  __int128 v25; // [xsp+110h] [xbp-730h]
  __int128 v26; // [xsp+120h] [xbp-720h]
  __int128 v27; // [xsp+130h] [xbp-710h]
  __int128 v28; // [xsp+140h] [xbp-700h]
  __int128 v29; // [xsp+150h] [xbp-6F0h]
  __int128 v30; // [xsp+160h] [xbp-6E0h]
  __int128 v31; // [xsp+170h] [xbp-6D0h]
  __int128 v32; // [xsp+180h] [xbp-6C0h]
  __int128 v33; // [xsp+190h] [xbp-6B0h]
  __int128 v34; // [xsp+1A0h] [xbp-6A0h]
  __int128 v35; // [xsp+1B0h] [xbp-690h]
  __int128 v36; // [xsp+1C0h] [xbp-680h]
  __int128 v37; // [xsp+1D0h] [xbp-670h]
  __int128 v38; // [xsp+1E0h] [xbp-660h]
  __int128 v39; // [xsp+1F0h] [xbp-650h]
  __int128 v40; // [xsp+200h] [xbp-640h]

  v8.receiver = self;
  v8.super_class = (Class)&OBJC_CLASS___TSUBacktrace;
  v4 = -[TSUBacktrace init](&v8, "init");
  if ( v4 )
  {
    v39 = 0u;
    v40 = 0u;
    v37 = 0u;
    v38 = 0u;
    v35 = 0u;
    v36 = 0u;
    v33 = 0u;
    v34 = 0u;
    v31 = 0u;
    v32 = 0u;
    v29 = 0u;
    v30 = 0u;
    v27 = 0u;
    v28 = 0u;
    v25 = 0u;
    v26 = 0u;
    v23 = 0u;
    v24 = 0u;
    v21 = 0u;
    v22 = 0u;
    v19 = 0u;
    v20 = 0u;
    v17 = 0u;
    v18 = 0u;
    v15 = 0u;
    v16 = 0u;
    v13 = 0u;
    v14 = 0u;
    v11 = 0u;
    v12 = 0u;
    *(_OWORD *)__src = 0u;
    v10 = 0u;
    v5 = backtrace(__src, 256);
    v4->_frames = v5;
    v6 = (void **)malloc_type_calloc(v5, 8uLL, 0x80040B8603338uLL);
    v4->_callstack = v6;
    memcpy(v6, __src, 8LL * v4->_frames);
    v4->_initAdjustment = a3;
  }
  return v4;
}