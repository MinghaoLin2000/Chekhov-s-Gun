__ZNK6google8protobuf8internal15DynamicMapField19SetMapIteratorValueEPNS0_11MapIteratorE
__int64 __fastcall google::protobuf::internal::DynamicMapField::SetMapIteratorValue(__int64 a1, __int64 **a2)
{
  __int64 v2; // x20
  __int64 result; // x0

  v2 = **a2;
  if ( v2 )
  {
    result = sub_1000CDA48(a2 + 2, **a2);
    *((_DWORD *)a2 + 14) = *(_DWORD *)(v2 + 40);
    a2[6] = *(__int64 **)(v2 + 32);
  }
  return result;
}