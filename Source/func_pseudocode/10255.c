__ZN3TSP12Path_ElementD0Ev
void __fastcall TSP::Path_Element::~Path_Element(TSP::Path_Element *this)
{
  __int64 v1; // x0
  __int64 vars8; // [xsp+8h] [xbp+8h]

  TSP::Path_Element::~Path_Element(this);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  operator delete(v1, 0x10A1C40D5D207CCLL);
}