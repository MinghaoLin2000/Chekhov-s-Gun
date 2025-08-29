__ZN3TSP39LargeStringArraySegment_OptionalElement8CopyFromERKN6google8protobuf7MessageE
TSP::LargeStringArraySegment_OptionalElement *__fastcall TSP::LargeStringArraySegment_OptionalElement::CopyFrom(
        TSP::LargeStringArraySegment_OptionalElement *this,
        const google::protobuf::Message *a2)
{
  __int64 v2; // x30
  TSP::LargeStringArraySegment_OptionalElement *v4; // x20

  if ( a2 != this )
  {
    v4 = this;
    TSP::LargeStringArraySegment_OptionalElement::Clear(this);
    if ( ((v2 ^ (2 * v2)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return (TSP::LargeStringArraySegment_OptionalElement *)TSP::LargeStringArraySegment_OptionalElement::MergeFrom(
                                                             v4,
                                                             a2);
  }
  return this;
}