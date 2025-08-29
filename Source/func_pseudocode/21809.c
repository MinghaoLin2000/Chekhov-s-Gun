__ZN10XpcSandbox16consumeExtensionEPKc
void __fastcall XpcSandbox::consumeExtension(XpcSandbox *this, const char *a2)
{
  __int64 v3; // x0
  __int64 v4; // x20
  unsigned __int64 v5; // x11
  __int64 *v6; // x10
  _QWORD *v7; // x21
  __int64 *v8; // x0
  __int64 v9; // x21
  unsigned __int64 v10; // x12
  __int64 v11; // x11
  __int64 v12; // x1
  __int64 v13; // x8
  __int64 *v14; // x9
  __int64 v15; // x8
  __int64 v16; // t1

  if ( a2 )
  {
    v3 = sandbox_extension_consume(a2);
    if ( v3 != -1 )
    {
      v4 = v3;
      v5 = *((_QWORD *)this + 3);
      v6 = (__int64 *)*((_QWORD *)this + 2);
      if ( (unsigned __int64)v6 >= v5 )
      {
        v8 = (__int64 *)*((_QWORD *)this + 1);
        v9 = v6 - v8;
        v10 = v9 + 1;
        if ( (unsigned __int64)(v9 + 1) >> 61 )
          sub_100007480((char *)this + 8);
        v11 = v5 - (_QWORD)v8;
        if ( v11 >> 2 > v10 )
          v10 = v11 >> 2;
        if ( (unsigned __int64)v11 >= 0x7FFFFFFFFFFFFFF8LL )
          v12 = 0x1FFFFFFFFFFFFFFFLL;
        else
          v12 = v10;
        if ( v12 )
        {
          v13 = sub_100008574((char *)this + 24);
          v8 = (__int64 *)*((_QWORD *)this + 1);
          v6 = (__int64 *)*((_QWORD *)this + 2);
        }
        else
        {
          v13 = 0LL;
        }
        v14 = (__int64 *)(v13 + 8 * v9);
        v15 = v13 + 8 * v12;
        *v14 = v4;
        v7 = v14 + 1;
        while ( v6 != v8 )
        {
          v16 = *--v6;
          *--v14 = v16;
        }
        *((_QWORD *)this + 1) = v14;
        *((_QWORD *)this + 2) = v7;
        *((_QWORD *)this + 3) = v15;
        if ( v8 )
          operator delete(v8);
      }
      else
      {
        *v6 = v3;
        v7 = v6 + 1;
      }
      *((_QWORD *)this + 2) = v7;
    }
  }
}