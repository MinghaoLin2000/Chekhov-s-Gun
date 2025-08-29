__ZN6google8protobuf21FastInt64ToBufferLeftExPc
_BYTE *__fastcall google::protobuf::FastInt64ToBufferLeft(__int64 this, _BYTE *a2, char *a3)
{
  if ( this < 0 )
  {
    *a2++ = 45;
    this = -this;
  }
  return google::protobuf::FastUInt64ToBufferLeft((google::protobuf *)this, a2, a3);
}