__ZN6google8protobuf8internal17AssignDescriptorsEPKNS1_15DescriptorTableEb
void __fastcall google::protobuf::internal::AssignDescriptors(__int64 a1, char a2)
{
  std::once_flag::_State_type *v2; // x0
  char v3; // [xsp+7h] [xbp-29h] BYREF
  __int64 v4; // [xsp+8h] [xbp-28h] BYREF
  _QWORD *v5; // [xsp+10h] [xbp-20h] BYREF
  _QWORD v6[3]; // [xsp+18h] [xbp-18h] BYREF

  v4 = a1;
  v3 = a2;
  if ( (a2 & 1) == 0 )
    v3 = *(_BYTE *)(a1 + 1);
  v2 = *(std::once_flag::_State_type **)(a1 + 32);
  if ( atomic_load_explicit((atomic_ullong *volatile)v2, memory_order_acquire) != -1LL )
  {
    v6[0] = sub_1000DEFB4;
    v6[1] = &v4;
    v6[2] = &v3;
    v5 = v6;
    std::__call_once(v2, &v5, (void (__cdecl *)(void *))sub_1000E0B14);
  }
}