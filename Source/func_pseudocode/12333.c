__ZN6google8protobuf2io16CodedInputStream28BackUpInputToCurrentPositionEv
__int64 __fastcall google::protobuf::io::CodedInputStream::BackUpInputToCurrentPosition(__int64 this)
{
  __int64 v1; // x19
  unsigned int v2; // w8

  if ( *(_DWORD *)(this + 28) + *(_DWORD *)(this + 44) + *(_DWORD *)(this + 8) - *(_DWORD *)this >= 1 )
  {
    v1 = this;
    this = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(this + 16) + 24LL))(*(_QWORD *)(this + 16));
    v2 = *(_DWORD *)(v1 + 24) - *(_DWORD *)(v1 + 44) + *(_QWORD *)v1 - *(_DWORD *)(v1 + 8);
    *(_QWORD *)(v1 + 8) = *(_QWORD *)v1;
    *(_DWORD *)(v1 + 44) = 0;
    *(_QWORD *)(v1 + 24) = v2;
  }
  return this;
}