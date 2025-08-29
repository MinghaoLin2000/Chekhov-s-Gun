__ZN6google8protobuf8internal14ArenaStringPtr3SetEPKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEOS9_PNS0_5ArenaE
void __fastcall google::protobuf::internal::ArenaStringPtr::Set(__int64 *a1, __int64 a2, __int128 *a3, __int64 a4)
{
  __int64 v5; // x21
  __int128 v6; // q0
  __int64 v8; // x0

  v5 = *a1;
  if ( *a1 == a2 )
  {
    if ( a4 )
    {
      v8 = sub_1000EFAB8(a4, a3);
    }
    else
    {
      v8 = operator new(24LL, 0x1012C40EC159624LL);
      *(_OWORD *)v8 = *a3;
      *(_QWORD *)(v8 + 16) = *((_QWORD *)a3 + 2);
      *(_QWORD *)a3 = 0LL;
      *((_QWORD *)a3 + 1) = 0LL;
      *((_QWORD *)a3 + 2) = 0LL;
    }
    *a1 = v8;
  }
  else
  {
    if ( *(char *)(v5 + 23) < 0 )
      operator delete(*(void **)v5);
    v6 = *a3;
    *(_QWORD *)(v5 + 16) = *((_QWORD *)a3 + 2);
    *(_OWORD *)v5 = v6;
    *((_BYTE *)a3 + 23) = 0;
    *(_BYTE *)a3 = 0;
  }
}