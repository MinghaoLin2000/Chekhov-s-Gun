__ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne180100ILi0EEEPKc
_QWORD *__fastcall std::string::basic_string[abi:ne180100]<0>(_QWORD *a1, char *__s)
{
  size_t v4; // x0
  size_t v5; // x20
  void *v6; // x22
  __int64 v7; // x8
  __int64 v8; // x23

  v4 = strlen(__s);
  if ( v4 >= 0x7FFFFFFFFFFFFFF8LL )
    std::string::__throw_length_error[abi:ne180100](a1);
  v5 = v4;
  if ( v4 >= 0x17 )
  {
    v7 = (v4 & 0xFFFFFFFFFFFFFFF8LL) + 8;
    if ( (v4 | 7) != 0x17 )
      v7 = v4 | 7;
    v8 = v7 + 1;
    v6 = operator new(v7 + 1);
    a1[1] = v5;
    a1[2] = v8 | 0x8000000000000000LL;
    *a1 = v6;
  }
  else
  {
    *((_BYTE *)a1 + 23) = v4;
    v6 = a1;
    if ( !v4 )
      goto LABEL_9;
  }
  memmove(v6, __s, v5);
LABEL_9:
  *((_BYTE *)v6 + v5) = 0;
  return a1;
}