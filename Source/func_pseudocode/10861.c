__ZNK6google8protobuf10Descriptor34FindExtensionRangeContainingNumberEi
_DWORD *__fastcall google::protobuf::Descriptor::FindExtensionRangeContainingNumber(
        google::protobuf::Descriptor *this,
        int a2)
{
  __int64 v2; // x8
  _DWORD *result; // x0

  v2 = *((unsigned int *)this + 31);
  if ( (int)v2 < 1 )
    return 0LL;
  for ( result = (_DWORD *)*((_QWORD *)this + 9); *result > a2 || result[1] <= a2; result += 4 )
  {
    if ( !--v2 )
      return 0LL;
  }
  return result;
}