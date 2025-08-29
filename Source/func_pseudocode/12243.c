__ZN6google8protobuf2io19EpsCopyOutputStream14ZigZagEncode64Ex
__int64 __fastcall google::protobuf::io::EpsCopyOutputStream::ZigZagEncode64(__int64 this)
{
  return (2 * this) ^ (this >> 63);
}