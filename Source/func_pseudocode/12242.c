__ZN6google8protobuf2io19EpsCopyOutputStream14ZigZagEncode32Ei
__int64 __fastcall google::protobuf::io::EpsCopyOutputStream::ZigZagEncode32(
        google::protobuf::io::EpsCopyOutputStream *this)
{
  return (2 * (_DWORD)this) ^ (unsigned int)((int)this >> 31);
}