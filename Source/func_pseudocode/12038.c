__ZN6google8protobuf21FastInt32ToBufferLeftEiPc
_BYTE *__fastcall google::protobuf::FastInt32ToBufferLeft(google::protobuf *this, _BYTE *a2, char *a3)
{
  if ( ((unsigned int)this & 0x80000000) != 0 )
  {
    *a2++ = 45;
    this = (google::protobuf *)(unsigned int)-(int)this;
  }
  return google::protobuf::FastUInt32ToBufferLeft(this, a2, a3);
}