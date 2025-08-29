__ZN3TSP39LargeStringArraySegment_OptionalElementD0Ev
void __fastcall TSP::LargeStringArraySegment_OptionalElement::~LargeStringArraySegment_OptionalElement(
        TSP::LargeStringArraySegment_OptionalElement *this)
{
  __int64 v1; // x0
  __int64 vars8; // [xsp+8h] [xbp+8h]

  TSP::LargeStringArraySegment_OptionalElement::~LargeStringArraySegment_OptionalElement(this);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  operator delete(v1, 0x1081C4072235B19LL);
}