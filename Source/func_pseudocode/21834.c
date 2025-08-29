__ZN12StlConverterD0Ev
void __fastcall StlConverter::~StlConverter(StlConverter *this)
{
  void *v1; // x0
  __int64 vars8; // [xsp+8h] [xbp+8h]

  StlConverter::~StlConverter(this);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  operator delete(v1);
}