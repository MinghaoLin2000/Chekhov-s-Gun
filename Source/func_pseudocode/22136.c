__ZN25SandboxExtensionContainer13ExtendSandboxEPKc
bool __fastcall SandboxExtensionContainer::ExtendSandbox(SandboxExtensionContainer *this, char *a2)
{
  __int64 v4; // x0
  __int64 v5; // x20
  unsigned __int64 v6; // x11
  __int64 *v7; // x10
  _QWORD *v8; // x22
  __int64 *v9; // x0
  __int64 v10; // x22
  unsigned __int64 v11; // x12
  __int64 v12; // x11
  __int64 v13; // x1
  __int64 v14; // x8
  __int64 *v15; // x9
  __int64 v16; // x8
  __int64 v17; // t1
  unsigned __int64 v18; // x22
  __int64 v19; // x0
  char *v21; // [xsp+8h] [xbp-28h] BYREF

  v21 = a2;
  v4 = sandbox_extension_consume(a2);
  v5 = v4;
  if ( v4 != -1 )
  {
    v6 = *((_QWORD *)this + 5);
    v7 = (__int64 *)*((_QWORD *)this + 4);
    if ( (unsigned __int64)v7 >= v6 )
    {
      v9 = (__int64 *)*((_QWORD *)this + 3);
      v10 = v7 - v9;
      v11 = v10 + 1;
      if ( (unsigned __int64)(v10 + 1) >> 61 )
        std::vector<long long>::__throw_length_error[abi:ne180100]((char *)this + 24);
      v12 = v6 - (_QWORD)v9;
      if ( v12 >> 2 > v11 )
        v11 = v12 >> 2;
      if ( (unsigned __int64)v12 >= 0x7FFFFFFFFFFFFFF8LL )
        v13 = 0x1FFFFFFFFFFFFFFFLL;
      else
        v13 = v11;
      if ( v13 )
      {
        v14 = std::__allocate_at_least[abi:ne180100]<std::allocator<long long>>((char *)this + 40);
        v9 = (__int64 *)*((_QWORD *)this + 3);
        v7 = (__int64 *)*((_QWORD *)this + 4);
      }
      else
      {
        v14 = 0LL;
      }
      v15 = (__int64 *)(v14 + 8 * v10);
      v16 = v14 + 8 * v13;
      *v15 = v5;
      v8 = v15 + 1;
      while ( v7 != v9 )
      {
        v17 = *--v7;
        *--v15 = v17;
      }
      *((_QWORD *)this + 3) = v15;
      *((_QWORD *)this + 4) = v8;
      *((_QWORD *)this + 5) = v16;
      if ( v9 )
        operator delete(v9);
    }
    else
    {
      *v7 = v4;
      v8 = v7 + 1;
    }
    *((_QWORD *)this + 4) = v8;
    v18 = *((_QWORD *)this + 1);
    if ( v18 >= *((_QWORD *)this + 2) )
    {
      v19 = std::vector<std::string>::__emplace_back_slow_path<char const*&>(this, &v21);
    }
    else
    {
      std::string::basic_string[abi:ne180100]<0>(*((_QWORD *)this + 1), a2);
      v19 = v18 + 24;
      *((_QWORD *)this + 1) = v18 + 24;
    }
    *((_QWORD *)this + 1) = v19;
  }
  return v5 != -1;
}